
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ican3_dev {int echoq; } ;
struct can_frame {scalar_t__ can_id; scalar_t__ can_dlc; int data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ican3_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct can_frame *VAR_2 = (struct can_frame *)VAR_1->data;
 struct sk_buff *VAR_3 = FUNC_1(&VAR_0->echoq);
 struct can_frame *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = (struct can_frame *)VAR_3->data;
 if (VAR_2->can_id != VAR_4->can_id)
  return 0;

 if (VAR_2->can_dlc != VAR_4->can_dlc)
  return 0;

 return FUNC_0(VAR_2->data, VAR_4->data, VAR_2->can_dlc) == 0;
}
