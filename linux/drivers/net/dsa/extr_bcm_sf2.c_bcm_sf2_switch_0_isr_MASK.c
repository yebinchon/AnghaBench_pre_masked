
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {int irq0_stat; int irq0_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (struct bcm_sf2_priv*,int ) ;
 int FUNC_2 (struct bcm_sf2_priv*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct dsa_switch *VAR_5 = VAR_4;
 struct bcm_sf2_priv *VAR_6 = FUNC_0(VAR_5);

 VAR_6->irq0_stat = FUNC_1(VAR_6, VAR_1) &
    ~VAR_6->irq0_mask;
 FUNC_2(VAR_6, VAR_6->irq0_stat, VAR_0);

 return VAR_2;
}
