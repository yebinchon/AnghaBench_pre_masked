
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct ocelot_port {int pvid; struct ocelot* ocelot; } ;
struct ocelot {int dummy; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct ocelot_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ocelot*,int ,int ) ;
 int FUNC_3 (struct ocelot*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_1(VAR_2);
 struct ocelot *VAR_5 = VAR_4->ocelot;
 const struct sockaddr *VAR_6 = VAR_3;


 FUNC_3(VAR_5, VAR_1, VAR_6->sa_data, VAR_4->pvid,
     VAR_0);

 FUNC_2(VAR_5, VAR_2->dev_addr, VAR_4->pvid);

 FUNC_0(VAR_2->dev_addr, VAR_6->sa_data);
 return 0;
}
