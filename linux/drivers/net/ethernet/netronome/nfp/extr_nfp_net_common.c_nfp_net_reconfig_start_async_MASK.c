
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {int reconfig_timer_active; int reconfig_timer; int reconfig_posted; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct nfp_net*,int ) ;

__attribute__((used)) static void FUNC_2(struct nfp_net *VAR_3, u32 VAR_4)
{
 VAR_4 |= VAR_3->reconfig_posted;
 VAR_3->reconfig_posted = 0;

 FUNC_1(VAR_3, VAR_4);

 VAR_3->reconfig_timer_active = 1;
 FUNC_0(&VAR_3->reconfig_timer, VAR_2 + VAR_1 * VAR_0);
}
