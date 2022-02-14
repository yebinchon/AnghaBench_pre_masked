
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int negotiated_linkrate; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;
struct hisi_sas_phy {int lock; scalar_t__ enable; int * port; scalar_t__ phy_type; scalar_t__ phy_attached; struct asd_sas_phy sas_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct hisi_sas_phy *VAR_2)
{
 struct asd_sas_phy *VAR_3 = &VAR_2->sas_phy;
 struct sas_phy *VAR_4 = VAR_3->phy;
 unsigned long VAR_5;

 VAR_2->phy_attached = 0;
 VAR_2->phy_type = 0;
 VAR_2->port = ((void*)0);

 FUNC_0(&VAR_2->lock, VAR_5);
 if (VAR_2->enable)
  VAR_4->negotiated_linkrate = VAR_0;
 else
  VAR_4->negotiated_linkrate = VAR_1;
 FUNC_1(&VAR_2->lock, VAR_5);
}
