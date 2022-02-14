
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int eee_enabled; int eee_active; } ;
struct bcmgenet_priv {int clk_eee_enabled; int base; TYPE_2__ eee; int clk_eee; TYPE_1__* hw_params; } ;
struct TYPE_3__ {int tbuf_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bcmgenet_priv*,int ) ;
 int FUNC_4 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct bcmgenet_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8, bool VAR_9)
{
 struct bcmgenet_priv *VAR_10 = FUNC_8(VAR_8);
 u32 VAR_11 = VAR_10->hw_params->tbuf_offset + VAR_5;
 u32 VAR_12;

 if (VAR_9 && !VAR_10->clk_eee_enabled) {
  FUNC_7(VAR_10->clk_eee);
  VAR_10->clk_eee_enabled = 1;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_7);
 if (VAR_9)
  VAR_12 |= VAR_0;
 else
  VAR_12 &= ~VAR_0;
 FUNC_4(VAR_10, VAR_12, VAR_7);


 VAR_12 = FUNC_2(VAR_10->base + VAR_11);
 if (VAR_9)
  VAR_12 |= VAR_4 | VAR_6;
 else
  VAR_12 &= ~(VAR_4 | VAR_6);
 FUNC_5(VAR_12, VAR_10->base + VAR_11);


 VAR_12 = FUNC_0(VAR_10, VAR_2);
 if (VAR_9)
  VAR_12 |= VAR_1 | VAR_3;
 else
  VAR_12 &= ~(VAR_1 | VAR_3);
 FUNC_1(VAR_10, VAR_12, VAR_2);

 if (!VAR_9 && VAR_10->clk_eee_enabled) {
  FUNC_6(VAR_10->clk_eee);
  VAR_10->clk_eee_enabled = 0;
 }

 VAR_10->eee.eee_enabled = VAR_9;
 VAR_10->eee.eee_active = VAR_9;
}
