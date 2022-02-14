
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_bus {int dummy; } ;
struct dsa_switch {struct dsa_loop_priv* priv; } ;
struct dsa_loop_priv {TYPE_1__* ports; scalar_t__ port_base; struct mii_bus* bus; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {TYPE_2__* mib; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mii_bus*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_2, int VAR_3, int VAR_4)
{
 struct dsa_loop_priv *VAR_5 = VAR_2->priv;
 struct mii_bus *VAR_6 = VAR_5->bus;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5->port_base + VAR_3, VAR_4);
 if (VAR_7 < 0)
  VAR_5->ports[VAR_3].mib[VAR_0].val++;
 else
  VAR_5->ports[VAR_3].mib[VAR_1].val++;

 return VAR_7;
}
