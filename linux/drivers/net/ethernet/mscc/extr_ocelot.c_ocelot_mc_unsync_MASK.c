
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int pvid; int ocelot; } ;
struct net_device {int dummy; } ;


 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, const unsigned char *VAR_1)
{
 struct ocelot_port *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->ocelot, VAR_1, VAR_2->pvid);
}
