
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_ethqos {int speed; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;



 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct qcom_ethqos*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qcom_ethqos *VAR_22)
{

 FUNC_3(VAR_22, VAR_5,
        0, VAR_15);


 FUNC_3(VAR_22, VAR_8,
        0, VAR_14);

 switch (VAR_22->speed) {
 case 128:
  FUNC_3(VAR_22, VAR_7,
         VAR_7, VAR_14);
  FUNC_3(VAR_22, VAR_6,
         0, VAR_14);
  FUNC_3(VAR_22, VAR_12,
         VAR_12,
         VAR_14);
  FUNC_3(VAR_22, VAR_13,
         VAR_13, VAR_14);
  FUNC_3(VAR_22, VAR_1,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_4,
         VAR_4,
         VAR_15);
  FUNC_3(VAR_22, VAR_2,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_3,
         VAR_3,
         VAR_15);


  FUNC_3(VAR_22, VAR_20,
         57, VAR_21);
  FUNC_3(VAR_22, VAR_19,
         VAR_19,
         VAR_21);
  FUNC_3(VAR_22, VAR_9,
         VAR_9, VAR_14);
  break;

 case 129:
  FUNC_3(VAR_22, VAR_7,
         VAR_7, VAR_14);
  FUNC_3(VAR_22, VAR_6,
         VAR_6,
         VAR_14);
  FUNC_3(VAR_22, VAR_12,
         0, VAR_14);
  FUNC_3(VAR_22, VAR_13,
         0, VAR_14);
  FUNC_3(VAR_22, VAR_1,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_4,
         VAR_4,
         VAR_15);
  FUNC_3(VAR_22, VAR_10,
         FUNC_0(6), VAR_14);
  FUNC_3(VAR_22, VAR_2,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_3,
         0, VAR_15);

  FUNC_3(VAR_22, VAR_17,
         (FUNC_0(29) | FUNC_0(27)), VAR_21);
  FUNC_3(VAR_22, VAR_16,
         VAR_16,
         VAR_21);
  FUNC_3(VAR_22, VAR_18,
         VAR_18,
         VAR_21);
  FUNC_3(VAR_22, VAR_9,
         VAR_9, VAR_14);
  break;

 case 130:
  FUNC_3(VAR_22, VAR_7,
         VAR_7, VAR_14);
  FUNC_3(VAR_22, VAR_6,
         VAR_6,
         VAR_14);
  FUNC_3(VAR_22, VAR_12,
         0, VAR_14);
  FUNC_3(VAR_22, VAR_13,
         0, VAR_14);
  FUNC_3(VAR_22, VAR_1,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_4,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_11,
         FUNC_0(12) | FUNC_1(9, 8),
         VAR_14);
  FUNC_3(VAR_22, VAR_2,
         0, VAR_15);
  FUNC_3(VAR_22, VAR_3,
         0, VAR_15);

  FUNC_3(VAR_22, VAR_17,
         (FUNC_0(29) | FUNC_0(27)), VAR_21);
  FUNC_3(VAR_22, VAR_16,
         VAR_16,
         VAR_21);
  FUNC_3(VAR_22, VAR_18,
         VAR_18,
         VAR_21);
  FUNC_3(VAR_22, VAR_9,
         VAR_9, VAR_14);
  break;
 default:
  FUNC_2(&VAR_22->pdev->dev,
   "Invalid speed %d\n", VAR_22->speed);
  return -VAR_0;
 }

 return 0;
}
