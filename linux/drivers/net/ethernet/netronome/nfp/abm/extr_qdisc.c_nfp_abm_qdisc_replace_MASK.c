
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_qdisc {int type; } ;
struct nfp_abm_link {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum nfp_qdisc_type { ____Placeholder_nfp_qdisc_type } nfp_qdisc_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct nfp_qdisc* FUNC_1 (struct net_device*,struct nfp_abm_link*,int,int ,int ,unsigned int) ;
 struct nfp_qdisc* FUNC_2 (struct nfp_abm_link*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2, struct nfp_abm_link *VAR_3,
        enum nfp_qdisc_type VAR_4, u32 VAR_5, u32 VAR_6,
        unsigned int VAR_7, struct nfp_qdisc **VAR_8)
{
 *VAR_8 = FUNC_2(VAR_3, VAR_6);
 if (*VAR_8) {
  if (FUNC_0((*VAR_8)->type != VAR_4))
   return -VAR_0;
  return 1;
 }

 *VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7);
 return *VAR_8 ? 0 : -VAR_1;
}
