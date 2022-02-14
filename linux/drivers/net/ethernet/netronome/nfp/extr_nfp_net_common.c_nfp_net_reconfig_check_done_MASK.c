
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {int reconfig_in_progress_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_net*,char*,int,int ,int) ;
 int FUNC_1 (struct nfp_net*,int ) ;

__attribute__((used)) static bool FUNC_2(struct nfp_net *VAR_3, bool VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5 == 0)
  return 1;
 if (VAR_5 & VAR_2) {
  FUNC_0(VAR_3, "Reconfig error (status: 0x%08x update: 0x%08x ctrl: 0x%08x)\n",
         VAR_5, VAR_3->reconfig_in_progress_update,
         FUNC_1(VAR_3, VAR_0));
  return 1;
 } else if (VAR_4) {
  FUNC_0(VAR_3, "Reconfig timeout (status: 0x%08x update: 0x%08x ctrl: 0x%08x)\n",
         VAR_5, VAR_3->reconfig_in_progress_update,
         FUNC_1(VAR_3, VAR_0));
  return 1;
 }

 return 0;
}
