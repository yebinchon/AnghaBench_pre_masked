
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_port {int vid_member; int on; int member; int phy; int sgmii; } ;
struct ksz_device {int port_cnt; int cpu_ports; int cpu_port; int host_mask; int port_mask; scalar_t__ interface; int member; int mib_port_cnt; int phy_port_cnt; int chip_id; struct ksz_port* ports; int dev; } ;
struct dsa_switch {int num_ports; struct ksz_device* priv; } ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_2 (struct ksz_device*,int) ;
 int FUNC_3 (struct ksz_device*,int,int) ;
 int FUNC_4 (struct dsa_switch*,int,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dsa_switch *VAR_1)
{
 struct ksz_device *VAR_2 = VAR_1->priv;
 struct ksz_port *VAR_3;
 int VAR_4;

 VAR_1->num_ports = VAR_2->port_cnt;

 for (VAR_4 = 0; VAR_4 < VAR_2->port_cnt; VAR_4++) {
  if (FUNC_1(VAR_1, VAR_4) && (VAR_2->cpu_ports & (1 << VAR_4))) {
   phy_interface_t VAR_5;

   VAR_2->cpu_port = VAR_4;
   VAR_2->host_mask = (1 << VAR_2->cpu_port);
   VAR_2->port_mask |= VAR_2->host_mask;





   VAR_5 = FUNC_2(VAR_2, VAR_4);
   if (!VAR_2->interface)
    VAR_2->interface = VAR_5;
   if (VAR_5 && VAR_5 != VAR_2->interface)
    FUNC_0(VAR_2->dev,
      "use %s instead of %s\n",
       FUNC_5(VAR_2->interface),
       FUNC_5(VAR_5));


   FUNC_3(VAR_2, VAR_4, 1);
   VAR_3 = &VAR_2->ports[VAR_2->cpu_port];
   VAR_3->vid_member = VAR_2->port_mask;
   VAR_3->on = 1;
  }
 }

 VAR_2->member = VAR_2->host_mask;

 for (VAR_4 = 0; VAR_4 < VAR_2->mib_port_cnt; VAR_4++) {
  if (VAR_4 == VAR_2->cpu_port)
   continue;
  VAR_3 = &VAR_2->ports[VAR_4];




  VAR_3->vid_member = (1 << VAR_4);
  VAR_3->member = VAR_2->port_mask;
  FUNC_4(VAR_1, VAR_4, VAR_0);
  VAR_3->on = 1;
  if (VAR_4 < VAR_2->phy_port_cnt)
   VAR_3->phy = 1;
  if (VAR_2->chip_id == 0x00947700 && VAR_4 == 6) {
   VAR_3->sgmii = 1;


   VAR_3->phy = 0;
  }
 }
}
