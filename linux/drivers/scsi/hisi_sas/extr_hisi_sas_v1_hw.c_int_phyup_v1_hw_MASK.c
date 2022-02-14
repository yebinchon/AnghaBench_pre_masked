
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_identify_frame {scalar_t__ dev_type; int sas_addr; } ;
struct TYPE_2__ {scalar_t__ device_type; int target_port_protocols; } ;
struct asd_sas_phy {int id; int linkrate; int attached_sas_addr; int oob_mode; scalar_t__ frame_rcvd; } ;
struct hisi_sas_phy {int port_id; int phy_type; int phy_attached; int frame_rcvd_size; int lock; scalar_t__ reset_completion; scalar_t__ in_reset; TYPE_1__ identify; struct asd_sas_phy sas_phy; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int FUNC_5 (struct hisi_sas_phy*,int ) ;
 int FUNC_6 (struct hisi_hba*,int,scalar_t__) ;
 int FUNC_7 (struct hisi_hba*,int,scalar_t__,int) ;
 int FUNC_8 (struct hisi_hba*,int ) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_20, void *VAR_21)
{
 struct hisi_sas_phy *VAR_22 = VAR_21;
 struct hisi_hba *VAR_23 = VAR_22->hisi_hba;
 struct device *VAR_24 = VAR_23->dev;
 struct asd_sas_phy *VAR_25 = &VAR_22->sas_phy;
 int VAR_26, VAR_27 = VAR_25->id;
 u32 VAR_28, VAR_29, VAR_30, VAR_31;
 u32 *VAR_32 = (u32 *)VAR_25->frame_rcvd;
 struct sas_identify_frame *VAR_33 = (struct sas_identify_frame *)VAR_32;
 irqreturn_t VAR_34 = VAR_6;
 unsigned long VAR_35;

 VAR_28 = FUNC_6(VAR_23, VAR_27, VAR_3);
 if (!(VAR_28 & VAR_4)) {
  FUNC_2(VAR_24, "phyup: irq_value = %x not set enable bit\n",
   VAR_28);
  VAR_34 = VAR_7;
  goto end;
 }

 VAR_29 = FUNC_8(VAR_23, VAR_9);
 if (VAR_29 & 1 << VAR_27) {
  FUNC_3(VAR_24, "phyup: phy%d SATA attached equipment\n",
   VAR_27);
  goto end;
 }

 VAR_30 = (FUNC_8(VAR_23, VAR_10) >> (4 * VAR_27))
    & 0xf;
 if (VAR_30 == 0xf) {
  FUNC_3(VAR_24, "phyup: phy%d invalid portid\n", VAR_27);
  VAR_34 = VAR_7;
  goto end;
 }

 for (VAR_26 = 0; VAR_26 < 6; VAR_26++) {
  u32 VAR_36 = FUNC_6(VAR_23, VAR_27,
     VAR_13 + (VAR_26 * 4));
  VAR_32[VAR_26] = FUNC_0(VAR_36);
 }


 VAR_31 = FUNC_8(VAR_23, VAR_8);
 VAR_31 = (VAR_31 >> (VAR_27 * 4)) & 0xf;
 VAR_25->linkrate = VAR_31;
 VAR_25->oob_mode = VAR_16;
 FUNC_9(VAR_25->attached_sas_addr,
  &VAR_33->sas_addr, VAR_14);
 FUNC_4(VAR_24, "phyup: phy%d link_rate=%d\n",
   VAR_27, VAR_31);
 VAR_22->port_id = VAR_30;
 VAR_22->phy_type &= ~(VAR_11 | VAR_12);
 VAR_22->phy_type |= VAR_11;
 VAR_22->phy_attached = 1;
 VAR_22->identify.device_type = VAR_33->dev_type;
 VAR_22->frame_rcvd_size = sizeof(struct sas_identify_frame);
 if (VAR_22->identify.device_type == VAR_15)
  VAR_22->identify.target_port_protocols =
   VAR_19;
 else if (VAR_22->identify.device_type != VAR_17)
  VAR_22->identify.target_port_protocols =
   VAR_18;
 FUNC_5(VAR_22, VAR_5);

 FUNC_10(&VAR_22->lock, VAR_35);
 if (VAR_22->reset_completion) {
  VAR_22->in_reset = 0;
  FUNC_1(VAR_22->reset_completion);
 }
 FUNC_11(&VAR_22->lock, VAR_35);

end:
 FUNC_7(VAR_23, VAR_27, VAR_3,
        VAR_4);

 if (VAR_28 & VAR_4) {
  u32 VAR_37 = FUNC_6(VAR_23, VAR_27, VAR_0);

  VAR_37 &= ~VAR_2;
  FUNC_7(VAR_23, VAR_27, VAR_0, VAR_37);
  FUNC_7(VAR_23, VAR_27, VAR_1, 0x3ce3ee);
 }

 return VAR_34;
}
