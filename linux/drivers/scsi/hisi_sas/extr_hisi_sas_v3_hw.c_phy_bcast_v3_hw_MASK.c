
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;} ;
struct asd_sas_phy {int dummy; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {int flags; struct sas_ha_struct sha; struct hisi_sas_phy* phy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;
 int FUNC_2 (struct asd_sas_phy*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, struct hisi_hba *VAR_9)
{
 struct hisi_sas_phy *VAR_10 = &VAR_9->phy[VAR_8];
 struct asd_sas_phy *VAR_11 = &VAR_10->sas_phy;
 struct sas_ha_struct *VAR_12 = &VAR_9->sha;
 u32 VAR_13;

 FUNC_1(VAR_9, VAR_8, VAR_7, 1);
 VAR_13 = FUNC_0(VAR_9, VAR_8, VAR_6);
 if ((VAR_13 & VAR_5) &&
     !FUNC_3(VAR_2, &VAR_9->flags))
  VAR_12->notify_port_event(VAR_11, VAR_4);
 FUNC_1(VAR_9, VAR_8, VAR_0,
        VAR_1);
 FUNC_1(VAR_9, VAR_8, VAR_7, 0);

 return VAR_3;
}
