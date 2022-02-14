
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct softing {TYPE_3__* pdev; int * dpram; TYPE_2__* pdat; } ;
struct firmware {size_t size; scalar_t__* data; } ;
typedef int int8_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {size_t offs; scalar_t__ addr; } ;
struct TYPE_5__ {TYPE_1__ app; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,char const*,unsigned long) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (scalar_t__ const**,int*,scalar_t__*,int*,scalar_t__ const**) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int *,scalar_t__ const*,int) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char const*,int *) ;
 int FUNC_11 (struct softing*,int,char*) ;
 scalar_t__ FUNC_12 (char*,scalar_t__ const*,int) ;

int FUNC_13(const char *VAR_4, struct softing *VAR_5)
{
 const struct firmware *VAR_6;
 const uint8_t *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15 = 0;
 unsigned int VAR_16, VAR_17;
 int8_t VAR_18 = 0, VAR_19 = 0;

 VAR_10 = FUNC_10(&VAR_6, VAR_4, &VAR_5->pdev->dev);
 if (VAR_10) {
  FUNC_0(&VAR_5->pdev->dev, "request_firmware(%s) got %i\n",
   VAR_4, VAR_10);
  return VAR_10;
 }
 FUNC_1(&VAR_5->pdev->dev, "firmware(%s) got %lu bytes\n",
  VAR_4, (unsigned long)VAR_6->size);

 VAR_7 = VAR_6->data;
 VAR_8 = &VAR_7[VAR_6->size];

 VAR_10 = FUNC_3(&VAR_7, &VAR_12, &VAR_14, &VAR_13, &VAR_9);
 if (VAR_10)
  goto failed;
 VAR_10 = -VAR_2;
 if (VAR_12 != 0xffff) {
  FUNC_0(&VAR_5->pdev->dev, "firmware starts with type 0x%x\n",
   VAR_12);
  goto failed;
 }
 if (FUNC_12("Structured Binary Format, Softing GmbH", VAR_9, VAR_13)) {
  FUNC_0(&VAR_5->pdev->dev, "firmware string '%.*s' fault\n",
    VAR_13, VAR_9);
  goto failed;
 }

 while (VAR_7 < VAR_8) {
  VAR_10 = FUNC_3(&VAR_7, &VAR_12, &VAR_14, &VAR_13, &VAR_9);
  if (VAR_10)
   goto failed;

  if (VAR_12 == 3) {

   VAR_15 = VAR_14;
   VAR_19 = 1;
   continue;
  } else if (VAR_12 == 1) {

   VAR_18 = 1;
   break;
  } else if (VAR_12 != 0) {
   FUNC_0(&VAR_5->pdev->dev,
     "unknown record type 0x%04x\n", VAR_12);
   VAR_10 = -VAR_2;
   goto failed;
  }


  for (VAR_16 = 0, VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11)
   VAR_16 += VAR_9[VAR_11];

  VAR_16 &= 0xffff;

  FUNC_8(&VAR_5->dpram[VAR_5->pdat->app.offs], VAR_9, VAR_13);
  FUNC_6(VAR_5->pdat->app.offs + VAR_5->pdat->app.addr,
    &VAR_5->dpram[VAR_0 + 2]);
  FUNC_6(VAR_14, &VAR_5->dpram[VAR_0 + 6]);
  FUNC_5(VAR_13, &VAR_5->dpram[VAR_0 + 10]);
  FUNC_7(1, &VAR_5->dpram[VAR_0 + 12]);
  VAR_10 = FUNC_11(VAR_5, 1, "loading app.");
  if (VAR_10 < 0)
   goto failed;

  VAR_17 = FUNC_4(&VAR_5->dpram[VAR_1 + 2]);
  if (VAR_17 != VAR_16) {
   FUNC_0(&VAR_5->pdev->dev, "SRAM seems to be damaged"
    ", wanted 0x%04x, got 0x%04x\n", VAR_16, VAR_17);
   VAR_10 = -VAR_3;
   goto failed;
  }
 }
 if (!VAR_18 || !VAR_19)
  goto failed;

 FUNC_6(VAR_15, &VAR_5->dpram[VAR_0 + 2]);
 FUNC_7(1, &VAR_5->dpram[VAR_0 + 6]);
 VAR_10 = FUNC_11(VAR_5, 3, "start app.");
 if (VAR_10 < 0)
  goto failed;
 VAR_10 = 0;
failed:
 FUNC_9(VAR_6);
 if (VAR_10 < 0)
  FUNC_2(&VAR_5->pdev->dev, "firmware %s failed\n", VAR_4);
 return VAR_10;
}
