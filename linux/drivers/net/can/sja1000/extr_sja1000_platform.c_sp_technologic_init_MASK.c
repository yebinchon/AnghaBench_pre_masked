
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct technologic_priv {int io_lock; } ;
struct sja1000_priv {int write_reg; int read_reg; struct technologic_priv* priv; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct sja1000_priv *VAR_2, struct device_node *VAR_3)
{
 struct technologic_priv *VAR_4 = VAR_2->priv;

 VAR_2->read_reg = VAR_0;
 VAR_2->write_reg = VAR_1;
 FUNC_0(&VAR_4->io_lock);

 return 0;
}
