
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int * data; } ;
struct microread_info {int async_cb_type; int async_cb_context; int (* async_cb ) (int ,struct sk_buff*,int) ;} ;


 int VAR_0 ;

 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int) ;
 int FUNC_4 (int ,struct sk_buff*,int) ;
 int FUNC_5 (int ,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, struct sk_buff *VAR_2,
           int VAR_3)
{
 struct microread_info *VAR_4 = VAR_1;

 switch (VAR_4->async_cb_type) {
 case 128:
  if (VAR_3 == 0) {
   if (VAR_2->len == 0) {
    VAR_3 = -VAR_0;
    FUNC_0(VAR_2);
    VAR_4->async_cb(VAR_4->async_cb_context, ((void*)0),
            -VAR_0);
    return;
   }

   if (VAR_2->data[VAR_2->len - 1] != 0) {
    VAR_3 = FUNC_1(
             VAR_2->data[VAR_2->len - 1]);
    FUNC_0(VAR_2);
    VAR_4->async_cb(VAR_4->async_cb_context, ((void*)0),
            VAR_3);
    return;
   }

   FUNC_2(VAR_2, VAR_2->len - 1);
  }
  VAR_4->async_cb(VAR_4->async_cb_context, VAR_2, VAR_3);
  break;
 default:
  if (VAR_3 == 0)
   FUNC_0(VAR_2);
  break;
 }
}
