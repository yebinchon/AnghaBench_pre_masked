
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int protocol; } ;
struct flow_cls_offload {int command; TYPE_1__ common; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_app*,struct net_device*,struct flow_cls_offload*) ;
 int FUNC_2 (struct nfp_app*,struct net_device*,struct flow_cls_offload*) ;
 int FUNC_3 (struct nfp_app*,struct net_device*,struct flow_cls_offload*) ;

__attribute__((used)) static int
FUNC_4(struct nfp_app *VAR_1, struct net_device *VAR_2,
   struct flow_cls_offload *VAR_3)
{
 if (!FUNC_0(VAR_3->common.protocol))
  return -VAR_0;

 switch (VAR_3->command) {
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 130:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
