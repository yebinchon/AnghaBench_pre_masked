
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct dsa_switch {struct dsa_loop_priv* priv; } ;
struct dsa_loop_priv {TYPE_2__* ports; } ;
struct TYPE_4__ {TYPE_1__* mib; } ;
struct TYPE_3__ {int val; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dsa_switch *VAR_1, int VAR_2,
           uint64_t *VAR_3)
{
 struct dsa_loop_priv *VAR_4 = VAR_1->priv;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = VAR_4->ports[VAR_2].mib[VAR_5].val;
}
