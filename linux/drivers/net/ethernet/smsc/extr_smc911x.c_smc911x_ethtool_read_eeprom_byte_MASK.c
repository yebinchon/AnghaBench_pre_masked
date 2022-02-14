
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smc911x_local {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct smc911x_local*) ;
 struct smc911x_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_0,
             u8 *VAR_1)
{
 struct smc911x_local *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_0))!=0)
  return VAR_3;
 *VAR_1 = FUNC_0(VAR_2);
 return 0;
}
