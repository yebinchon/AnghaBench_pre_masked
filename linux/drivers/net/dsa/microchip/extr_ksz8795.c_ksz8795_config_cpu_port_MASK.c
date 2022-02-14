
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_port {int on; int phy; int fiber; int member; int vid_member; } ;
struct ksz_device {int port_cnt; size_t cpu_port; int phy_port_cnt; struct ksz_port* ports; int port_mask; int host_mask; int member; } ;
struct dsa_switch {int num_ports; struct ksz_device* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ksz_device*,size_t,int) ;
 int FUNC_2 (struct dsa_switch*,int,int ) ;
 int FUNC_3 (struct ksz_device*,int ,int ,int) ;
 int FUNC_4 (struct ksz_device*,int,int ,int ,int) ;
 int FUNC_5 (struct ksz_device*,int,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct dsa_switch *VAR_10)
{
 struct ksz_device *VAR_11 = VAR_10->priv;
 struct ksz_port *VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_10->num_ports = VAR_11->port_cnt + 1;


 FUNC_3(VAR_11, VAR_5, VAR_7, 1);
 FUNC_3(VAR_11, VAR_9, VAR_8, 1);

 VAR_12 = &VAR_11->ports[VAR_11->cpu_port];
 VAR_12->vid_member = VAR_11->port_mask;
 VAR_12->on = 1;

 FUNC_1(VAR_11, VAR_11->cpu_port, 1);
 VAR_11->member = VAR_11->host_mask;

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_12 = &VAR_11->ports[VAR_14];




  VAR_12->vid_member = FUNC_0(VAR_14);
  VAR_12->member = VAR_11->port_mask;
  FUNC_2(VAR_10, VAR_14, VAR_0);


  if (VAR_14 == VAR_11->port_cnt)
   break;
  VAR_12->on = 1;
  VAR_12->phy = 1;
 }
 for (VAR_14 = 0; VAR_14 < VAR_11->phy_port_cnt; VAR_14++) {
  VAR_12 = &VAR_11->ports[VAR_14];
  if (!VAR_12->on)
   continue;
  FUNC_5(VAR_11, VAR_14, VAR_3, &VAR_13);
  if (VAR_13 & VAR_1)
   VAR_12->fiber = 1;
  if (VAR_12->fiber)
   FUNC_4(VAR_11, VAR_14, VAR_4, VAR_2,
         1);
  else
   FUNC_4(VAR_11, VAR_14, VAR_4, VAR_2,
         0);
 }
}
