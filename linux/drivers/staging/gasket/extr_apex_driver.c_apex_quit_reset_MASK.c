
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gasket_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct gasket_dev*,int ,int ) ;
 int FUNC_4 (struct gasket_dev*,int ,int ,int,int,int) ;
 scalar_t__ FUNC_5 (struct gasket_dev*,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct gasket_dev *VAR_11)
{
 u32 VAR_12, VAR_13;

 if (VAR_10)
  return 0;







 FUNC_4(VAR_11, VAR_2,
        VAR_1, 0x0, 2, 14);






 FUNC_4(VAR_11, VAR_2,
        VAR_0, 0x0, 2, 18);






 FUNC_4(VAR_11, VAR_2,
        VAR_0, 0x2, 2, 2);


 if (FUNC_5(VAR_11, VAR_2,
     VAR_1, FUNC_0(6), 0,
     VAR_3, VAR_4)) {
  FUNC_2(VAR_11->dev,
   "RAM did not enable within timeout (%d ms)\n",
   VAR_4 * VAR_3);
  return -VAR_5;
 }


 if (FUNC_5(VAR_11, VAR_2,
     VAR_1,
     VAR_6, 0,
     VAR_3, VAR_4)) {
  FUNC_2(VAR_11->dev,
   "GCB did not leave reset within timeout (%d ms)\n",
   VAR_4 * VAR_3);
  return -VAR_5;
 }

 if (!VAR_9) {
  VAR_12 = FUNC_3(VAR_11, VAR_2,
       VAR_1);

  FUNC_4(VAR_11,
         VAR_2,
         VAR_1, 0x3,
         VAR_8,
         VAR_7);
  VAR_13 = FUNC_3(VAR_11, VAR_2,
       VAR_1);
  FUNC_1(VAR_11->dev,
   "Disallow HW clock gating 0x%x -> 0x%x\n", VAR_12, VAR_13);
 } else {
  VAR_12 = FUNC_3(VAR_11, VAR_2,
       VAR_1);

  FUNC_4(VAR_11, VAR_2,
         VAR_1, 2,
         VAR_8,
         VAR_7);
  VAR_13 = FUNC_3(VAR_11, VAR_2,
       VAR_1);
  FUNC_1(VAR_11->dev, "Allow HW clock gating 0x%x -> 0x%x\n",
   VAR_12, VAR_13);
 }

 return 0;
}
