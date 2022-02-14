
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;


 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot*,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct ndmsg *VAR_0, struct nlattr *VAR_1[],
     struct net_device *VAR_2,
     const unsigned char *VAR_3, u16 VAR_4)
{
 struct ocelot_port *VAR_5 = FUNC_0(VAR_2);
 struct ocelot *VAR_6 = VAR_5->ocelot;

 return FUNC_1(VAR_6, VAR_3, VAR_4);
}
