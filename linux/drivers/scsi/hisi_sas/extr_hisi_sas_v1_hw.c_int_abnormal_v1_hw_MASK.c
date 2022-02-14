
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_sas_phy {int id; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hisi_hba*,int,int) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int,int ,int) ;
 int FUNC_4 (struct hisi_hba*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_12, void *VAR_13)
{
 struct hisi_sas_phy *VAR_14 = VAR_13;
 struct hisi_hba *VAR_15 = VAR_14->hisi_hba;
 struct device *VAR_16 = VAR_15->dev;
 struct asd_sas_phy *VAR_17 = &VAR_14->sas_phy;
 u32 VAR_18, VAR_19;
 int VAR_20 = VAR_17->id;


 VAR_19 = FUNC_2(VAR_15, VAR_20, VAR_3);
 FUNC_3(VAR_15, VAR_20, VAR_3, 0x3fffff);


 VAR_18 = FUNC_2(VAR_15, VAR_20, VAR_0);

 if (VAR_18 & VAR_5) {
  u32 VAR_21 = FUNC_4(VAR_15, VAR_11);

  FUNC_1(VAR_15, VAR_20,
      (VAR_21 & 1 << VAR_20) ? 1 : 0);
 }

 if (VAR_18 & VAR_2)
  FUNC_0(VAR_16, "abnormal: ID_TIMEOUT phy%d identify timeout\n",
   VAR_20);

 if (VAR_18 & VAR_1)
  FUNC_0(VAR_16, "abnormal: DWS_LOST phy%d dws lost\n", VAR_20);

 if (VAR_18 & VAR_9)
  FUNC_0(VAR_16, "abnormal: SN_FAIL_NGR phy%d sn fail ngr\n",
   VAR_20);

 if (VAR_18 & VAR_6 ||
  VAR_18 & VAR_7)
  FUNC_0(VAR_16, "abnormal: SL_ID/OPAF_FAIL phy%d check adr frm err\n",
   VAR_20);

 if (VAR_18 & VAR_8)
  FUNC_0(VAR_16, "abnormal: SL_PS_FAIL phy%d fail\n", VAR_20);


 FUNC_3(VAR_15, VAR_20, VAR_0, VAR_18);

 if (VAR_18 & VAR_5)
  FUNC_3(VAR_15, VAR_20, VAR_3,
    0x3fffff & ~VAR_4);
 else
  FUNC_3(VAR_15, VAR_20, VAR_3,
    VAR_19);

 return VAR_10;
}
