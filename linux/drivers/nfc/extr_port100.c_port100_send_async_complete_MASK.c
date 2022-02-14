
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int data; } ;
struct port100_cmd {int status; int complete_cb_context; int (* complete_cb ) (struct port100*,int ,struct sk_buff*) ;struct sk_buff* resp; struct sk_buff* req; } ;
struct port100 {struct port100_cmd* cmd; } ;


 struct sk_buff* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct port100_cmd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_8 (struct port100*,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct port100 *VAR_2)
{
 struct port100_cmd *VAR_3 = VAR_2->cmd;
 int VAR_4 = VAR_3->status;

 struct sk_buff *VAR_5 = VAR_3->req;
 struct sk_buff *VAR_6 = VAR_3->resp;

 FUNC_1(VAR_5);

 VAR_2->cmd = ((void*)0);

 if (VAR_4 < 0) {
  VAR_3->complete_cb(VAR_2, VAR_3->complete_cb_context,
     FUNC_0(VAR_4));
  FUNC_1(VAR_6);
  goto done;
 }

 FUNC_5(VAR_6, FUNC_3(VAR_6->data));
 FUNC_4(VAR_6, VAR_0);
 FUNC_6(VAR_6, VAR_6->len - VAR_1);

 VAR_3->complete_cb(VAR_2, VAR_3->complete_cb_context, VAR_6);

done:
 FUNC_2(VAR_3);
}
