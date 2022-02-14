
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct pn533_cmd {void* complete_cb_context; int complete_cb; struct sk_buff* req; int code; } ;
struct pn533 {struct pn533_cmd* cmd; TYPE_1__* phy_ops; } ;
typedef int pn533_send_async_complete_t ;
struct TYPE_2__ {int (* send_frame ) (struct pn533*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pn533_cmd*) ;
 struct pn533_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pn533*,int ,struct sk_buff*) ;
 int FUNC_3 (struct pn533*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct pn533 *VAR_2, u8 VAR_3,
           struct sk_buff *VAR_4,
           pn533_send_async_complete_t VAR_5,
           void *VAR_6)
{
 struct pn533_cmd *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->code = VAR_3;
 VAR_7->req = VAR_4;
 VAR_7->complete_cb = VAR_5;
 VAR_7->complete_cb_context = VAR_6;

 FUNC_2(VAR_2, VAR_3, VAR_4);

 VAR_2->cmd = VAR_7;
 VAR_8 = VAR_2->phy_ops->send_frame(VAR_2, VAR_4);
 if (VAR_8 < 0) {
  VAR_2->cmd = ((void*)0);
  FUNC_0(VAR_7);
 }

 return VAR_8;
}
