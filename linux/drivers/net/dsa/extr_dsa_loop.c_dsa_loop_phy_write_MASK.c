
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {int dummy; } ;
struct dsa_switch {struct dsa_loop_priv* priv; } ;
struct dsa_loop_priv {TYPE_2__* ports; scalar_t__ port_base; struct mii_bus* bus; } ;
struct TYPE_4__ {TYPE_1__* mib; } ;
struct TYPE_3__ {int val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mii_bus*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_2, int VAR_3,
         int VAR_4, u16 VAR_5)
{
 struct dsa_loop_priv *VAR_6 = VAR_2->priv;
 struct mii_bus *VAR_7 = VAR_6->bus;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6->port_base + VAR_3, VAR_4, VAR_5);
 if (VAR_8 < 0)
  VAR_6->ports[VAR_3].mib[VAR_0].val++;
 else
  VAR_6->ports[VAR_3].mib[VAR_1].val++;

 return VAR_8;
}
