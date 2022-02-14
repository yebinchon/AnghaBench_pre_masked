
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {int link; int duplex; } ;
struct dsa_switch {TYPE_1__* ports; } ;
struct bcm_sf2_priv {int moca_port; TYPE_2__* port_sts; } ;
struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int slave; } ;


 int VAR_0 ;
 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dsa_switch *VAR_1, int VAR_2,
       struct phylink_link_state *VAR_3)
{
 struct bcm_sf2_priv *VAR_4 = FUNC_0(VAR_1);

 VAR_3->link = 0;
 if (VAR_2 == VAR_4->moca_port) {
  VAR_3->link = VAR_4->port_sts[VAR_2].link;





  if (!VAR_3->link)
   FUNC_1(VAR_1->ports[VAR_2].slave);
  VAR_3->duplex = VAR_0;
 } else {
  VAR_3->link = 1;
 }
}
