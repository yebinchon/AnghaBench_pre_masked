
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct nfp_app*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct nfp_app*,struct net_device*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

u32 FUNC_5(struct nfp_app *VAR_0,
           struct net_device *VAR_1)
{
 int VAR_2;

 if (FUNC_3(VAR_1)) {
  return FUNC_4(VAR_1);
 } else if (FUNC_1(VAR_0, VAR_1)) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 < 0)
   return 0;

  return FUNC_2(VAR_2);
 }

 return 0;
}
