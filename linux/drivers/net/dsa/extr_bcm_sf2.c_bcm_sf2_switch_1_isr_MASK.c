
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {int irq1_stat; int irq1_mask; TYPE_1__* port_sts; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bcm_sf2_priv* FUNC_2 (struct dsa_switch*) ;
 int FUNC_3 (struct dsa_switch*,int,int) ;
 int FUNC_4 (struct bcm_sf2_priv*,int ) ;
 int FUNC_5 (struct bcm_sf2_priv*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct dsa_switch *VAR_6 = VAR_5;
 struct bcm_sf2_priv *VAR_7 = FUNC_2(VAR_6);

 VAR_7->irq1_stat = FUNC_4(VAR_7, VAR_1) &
    ~VAR_7->irq1_mask;
 FUNC_5(VAR_7, VAR_7->irq1_stat, VAR_0);

 if (VAR_7->irq1_stat & FUNC_1(VAR_3)) {
  VAR_7->port_sts[7].link = 1;
  FUNC_3(VAR_6, 7, 1);
 }
 if (VAR_7->irq1_stat & FUNC_0(VAR_3)) {
  VAR_7->port_sts[7].link = 0;
  FUNC_3(VAR_6, 7, 0);
 }

 return VAR_2;
}
