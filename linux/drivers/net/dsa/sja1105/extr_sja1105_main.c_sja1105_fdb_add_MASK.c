
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sja1105_private {TYPE_1__* info; } ;
struct dsa_switch {int * ports; struct sja1105_private* priv; } ;
struct TYPE_2__ {int (* fdb_add_cmd ) (struct dsa_switch*,int,unsigned char const*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dsa_switch*,int,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0, int VAR_1,
      const unsigned char *VAR_2, u16 VAR_3)
{
 struct sja1105_private *VAR_4 = VAR_0->priv;
 if (!FUNC_0(&VAR_0->ports[VAR_1]))
  VAR_3 = 0;

 return VAR_4->info->fdb_add_cmd(VAR_0, VAR_1, VAR_2, VAR_3);
}
