
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int num_phys_ports; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 struct ocelot_port* FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ocelot*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct ocelot_port *VAR_5 = FUNC_2(VAR_4);
 struct ocelot *VAR_6 = VAR_5->ocelot;
 int VAR_7;
 u32 VAR_8;





 VAR_8 = FUNC_0(VAR_6->num_phys_ports - 1, 0);
 for (VAR_7 = VAR_6->num_phys_ports + 1; VAR_7 < VAR_1; VAR_7++)
  FUNC_3(VAR_6, VAR_8, VAR_0, VAR_7);

 FUNC_1(VAR_4, VAR_2, VAR_3);
}
