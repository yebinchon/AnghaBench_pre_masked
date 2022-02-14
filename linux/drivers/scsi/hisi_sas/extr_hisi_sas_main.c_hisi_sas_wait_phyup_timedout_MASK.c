
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct hisi_sas_phy {TYPE_1__ sas_phy; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct hisi_sas_phy* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct hisi_sas_phy*,int ) ;
 struct hisi_sas_phy* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct hisi_sas_phy *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct hisi_hba *VAR_5 = VAR_4->hisi_hba;
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7 = VAR_4->sas_phy.id;

 FUNC_0(VAR_6, "phy%d wait phyup timeout, issuing link reset\n", VAR_7);
 FUNC_2(VAR_4, VAR_0);
}
