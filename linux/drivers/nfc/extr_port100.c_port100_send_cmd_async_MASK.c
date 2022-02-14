
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct port100_cmd {int resp_len; void* complete_cb_context; int complete_cb; struct sk_buff* resp; struct sk_buff* req; int code; } ;
struct port100 {struct port100_cmd* cmd; TYPE_1__* interface; } ;
typedef int port100_send_async_complete_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct port100_cmd*) ;
 struct port100_cmd* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_6 (struct port100*,struct sk_buff*,struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct port100 *VAR_6, u8 VAR_7,
    struct sk_buff *VAR_8,
    port100_send_async_complete_t VAR_9,
    void *VAR_10)
{
 struct port100_cmd *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;
 int VAR_14 = VAR_3 +
   VAR_4 +
   VAR_5;

 if (VAR_6->cmd) {
  FUNC_4(&VAR_6->interface->dev,
   "A command is still in process\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_0(VAR_14, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  FUNC_1(VAR_12);
  return -VAR_1;
 }

 VAR_11->code = VAR_7;
 VAR_11->req = VAR_8;
 VAR_11->resp = VAR_12;
 VAR_11->resp_len = VAR_14;
 VAR_11->complete_cb = VAR_9;
 VAR_11->complete_cb_context = VAR_10;

 FUNC_5(VAR_6, VAR_7, VAR_8);

 VAR_6->cmd = VAR_11;

 VAR_13 = FUNC_6(VAR_6, VAR_8, VAR_12, VAR_14);
 if (VAR_13) {
  FUNC_2(VAR_11);
  FUNC_1(VAR_12);
  VAR_6->cmd = ((void*)0);
 }

 return VAR_13;
}
