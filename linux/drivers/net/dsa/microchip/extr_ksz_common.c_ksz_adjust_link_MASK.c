
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; } ;
struct ksz_port {int read; } ;
struct ksz_device {int live_ports; int on_ports; int dev_mutex; int mib_read; struct ksz_port* ports; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dsa_switch *VAR_0, int VAR_1,
       struct phy_device *VAR_2)
{
 struct ksz_device *VAR_3 = VAR_0->priv;
 struct ksz_port *VAR_4 = &VAR_3->ports[VAR_1];


 if (!VAR_2->link) {
  VAR_4->read = 1;
  FUNC_2(&VAR_3->mib_read);
 }
 FUNC_0(&VAR_3->dev_mutex);
 if (!VAR_2->link)
  VAR_3->live_ports &= ~(1 << VAR_1);
 else

  VAR_3->live_ports |= (1 << VAR_1) & VAR_3->on_ports;
 FUNC_1(&VAR_3->dev_mutex);
}
