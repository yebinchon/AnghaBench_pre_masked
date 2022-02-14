
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_device {scalar_t__ model; TYPE_1__* pdev; } ;
struct firmware {unsigned int size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char const*,int *) ;
 int FUNC_4 (struct slic_device*) ;
 int FUNC_5 (struct firmware const*,int*) ;
 int FUNC_6 (struct slic_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct slic_device *VAR_9)
{
 u32 VAR_10[VAR_1];
 u32 VAR_11[VAR_1];
 const struct firmware *VAR_12;
 unsigned int VAR_13;
 const char *VAR_14;
 int VAR_15;
 unsigned int VAR_16;
 u32 VAR_17;
 int VAR_18 = 0;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 int VAR_23;

 VAR_14 = (VAR_9->model == VAR_5) ? VAR_4 :
          VAR_3;
 VAR_23 = FUNC_3(&VAR_12, VAR_14, &VAR_9->pdev->dev);
 if (VAR_23) {
  FUNC_0(&VAR_9->pdev->dev, "failed to load firmware %s\n", VAR_14);
  return VAR_23;
 }



 if (VAR_12->size < VAR_2) {
  FUNC_0(&VAR_9->pdev->dev,
   "invalid firmware size %zu (min is %u)\n", VAR_12->size,
   VAR_2);
  VAR_23 = -VAR_0;
  goto release;
 }

 VAR_17 = FUNC_5(VAR_12, &VAR_18);
 if (VAR_17 == 0 || VAR_17 > VAR_1) {
  FUNC_0(&VAR_9->pdev->dev,
   "invalid number of sections in firmware: %u", VAR_17);
  VAR_23 = -VAR_0;
  goto release;
 }

 VAR_13 = VAR_17 * 8 + 4;
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  VAR_11[VAR_16] = FUNC_5(VAR_12, &VAR_18);
  VAR_13 += VAR_11[VAR_16];
 }


 if (VAR_13 > VAR_12->size) {
  FUNC_0(&VAR_9->pdev->dev,
   "invalid firmware size %zu (expected >= %u)\n",
   VAR_12->size, VAR_13);
  VAR_23 = -VAR_0;
  goto release;
 }

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  VAR_10[VAR_16] = FUNC_5(VAR_12, &VAR_18);

 VAR_15 = VAR_18;
 VAR_20 = FUNC_5(VAR_12, &VAR_18);

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  unsigned int VAR_24 = VAR_11[VAR_19] >> 3;

  VAR_22 = VAR_10[VAR_19];

  for (VAR_21 = 0; VAR_21 < VAR_24; VAR_21++) {

   FUNC_6(VAR_9, VAR_6, VAR_22 + VAR_21);

   FUNC_6(VAR_9, VAR_6, VAR_20);
   VAR_20 = FUNC_5(VAR_12, &VAR_18);

   FUNC_6(VAR_9, VAR_6, VAR_20);
   VAR_20 = FUNC_5(VAR_12, &VAR_18);
  }
 }

 VAR_18 = VAR_15;

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  unsigned int VAR_25 = VAR_11[VAR_19] >> 3;

  VAR_20 = FUNC_5(VAR_12, &VAR_18);
  VAR_22 = VAR_10[VAR_19];
  if (VAR_22 < 0x8000)
   continue;

  for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {

   FUNC_6(VAR_9, VAR_6,
       VAR_7 | (VAR_22 + VAR_21));

   FUNC_6(VAR_9, VAR_6, VAR_20);
   VAR_20 = FUNC_5(VAR_12, &VAR_18);

   FUNC_6(VAR_9, VAR_6, VAR_20);
   VAR_20 = FUNC_5(VAR_12, &VAR_18);
  }
 }
 FUNC_4(VAR_9);
 FUNC_1(10);

 FUNC_6(VAR_9, VAR_6, VAR_8);
 FUNC_4(VAR_9);

 FUNC_1(20);
release:
 FUNC_2(VAR_12);

 return VAR_23;
}
