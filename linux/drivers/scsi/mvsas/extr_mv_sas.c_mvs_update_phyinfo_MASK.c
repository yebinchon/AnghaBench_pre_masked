
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sas_identify_frame {int dummy; } ;
struct TYPE_4__ {int device_type; int target_port_protocols; } ;
struct asd_sas_phy {int attached_sas_addr; int oob_mode; } ;
struct mvs_phy {int phy_type; int phy_attached; int att_dev_sas_addr; int frame_rcvd_size; int att_dev_info; int irq_status; TYPE_1__ identify; struct asd_sas_phy sas_phy; scalar_t__ phy_status; scalar_t__ frame_rcvd; } ;
struct mvs_info {int id; TYPE_2__* chip; int dev; struct mvs_phy* phy; } ;
struct dev_to_host_fis {int dummy; } ;
struct TYPE_6__ {int (* oob_done ) (struct mvs_info*,int) ;int (* read_port_irq_mask ) (struct mvs_info*,int) ;int (* write_port_irq_stat ) (struct mvs_info*,int,int ) ;int (* phy_work_around ) (struct mvs_info*,int) ;int (* write_port_irq_mask ) (struct mvs_info*,int,int) ;int (* fix_phy_info ) (struct mvs_info*,int,struct sas_identify_frame*) ;int (* read_port_irq_stat ) (struct mvs_info*,int) ;} ;
struct TYPE_5__ {int n_phy; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct mvs_info*,int,struct sas_identify_frame*) ;
 scalar_t__ FUNC_4 (struct mvs_info*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mvs_phy*) ;
 int FUNC_7 (struct mvs_info*,int) ;
 int FUNC_8 (struct mvs_info*,int) ;
 int FUNC_9 (struct mvs_info*,int,struct sas_identify_frame*) ;
 int FUNC_10 (struct mvs_info*,int) ;
 int FUNC_11 (struct mvs_info*,int,int) ;
 int FUNC_12 (struct mvs_info*,int) ;
 int FUNC_13 (struct mvs_info*,int,int ) ;

void FUNC_14(struct mvs_info *VAR_15, int VAR_16, int VAR_17)
{
 struct mvs_phy *VAR_18 = &VAR_15->phy[VAR_16];
 struct sas_identify_frame *VAR_19;

 VAR_19 = (struct sas_identify_frame *)VAR_18->frame_rcvd;

 if (VAR_17) {
  VAR_18->irq_status = VAR_1->read_port_irq_stat(VAR_15, VAR_16);
  VAR_18->phy_status = FUNC_4(VAR_15, VAR_16);
 }

 if (VAR_18->phy_status) {
  int VAR_20 = 0;
  struct asd_sas_phy *VAR_21 = &VAR_15->phy[VAR_16].sas_phy;

  VAR_20 = VAR_1->oob_done(VAR_15, VAR_16);

  VAR_1->fix_phy_info(VAR_15, VAR_16, VAR_19);
  if (VAR_18->phy_type & VAR_6) {
   VAR_18->identify.target_port_protocols = VAR_13;
   if (FUNC_5(VAR_18->irq_status)) {
    FUNC_6(VAR_18);
    VAR_18->phy_attached = 1;
    VAR_18->att_dev_sas_addr =
     VAR_16 + VAR_15->id * VAR_15->chip->n_phy;
    if (VAR_20)
     VAR_21->oob_mode = VAR_14;
    VAR_18->frame_rcvd_size =
        sizeof(struct dev_to_host_fis);
    FUNC_3(VAR_15, VAR_16, VAR_19);
   } else {
    u32 VAR_22;
    FUNC_0(VAR_0, VAR_15->dev,
     "Phy%d : No sig fis\n", VAR_16);
    VAR_22 = VAR_1->read_port_irq_mask(VAR_15, VAR_16);
    VAR_1->write_port_irq_mask(VAR_15, VAR_16,
      VAR_22 | VAR_2);
    VAR_18->phy_attached = 0;
    VAR_18->phy_type &= ~VAR_6;
    goto out_done;
   }
  } else if (VAR_18->phy_type & VAR_5
   || VAR_18->att_dev_info & VAR_4) {
   VAR_18->phy_attached = 1;
   VAR_18->identify.device_type =
    VAR_18->att_dev_info & VAR_3;

   if (VAR_18->identify.device_type == VAR_8)
    VAR_18->identify.target_port_protocols =
       VAR_12;
   else if (VAR_18->identify.device_type != VAR_10)
    VAR_18->identify.target_port_protocols =
       VAR_11;
   if (VAR_20)
    VAR_21->oob_mode = VAR_9;
   VAR_18->frame_rcvd_size =
       sizeof(struct sas_identify_frame);
  }
  FUNC_1(VAR_21->attached_sas_addr,
   &VAR_18->att_dev_sas_addr, VAR_7);

  if (VAR_1->phy_work_around)
   VAR_1->phy_work_around(VAR_15, VAR_16);
 }
 FUNC_2("phy %d attach dev info is %x\n",
  VAR_16 + VAR_15->id * VAR_15->chip->n_phy, VAR_18->att_dev_info);
 FUNC_2("phy %d attach sas addr is %llx\n",
  VAR_16 + VAR_15->id * VAR_15->chip->n_phy, VAR_18->att_dev_sas_addr);
out_done:
 if (VAR_17)
  VAR_1->write_port_irq_stat(VAR_15, VAR_16, VAR_18->irq_status);
}
