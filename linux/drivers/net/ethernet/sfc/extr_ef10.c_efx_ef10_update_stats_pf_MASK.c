
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtnl_link_stats64 {int dummy; } ;
struct efx_nic {int dummy; } ;


 scalar_t__ FUNC_0 (struct efx_nic*) ;
 size_t FUNC_1 (struct efx_nic*,int *,struct rtnl_link_stats64*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(struct efx_nic *VAR_0, u64 *VAR_1,
           struct rtnl_link_stats64 *VAR_2)
{
 int VAR_3;




 for (VAR_3 = 0; VAR_3 < 100; ++VAR_3) {
  if (FUNC_0(VAR_0) == 0)
   break;
  FUNC_2(100);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
