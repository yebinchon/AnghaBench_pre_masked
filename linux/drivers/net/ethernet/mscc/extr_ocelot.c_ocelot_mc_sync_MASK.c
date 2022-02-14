
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int pvid; int ocelot; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,unsigned char const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, const unsigned char *VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4->ocelot, VAR_1, VAR_3, VAR_4->pvid,
     VAR_0);
}
