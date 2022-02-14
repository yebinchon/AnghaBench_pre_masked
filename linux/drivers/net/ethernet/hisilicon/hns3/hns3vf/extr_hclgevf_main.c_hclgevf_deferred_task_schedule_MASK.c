
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclgevf_dev {int reset_state; scalar_t__ mbx_event_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclgevf_dev*) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hclgevf_dev *VAR_1)
{

 if (VAR_1->mbx_event_pending)
  FUNC_0(VAR_1);

 if (FUNC_2(VAR_0, &VAR_1->reset_state))
  FUNC_1(VAR_1);
}
