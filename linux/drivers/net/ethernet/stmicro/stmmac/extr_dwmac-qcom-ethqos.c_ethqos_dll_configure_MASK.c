
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_ethqos {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct qcom_ethqos*,int ) ;
 int FUNC_4 (struct qcom_ethqos*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct qcom_ethqos *VAR_13)
{
 unsigned int VAR_14;
 int VAR_15 = 1000;


 FUNC_4(VAR_13, VAR_6,
        VAR_6, VAR_11);


 FUNC_4(VAR_13, VAR_7,
        VAR_7, VAR_11);


 FUNC_4(VAR_13, VAR_8,
        0, VAR_11);


 FUNC_4(VAR_13, VAR_9,
        VAR_9, VAR_11);

 FUNC_4(VAR_13, VAR_10,
        0, VAR_11);

 FUNC_4(VAR_13, VAR_0,
        0, VAR_11);


 do {
  VAR_14 = FUNC_3(VAR_13, VAR_11);
  VAR_14 &= VAR_8;
  if (!VAR_14)
   break;
  FUNC_2(1);
  VAR_15--;
 } while (VAR_15 > 0);
 if (!VAR_15)
  FUNC_1(&VAR_13->pdev->dev, "Clear CK_OUT_EN timedout\n");


 FUNC_4(VAR_13, VAR_8,
        VAR_8, VAR_11);


 VAR_15 = 1000;
 do {
  VAR_14 = FUNC_3(VAR_13, VAR_11);
  VAR_14 &= VAR_8;
  if (VAR_14)
   break;
  FUNC_2(1);
  VAR_15--;
 } while (VAR_15 > 0);
 if (!VAR_15)
  FUNC_1(&VAR_13->pdev->dev, "Set CK_OUT_EN timedout\n");


 FUNC_4(VAR_13, VAR_1,
        VAR_1, VAR_12);

 FUNC_4(VAR_13, VAR_4,
        0, VAR_12);

 FUNC_4(VAR_13, VAR_5,
        0x1A << 10, VAR_12);

 FUNC_4(VAR_13, VAR_2,
        FUNC_0(2), VAR_12);

 FUNC_4(VAR_13, VAR_3,
        VAR_3,
        VAR_12);

 return 0;
}
