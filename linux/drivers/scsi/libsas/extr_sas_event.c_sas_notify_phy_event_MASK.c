
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int dummy; } ;
struct asd_sas_phy {struct sas_ha_struct* ha; } ;
struct asd_sas_event {int work; } ;
typedef enum phy_event { ____Placeholder_phy_event } phy_event ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct asd_sas_event*,int ,struct asd_sas_phy*,int) ;
 int VAR_1 ;
 struct asd_sas_event* FUNC_2 (struct asd_sas_phy*) ;
 int FUNC_3 (struct asd_sas_event*) ;
 int VAR_2 ;
 int FUNC_4 (int,int *,struct sas_ha_struct*) ;

int FUNC_5(struct asd_sas_phy *VAR_3, enum phy_event VAR_4)
{
 struct asd_sas_event *VAR_5;
 struct sas_ha_struct *VAR_6 = VAR_3->ha;
 int VAR_7;

 FUNC_0(VAR_4 >= VAR_1);

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);

 VAR_7 = FUNC_4(VAR_4, &VAR_5->work, VAR_6);
 if (VAR_7 != 1)
  FUNC_3(VAR_5);

 return VAR_7;
}
