
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_identify_frame {scalar_t__ dev_type; int sas_addr; } ;
struct TYPE_2__ {scalar_t__ device_type; int target_port_protocols; } ;
struct asd_sas_phy {int linkrate; int attached_sas_addr; int oob_mode; scalar_t__ frame_rcvd; } ;
struct hisi_sas_phy {int port_id; int phy_type; int phy_attached; int frame_rcvd_size; int lock; scalar_t__ reset_completion; scalar_t__ in_reset; TYPE_1__ identify; int timer; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {int timer; struct device* dev; struct hisi_sas_phy* phy; } ;
struct device {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int FUNC_5 (struct hisi_sas_phy*,int ) ;
 int FUNC_6 (struct hisi_hba*,int,scalar_t__) ;
 int FUNC_7 (struct hisi_hba*,int,int ,int) ;
 int FUNC_8 (struct hisi_hba*,int ) ;
 scalar_t__ FUNC_9 (struct hisi_hba*,int) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (struct hisi_hba*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(int VAR_22, struct hisi_hba *VAR_23)
{
 int VAR_24, VAR_25 = VAR_3;
 u32 VAR_26, VAR_27;
 struct hisi_sas_phy *VAR_28 = &VAR_23->phy[VAR_22];
 struct asd_sas_phy *VAR_29 = &VAR_28->sas_phy;
 struct device *VAR_30 = VAR_23->dev;
 u32 *VAR_31 = (u32 *)VAR_29->frame_rcvd;
 struct sas_identify_frame *VAR_32 = (struct sas_identify_frame *)VAR_31;
 unsigned long VAR_33;

 FUNC_7(VAR_23, VAR_22, VAR_5, 1);

 if (FUNC_9(VAR_23, VAR_22))
  goto end;

 FUNC_2(&VAR_28->timer);

 if (VAR_22 == 8) {
  u32 VAR_34 = FUNC_8(VAR_23, VAR_8);

  VAR_26 = (VAR_34 & VAR_11) >>
     VAR_12;
  VAR_27 = (VAR_34 & VAR_9) >>
       VAR_10;
 } else {
  VAR_26 = FUNC_8(VAR_23, VAR_7);
  VAR_26 = (VAR_26 >> (4 * VAR_22)) & 0xf;
  VAR_27 = FUNC_8(VAR_23, VAR_6);
  VAR_27 = (VAR_27 >> (VAR_22 * 4)) & 0xf;
 }

 if (VAR_26 == 0xf) {
  FUNC_3(VAR_30, "phyup: phy%d invalid portid\n", VAR_22);
  VAR_25 = VAR_4;
  goto end;
 }

 for (VAR_24 = 0; VAR_24 < 6; VAR_24++) {
  u32 VAR_35 = FUNC_6(VAR_23, VAR_22,
            VAR_15 + (VAR_24 * 4));
  VAR_31[VAR_24] = FUNC_0(VAR_35);
 }

 VAR_29->linkrate = VAR_27;
 VAR_29->oob_mode = VAR_18;
 FUNC_10(VAR_29->attached_sas_addr, &VAR_32->sas_addr, VAR_16);
 FUNC_4(VAR_30, "phyup: phy%d link_rate=%d\n", VAR_22, VAR_27);
 VAR_28->port_id = VAR_26;
 VAR_28->phy_type &= ~(VAR_13 | VAR_14);
 VAR_28->phy_type |= VAR_13;
 VAR_28->phy_attached = 1;
 VAR_28->identify.device_type = VAR_32->dev_type;
 VAR_28->frame_rcvd_size = sizeof(struct sas_identify_frame);
 if (VAR_28->identify.device_type == VAR_17)
  VAR_28->identify.target_port_protocols =
   VAR_21;
 else if (VAR_28->identify.device_type != VAR_19) {
  VAR_28->identify.target_port_protocols =
   VAR_20;
  if (!FUNC_14(&VAR_23->timer))
   FUNC_11(VAR_23);
 }
 FUNC_5(VAR_28, VAR_2);
 FUNC_12(&VAR_28->lock, VAR_33);
 if (VAR_28->reset_completion) {
  VAR_28->in_reset = 0;
  FUNC_1(VAR_28->reset_completion);
 }
 FUNC_13(&VAR_28->lock, VAR_33);

end:
 FUNC_7(VAR_23, VAR_22, VAR_0,
        VAR_1);
 FUNC_7(VAR_23, VAR_22, VAR_5, 0);

 return VAR_25;
}
