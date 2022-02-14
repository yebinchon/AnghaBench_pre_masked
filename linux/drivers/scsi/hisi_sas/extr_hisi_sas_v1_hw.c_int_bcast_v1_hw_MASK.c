
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;} ;
struct asd_sas_phy {int id; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {int flags; struct device* dev; struct sas_ha_struct sha; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;
 int FUNC_2 (struct hisi_hba*,int,int ,int) ;
 int FUNC_3 (struct asd_sas_phy*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct hisi_sas_phy *VAR_8 = VAR_7;
 struct hisi_hba *VAR_9 = VAR_8->hisi_hba;
 struct asd_sas_phy *VAR_10 = &VAR_8->sas_phy;
 struct sas_ha_struct *VAR_11 = &VAR_9->sha;
 struct device *VAR_12 = VAR_9->dev;
 int VAR_13 = VAR_10->id;
 u32 VAR_14;
 irqreturn_t VAR_15 = VAR_3;

 VAR_14 = FUNC_1(VAR_9, VAR_13, VAR_0);

 if (!(VAR_14 & VAR_1)) {
  FUNC_0(VAR_12, "bcast: irq_value = %x not set enable bit",
   VAR_14);
  VAR_15 = VAR_4;
  goto end;
 }

 if (!FUNC_4(VAR_2, &VAR_9->flags))
  VAR_11->notify_port_event(VAR_10, VAR_5);

end:
 FUNC_2(VAR_9, VAR_13, VAR_0,
        VAR_1);

 return VAR_15;
}
