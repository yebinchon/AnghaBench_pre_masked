
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sas_identify_frame {scalar_t__ sas_addr; } ;
struct asd_sas_phy {int linkrate; } ;
struct mvs_phy {int phy_status; int phy_type; int att_dev_info; int att_dev_sas_addr; int dev_info; int maximum_linkrate; int minimum_linkrate; struct asd_sas_phy sas_phy; } ;
struct mvs_info {struct mvs_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mvs_info*,int,struct sas_identify_frame*) ;
 int FUNC_2 (struct mvs_info*,int,struct sas_identify_frame*) ;
 int FUNC_3 (struct sas_identify_frame*) ;
 int FUNC_4 (struct sas_identify_frame*) ;
 int FUNC_5 (struct mvs_info*,int,int ) ;
 int FUNC_6 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_7(struct mvs_info *VAR_7, int VAR_8,
    struct sas_identify_frame *VAR_9)
{
 struct mvs_phy *VAR_10 = &VAR_7->phy[VAR_8];
 struct asd_sas_phy *VAR_11 = &VAR_10->sas_phy;
 FUNC_0("get all reg link rate is 0x%x\n", VAR_10->phy_status);
 VAR_11->linkrate =
  (VAR_10->phy_status & VAR_1) >>
   VAR_2;
 VAR_11->linkrate += 0x8;
 FUNC_0("get link rate is %d\n", VAR_11->linkrate);
 VAR_10->minimum_linkrate = VAR_5;
 VAR_10->maximum_linkrate = VAR_6;
 FUNC_2(VAR_7, VAR_8, VAR_9);
 VAR_10->dev_info = FUNC_4(VAR_9);

 if (VAR_10->phy_type & VAR_4) {
  FUNC_1(VAR_7, VAR_8, VAR_9);
  VAR_10->att_dev_info = FUNC_3(VAR_9);
  VAR_10->att_dev_sas_addr = *(u64 *)VAR_9->sas_addr;
 } else {
  VAR_10->att_dev_info = VAR_3 | 1;
 }


 FUNC_5(VAR_7, VAR_8, VAR_0);
 FUNC_6(VAR_7, VAR_8, 0x04);

}
