
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int i_tei; int o_tei; } ;
struct TYPE_8__ {int flow; int tid; } ;
struct TYPE_10__ {TYPE_4__ v1; TYPE_3__ v0; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct pdp_ctx {int gtp_version; TYPE_5__ u; TYPE_2__ ms_addr_ip4; TYPE_1__ peer_addr_ip4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_10, u32 VAR_11, u32 VAR_12,
         u32 VAR_13, struct pdp_ctx *VAR_14)
{
 void *VAR_15;

 VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_12, &VAR_9, 0,
       VAR_13);
 if (VAR_15 == ((void*)0))
  goto nlmsg_failure;

 if (FUNC_5(VAR_10, VAR_8, VAR_14->gtp_version) ||
     FUNC_3(VAR_10, VAR_6, VAR_14->peer_addr_ip4.s_addr) ||
     FUNC_3(VAR_10, VAR_3, VAR_14->ms_addr_ip4.s_addr))
  goto nla_put_failure;

 switch (VAR_14->gtp_version) {
 case 129:
  if (FUNC_6(VAR_10, VAR_7, VAR_14->u.v0.tid, VAR_5) ||
      FUNC_4(VAR_10, VAR_1, VAR_14->u.v0.flow))
   goto nla_put_failure;
  break;
 case 128:
  if (FUNC_5(VAR_10, VAR_2, VAR_14->u.v1.i_tei) ||
      FUNC_5(VAR_10, VAR_4, VAR_14->u.v1.o_tei))
   goto nla_put_failure;
  break;
 }
 FUNC_1(VAR_10, VAR_15);
 return 0;

nlmsg_failure:
nla_put_failure:
 FUNC_0(VAR_10, VAR_15);
 return -VAR_0;
}
