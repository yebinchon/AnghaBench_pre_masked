
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int rst_service_task; int affinity_mask; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_3)
{
 if (!FUNC_3(VAR_0, &VAR_3->state) &&
     !FUNC_2(VAR_1, &VAR_3->state))
  FUNC_1(FUNC_0(&VAR_3->affinity_mask), VAR_2,
         &VAR_3->rst_service_task);
}
