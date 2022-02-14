
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* u32 ;
struct slic_device {scalar_t__ model; TYPE_1__* pdev; } ;
struct firmware {char const* size; scalar_t__* data; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 char const* VAR_1 ;
 scalar_t__ VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 char const* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char const*,int *) ;
 int FUNC_4 (struct slic_device*) ;
 char const* FUNC_5 (struct firmware const*,int*) ;
 int FUNC_6 (struct slic_device*,int ,char const*) ;

__attribute__((used)) static int FUNC_7(struct slic_device *VAR_8)
{
 const struct firmware *VAR_9;
 const char *VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_10 = (VAR_8->model == VAR_2) ? VAR_6 :
          VAR_5;
 VAR_15 = FUNC_3(&VAR_9, VAR_10, &VAR_8->pdev->dev);
 if (VAR_15) {
  FUNC_0(&VAR_8->pdev->dev,
   "failed to load receive sequencer firmware %s\n", VAR_10);
  return VAR_15;
 }



 if (VAR_9->size < VAR_1) {
  FUNC_0(&VAR_8->pdev->dev,
   "invalid firmware size %zu (min %u expected)\n",
   VAR_9->size, VAR_1);
  VAR_15 = -VAR_0;
  goto release;
 }

 VAR_11 = FUNC_5(VAR_9, &VAR_12);


 if ((VAR_11 + 4) > VAR_9->size) {
  FUNC_0(&VAR_8->pdev->dev,
   "invalid rcv-sequencer firmware size %zu\n", VAR_9->size);
  VAR_15 = -VAR_0;
  goto release;
 }


 FUNC_6(VAR_8, VAR_7, VAR_3);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  __le32 VAR_16;

  FUNC_6(VAR_8, VAR_7, VAR_14);

  VAR_13 = FUNC_5(VAR_9, &VAR_12);

  FUNC_6(VAR_8, VAR_7, VAR_13);

  VAR_16 = (__le32)VAR_9->data[VAR_12];
  VAR_13 = FUNC_1(VAR_16);
  VAR_12++;

  FUNC_6(VAR_8, VAR_7, VAR_13);
 }

 FUNC_6(VAR_8, VAR_7, VAR_4);
 FUNC_4(VAR_8);
release:
 FUNC_2(VAR_9);

 return VAR_15;
}
