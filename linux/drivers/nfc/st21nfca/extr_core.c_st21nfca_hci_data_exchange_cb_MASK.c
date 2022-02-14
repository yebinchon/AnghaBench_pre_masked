
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_hci_info {int async_cb_type; int async_cb_context; int (* async_cb ) (int ,struct sk_buff*,int) ;} ;
struct sk_buff {int len; } ;



 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct sk_buff *VAR_1,
       int VAR_2)
{
 struct st21nfca_hci_info *VAR_3 = VAR_0;

 switch (VAR_3->async_cb_type) {
 case 128:
  if (VAR_2 == 0)
   FUNC_1(VAR_1, VAR_1->len - 1);
  VAR_3->async_cb(VAR_3->async_cb_context, VAR_1, VAR_2);
  break;
 default:
  if (VAR_2 == 0)
   FUNC_0(VAR_1);
  break;
 }
}
