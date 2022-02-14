
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct enic {int mc_count; } ;


 int FUNC_0 (struct enic*,int const*) ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct enic *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);
 VAR_2->mc_count--;

 return 0;
}
