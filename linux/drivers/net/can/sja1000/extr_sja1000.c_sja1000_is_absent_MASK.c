
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sja1000_priv*,int ) ;

__attribute__((used)) static int FUNC_1(struct sja1000_priv *VAR_1)
{
 return (VAR_1->read_reg(VAR_1, VAR_0) == 0xFF);
}
