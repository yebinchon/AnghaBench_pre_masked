
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvs_port {unsigned int wide_port_phymap; scalar_t__ port_attached; } ;
struct mvs_phy {int irq_status; int phy_attached; int phy_type; struct mvs_port* port; } ;
struct mvs_info {struct mvs_phy* phy; } ;
struct TYPE_2__ {int (* read_phy_ctl ) (struct mvs_info*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int) ;

__attribute__((used)) static u32 FUNC_2(struct mvs_info *VAR_5, int VAR_6)
{
 u32 VAR_7;
 struct mvs_phy *VAR_8 = &VAR_5->phy[VAR_6];
 struct mvs_port *VAR_9 = VAR_8->port;

 VAR_7 = VAR_0->read_phy_ctl(VAR_5, VAR_6);
 if ((VAR_7 & VAR_2) && !(VAR_8->irq_status & VAR_1)) {
  if (!VAR_9)
   VAR_8->phy_attached = 1;
  return VAR_7;
 }

 if (VAR_9) {
  if (VAR_8->phy_type & VAR_3) {
   VAR_9->wide_port_phymap &= ~(1U << VAR_6);
   if (!VAR_9->wide_port_phymap)
    VAR_9->port_attached = 0;
   FUNC_0(VAR_5, VAR_6);
  } else if (VAR_8->phy_type & VAR_4)
   VAR_9->port_attached = 0;
  VAR_8->port = ((void*)0);
  VAR_8->phy_attached = 0;
  VAR_8->phy_type &= ~(VAR_3 | VAR_4);
 }
 return 0;
}
