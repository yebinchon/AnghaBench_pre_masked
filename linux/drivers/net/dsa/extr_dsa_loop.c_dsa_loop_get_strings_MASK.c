
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct dsa_switch {struct dsa_loop_priv* priv; } ;
struct dsa_loop_priv {TYPE_2__* ports; } ;
struct TYPE_4__ {TYPE_1__* mib; } ;
struct TYPE_3__ {int name; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_4, int VAR_5,
     u32 VAR_6, uint8_t *VAR_7)
{
 struct dsa_loop_priv *VAR_8 = VAR_4->priv;
 unsigned int VAR_9;

 if (VAR_6 != VAR_2 && VAR_6 != VAR_1)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_0(VAR_7 + VAR_9 * VAR_0,
         VAR_8->ports[VAR_5].mib[VAR_9].name, VAR_0);
}
