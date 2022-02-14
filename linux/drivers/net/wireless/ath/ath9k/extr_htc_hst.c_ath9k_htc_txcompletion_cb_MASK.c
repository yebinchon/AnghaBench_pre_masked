
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct htc_target {int htc_flags; struct htc_endpoint* endpoint; int cmd_wait; } ;
struct htc_frame_hdr {size_t endpoint_id; } ;
struct TYPE_2__ {int priv; int (* tx ) (int ,struct sk_buff*,size_t,int) ;} ;
struct htc_endpoint {TYPE_1__ ep_callbacks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ,struct sk_buff*,size_t,int) ;

void FUNC_4(struct htc_target *VAR_2,
          struct sk_buff *VAR_3, bool VAR_4)
{
 struct htc_endpoint *VAR_5;
 struct htc_frame_hdr *VAR_6 = ((void*)0);

 if (VAR_2->htc_flags & VAR_0) {
  FUNC_0(&VAR_2->cmd_wait);
  VAR_2->htc_flags &= ~VAR_0;
  goto ret;
 }

 if (VAR_2->htc_flags & VAR_1) {
  FUNC_0(&VAR_2->cmd_wait);
  VAR_2->htc_flags &= ~VAR_1;
  goto ret;
 }

 if (VAR_3) {
  VAR_6 = (struct htc_frame_hdr *) VAR_3->data;
  VAR_5 = &VAR_2->endpoint[VAR_6->endpoint_id];
  FUNC_2(VAR_3, sizeof(struct htc_frame_hdr));

  if (VAR_5->ep_callbacks.tx) {
   VAR_5->ep_callbacks.tx(VAR_5->ep_callbacks.priv,
        VAR_3, VAR_6->endpoint_id,
        VAR_4);
  } else {
   FUNC_1(VAR_3);
  }
 }

 return;
ret:
 FUNC_1(VAR_3);
}
