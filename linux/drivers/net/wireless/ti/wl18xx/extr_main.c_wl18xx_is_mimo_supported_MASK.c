
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {int number_of_assembled_ant2_4; } ;
struct TYPE_6__ {TYPE_2__ ht; TYPE_1__ phy; } ;
struct wl18xx_priv {TYPE_3__ conf; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct wl1271 *VAR_2)
{
 struct wl18xx_priv *VAR_3 = VAR_2->priv;




 return (VAR_3->conf.phy.number_of_assembled_ant2_4 >= 2) &&
        (VAR_3->conf.ht.mode != VAR_1) &&
        (VAR_3->conf.ht.mode != VAR_0);
}
