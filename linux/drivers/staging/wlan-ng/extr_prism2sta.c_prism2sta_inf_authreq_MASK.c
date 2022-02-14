
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {struct hfa384x* priv; } ;
struct sk_buff {int data; } ;
struct hfa384x_inf_frame {int dummy; } ;
struct hfa384x {int link_bh; int authq; } ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ,struct hfa384x_inf_frame*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct wlandevice *VAR_0,
      struct hfa384x_inf_frame *VAR_1)
{
 struct hfa384x *VAR_2 = VAR_0->priv;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_1));
 if (VAR_3) {
  FUNC_3(VAR_3, sizeof(*VAR_1));
  FUNC_1(VAR_3->data, VAR_1, sizeof(*VAR_1));
  FUNC_4(&VAR_2->authq, VAR_3);
  FUNC_2(&VAR_2->link_bh);
 }
}
