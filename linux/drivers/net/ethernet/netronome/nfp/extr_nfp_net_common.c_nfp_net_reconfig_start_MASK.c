
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {int reconfig_in_progress_update; int qcp_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nfp_net *VAR_1, u32 VAR_2)
{
 FUNC_2(VAR_1, VAR_0, VAR_2);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->qcp_cfg, 1);
 VAR_1->reconfig_in_progress_update = VAR_2;
}
