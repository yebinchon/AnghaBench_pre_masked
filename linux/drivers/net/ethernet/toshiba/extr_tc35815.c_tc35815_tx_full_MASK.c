
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc35815_local {int tfd_start; int tfd_end; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct tc35815_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct tc35815_local *VAR_2 = FUNC_0(VAR_1);
 return (VAR_2->tfd_start + 1) % VAR_0 == VAR_2->tfd_end;
}
