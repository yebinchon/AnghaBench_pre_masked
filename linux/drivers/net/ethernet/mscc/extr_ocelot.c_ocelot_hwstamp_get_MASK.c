
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int hwtstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ocelot_port *VAR_1, struct ifreq *VAR_2)
{
 struct ocelot *VAR_3 = VAR_1->ocelot;

 return FUNC_0(VAR_2->ifr_data, &VAR_3->hwtstamp_config,
       sizeof(VAR_3->hwtstamp_config)) ? -VAR_0 : 0;
}
