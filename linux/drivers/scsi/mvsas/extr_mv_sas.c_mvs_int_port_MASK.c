
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ expires; int * function; } ;
struct mvs_phy {int irq_status; int phy_event; int phy_type; int phy_status; int sas_phy; TYPE_2__ timer; } ;
struct mvs_info {int id; TYPE_1__* chip; struct mvs_phy* phy; } ;
struct TYPE_6__ {int (* read_port_irq_stat ) (struct mvs_info*,int) ;int (* read_port_irq_mask ) (struct mvs_info*,int) ;int (* phy_reset ) (struct mvs_info*,int,int ) ;int (* write_port_irq_mask ) (struct mvs_info*,int,int) ;int (* detect_porttype ) (struct mvs_info*,int) ;int (* stp_reset ) (struct mvs_info*,int) ;int (* clear_srs_irq ) (struct mvs_info*,int ,int) ;int (* read_phy_ctl ) (struct mvs_info*,int) ;int (* write_port_irq_stat ) (struct mvs_info*,int,int) ;} ;
struct TYPE_4__ {int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct mvs_info*,int) ;
 int FUNC_4 (struct mvs_info*,int,int *) ;
 int FUNC_5 (struct mvs_info*,void*,int ) ;
 void* FUNC_6 (struct mvs_info*,int) ;
 int FUNC_7 (int *,int ) ;
 int * VAR_16 ;
 int FUNC_8 (struct mvs_info*,int,int ) ;
 int FUNC_9 (struct mvs_info*,int) ;
 int FUNC_10 (struct mvs_info*,int) ;
 int FUNC_11 (struct mvs_info*,int,int) ;
 int FUNC_12 (struct mvs_info*,int,int ) ;
 int FUNC_13 (struct mvs_info*,int,int) ;
 int FUNC_14 (struct mvs_info*,int) ;
 int FUNC_15 (struct mvs_info*,int ,int) ;
 int FUNC_16 (struct mvs_info*,int) ;
 int FUNC_17 (struct mvs_info*,int,int ) ;
 int FUNC_18 (struct mvs_info*,int) ;
 int FUNC_19 (struct mvs_info*,int,int) ;
 int FUNC_20 (struct mvs_info*,int) ;

void FUNC_21(struct mvs_info *VAR_17, int VAR_18, u32 VAR_19)
{
 u32 VAR_20;
 struct mvs_phy *VAR_21 = &VAR_17->phy[VAR_18];

 VAR_21->irq_status = VAR_2->read_port_irq_stat(VAR_17, VAR_18);
 VAR_2->write_port_irq_stat(VAR_17, VAR_18, VAR_21->irq_status);
 FUNC_2("phy %d ctrl sts=0x%08X.\n", VAR_18+VAR_17->id*VAR_17->chip->n_phy,
  VAR_2->read_phy_ctl(VAR_17, VAR_18));
 FUNC_2("phy %d irq sts = 0x%08X\n", VAR_18+VAR_17->id*VAR_17->chip->n_phy,
  VAR_21->irq_status);






 if (VAR_21->irq_status & VAR_7) {
  FUNC_2("phy %d STP decoding error.\n",
  VAR_18 + VAR_17->id*VAR_17->chip->n_phy);
 }

 if (VAR_21->irq_status & VAR_9) {
  FUNC_1(500);
  if (!(VAR_21->phy_event & VAR_12)) {
   int VAR_22 = VAR_21->phy_type & VAR_14;
   int VAR_23;
   FUNC_4(VAR_17, VAR_18, ((void*)0));
   VAR_21->phy_event |= VAR_12;
   VAR_2->clear_srs_irq(VAR_17, 0, 1);
   FUNC_5(VAR_17,
    (void *)(unsigned long)VAR_18,
    VAR_11);
   VAR_23 = FUNC_6(VAR_17, VAR_18);
   if (VAR_23 || VAR_22) {
    if (VAR_2->stp_reset)
     VAR_2->stp_reset(VAR_17,
       VAR_18);
    else
     VAR_2->phy_reset(VAR_17,
       VAR_18, VAR_4);
    return;
   }
  }
 }

 if (VAR_21->irq_status & VAR_6) {
  VAR_20 = VAR_2->read_port_irq_mask(VAR_17, VAR_18);
  VAR_2->write_port_irq_mask(VAR_17, VAR_18,
     VAR_20 | VAR_10);
  if (VAR_21->timer.function == ((void*)0)) {
   VAR_21->timer.function = VAR_16;
   VAR_21->timer.expires = VAR_15 + 5*VAR_1;
   FUNC_0(&VAR_21->timer);
  }
 }
 if (VAR_21->irq_status & (VAR_10 | VAR_8)) {
  VAR_21->phy_status = FUNC_6(VAR_17, VAR_18);
  FUNC_2("notify plug in on phy[%d]\n", VAR_18);
  if (VAR_21->phy_status) {
   FUNC_1(10);
   VAR_2->detect_porttype(VAR_17, VAR_18);
   if (VAR_21->phy_type & VAR_14) {
    VAR_20 = VAR_2->read_port_irq_mask(
      VAR_17, VAR_18);
    VAR_20 &= ~VAR_10;
    VAR_2->write_port_irq_mask(VAR_17,
       VAR_18, VAR_20);
   }
   FUNC_8(VAR_17, VAR_18, 0);
   if (VAR_21->phy_type & VAR_13) {
    VAR_2->phy_reset(VAR_17, VAR_18, VAR_3);
    FUNC_1(10);
   }

   FUNC_3(VAR_17, VAR_18);

   if (VAR_21->phy_event & VAR_12) {
    FUNC_7(&VAR_21->sas_phy, 0);
    VAR_21->phy_event &= ~VAR_12;
   }
  } else {
   FUNC_2("plugin interrupt but phy%d is gone\n",
    VAR_18 + VAR_17->id*VAR_17->chip->n_phy);
  }
 } else if (VAR_21->irq_status & VAR_5) {
  FUNC_2("phy %d broadcast change.\n",
   VAR_18 + VAR_17->id*VAR_17->chip->n_phy);
  FUNC_5(VAR_17, (void *)(unsigned long)VAR_18,
    VAR_0);
 }
}
