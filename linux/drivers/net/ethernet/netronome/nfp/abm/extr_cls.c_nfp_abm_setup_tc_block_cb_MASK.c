
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ protocol; int extack; } ;
struct tc_cls_u32_offload {int command; int knode; TYPE_1__ common; } ;
struct nfp_repr {int netdev; struct nfp_abm_link* app_priv; } ;
struct nfp_abm_link {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;



 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_abm_link*,int *) ;
 int FUNC_3 (struct nfp_abm_link*,int *,scalar_t__,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(enum tc_setup_type VAR_4,
         void *VAR_5, void *VAR_6)
{
 struct tc_cls_u32_offload *VAR_7 = VAR_5;
 struct nfp_repr *VAR_8 = VAR_6;
 struct nfp_abm_link *VAR_9;

 VAR_9 = VAR_8->app_priv;

 if (VAR_4 != VAR_3) {
  FUNC_0(VAR_7->common.extack,
       "only offload of u32 classifier supported");
  return -VAR_0;
 }
 if (!FUNC_4(VAR_8->netdev, &VAR_7->common))
  return -VAR_0;

 if (VAR_7->common.protocol != FUNC_1(VAR_1) &&
     VAR_7->common.protocol != FUNC_1(VAR_2)) {
  FUNC_0(VAR_7->common.extack,
       "only IP and IPv6 supported as filter protocol");
  return -VAR_0;
 }

 switch (VAR_7->command) {
 case 129:
 case 128:
  return FUNC_3(VAR_9, &VAR_7->knode,
       VAR_7->common.protocol,
       VAR_7->common.extack);
 case 130:
  FUNC_2(VAR_9, &VAR_7->knode);
  return 0;
 default:
  return -VAR_0;
 }
}
