
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc911x_local {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct smc911x_local*,int,unsigned int) ;
 int FUNC_1 (struct smc911x_local*,int,unsigned int) ;
 struct smc911x_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct smc911x_local *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;


 FUNC_0(VAR_3, VAR_2, VAR_4);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_3, VAR_2, VAR_4);
}
