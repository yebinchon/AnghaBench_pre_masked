
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct nfp_net_dp {void* txd_cnt; void* rxd_cnt; } ;
struct nfp_net {int dummy; } ;


 int VAR_0 ;
 struct nfp_net_dp* FUNC_0 (struct nfp_net*) ;
 int FUNC_1 (struct nfp_net*,struct nfp_net_dp*,int *) ;

__attribute__((used)) static int FUNC_2(struct nfp_net *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nfp_net_dp *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->rxd_cnt = VAR_2;
 VAR_4->txd_cnt = VAR_3;

 return FUNC_1(VAR_1, VAR_4, ((void*)0));
}
