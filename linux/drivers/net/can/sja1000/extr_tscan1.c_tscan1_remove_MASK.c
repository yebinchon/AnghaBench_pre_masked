
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {scalar_t__ reg_base; } ;
struct net_device {unsigned long base_addr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct net_device*) ;
 struct sja1000_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, unsigned VAR_4 )
{
 struct net_device *VAR_5;
 struct sja1000_priv *VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_6(VAR_5);
 FUNC_1(VAR_3, ((void*)0));

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = VAR_5->base_addr;
 VAR_8 = (unsigned long)VAR_6->reg_base;

 FUNC_4(0, VAR_7 + VAR_0);

 FUNC_5(VAR_8, VAR_2);
 FUNC_5(VAR_7, VAR_1);

 FUNC_2(VAR_5);

 return 0;
}
