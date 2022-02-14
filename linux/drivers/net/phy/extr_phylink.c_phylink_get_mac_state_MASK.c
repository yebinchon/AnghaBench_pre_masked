
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {int link; scalar_t__ an_complete; int pause; int duplex; int speed; int an_enabled; int interface; int lp_advertising; int advertising; } ;
struct TYPE_4__ {int an_enabled; int interface; int advertising; } ;
struct phylink {int config; TYPE_1__* ops; TYPE_2__ link_config; } ;
struct TYPE_3__ {int (* mac_link_state ) (int ,struct phylink_link_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct phylink_link_state*) ;

__attribute__((used)) static int FUNC_3(struct phylink *VAR_3, struct phylink_link_state *VAR_4)
{

 FUNC_0(VAR_4->advertising, VAR_3->link_config.advertising);
 FUNC_1(VAR_4->lp_advertising);
 VAR_4->interface = VAR_3->link_config.interface;
 VAR_4->an_enabled = VAR_3->link_config.an_enabled;
 VAR_4->speed = VAR_2;
 VAR_4->duplex = VAR_0;
 VAR_4->pause = VAR_1;
 VAR_4->an_complete = 0;
 VAR_4->link = 1;

 return VAR_3->ops->mac_link_state(VAR_3->config, VAR_4);
}
