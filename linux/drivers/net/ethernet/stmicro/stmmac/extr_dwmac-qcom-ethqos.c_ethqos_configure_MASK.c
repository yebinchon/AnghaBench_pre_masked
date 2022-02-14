
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_ethqos {unsigned int num_por; scalar_t__ speed; TYPE_2__* pdev; TYPE_1__* por; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int offset; int value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 unsigned int volatile VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct qcom_ethqos*) ;
 int FUNC_4 (struct qcom_ethqos*) ;
 int FUNC_5 (struct qcom_ethqos*) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (struct qcom_ethqos*,int ) ;
 int FUNC_8 (struct qcom_ethqos*,int ,int ,int ) ;
 int FUNC_9 (struct qcom_ethqos*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct qcom_ethqos *VAR_11)
{
 volatile unsigned int VAR_12;
 unsigned int VAR_13, VAR_14 = 1000;


 for (VAR_13 = 0; VAR_13 < VAR_11->num_por; VAR_13++)
  FUNC_9(VAR_11, VAR_11->por[VAR_13].value,
        VAR_11->por[VAR_13].offset);
 FUNC_5(VAR_11);




 FUNC_8(VAR_11, VAR_4,
        VAR_4, VAR_6);


 FUNC_8(VAR_11, VAR_5,
        VAR_5, VAR_6);


 FUNC_8(VAR_11, VAR_4, 0,
        VAR_6);


 FUNC_8(VAR_11, VAR_5, 0,
        VAR_6);

 if (VAR_11->speed != VAR_9 && VAR_11->speed != VAR_8) {

  FUNC_8(VAR_11, VAR_3,
         VAR_3, VAR_6);


  FUNC_8(VAR_11, VAR_2,
         VAR_2,
         VAR_6);


  FUNC_8(VAR_11, FUNC_1(26, 24), FUNC_0(26), VAR_7);


  do {
   FUNC_6(1);
   VAR_12 = FUNC_7(VAR_11, VAR_0);
   if (VAR_12 & VAR_1)
    break;
  } while (VAR_14 > 0);
  if (!VAR_14)
   FUNC_2(&VAR_11->pdev->dev,
    "Timeout while waiting for DLL lock\n");
 }

 if (VAR_11->speed == VAR_10)
  FUNC_3(VAR_11);

 FUNC_4(VAR_11);

 return 0;
}
