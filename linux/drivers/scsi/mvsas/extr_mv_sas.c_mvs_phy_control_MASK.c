
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sas_ha_struct {scalar_t__ lldd_ha; struct asd_sas_phy** sas_phy; } ;
struct mvs_prv_info {size_t n_phy; struct mvs_info** mvi; } ;
struct mvs_info {int dummy; } ;
struct asd_sas_phy {int id; struct sas_ha_struct* ha; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_2__ {size_t (* read_phy_ctl ) (struct mvs_info*,int) ;int (* phy_disable ) (struct mvs_info*,int) ;int (* phy_reset ) (struct mvs_info*,int,int ) ;int (* phy_enable ) (struct mvs_info*,int) ;int (* phy_set_link_rate ) (struct mvs_info*,int,void*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mvs_info*,int,void*) ;
 size_t FUNC_2 (struct mvs_info*,int) ;
 int FUNC_3 (struct mvs_info*,int,int ) ;
 int FUNC_4 (struct mvs_info*,int) ;
 int FUNC_5 (struct mvs_info*,int,int ) ;
 int FUNC_6 (struct mvs_info*,int) ;

int FUNC_7(struct asd_sas_phy *VAR_5, enum phy_func VAR_6,
   void *VAR_7)
{
 int VAR_8 = 0, VAR_9 = VAR_5->id;
 u32 VAR_10, VAR_11 = 0, VAR_12;
 struct sas_ha_struct *VAR_13 = VAR_5->ha;
 struct mvs_info *VAR_14 = ((void*)0);

 while (VAR_13->sas_phy[VAR_11]) {
  if (VAR_13->sas_phy[VAR_11] == VAR_5)
   break;
  VAR_11++;
 }
 VAR_12 = VAR_11/((struct mvs_prv_info *)VAR_13->lldd_ha)->n_phy;
 VAR_14 = ((struct mvs_prv_info *)VAR_13->lldd_ha)->mvi[VAR_12];

 switch (VAR_6) {
 case 128:
  VAR_1->phy_set_link_rate(VAR_14, VAR_9, VAR_7);
  break;

 case 131:
  VAR_10 = VAR_1->read_phy_ctl(VAR_14, VAR_9);
  if (VAR_10 & VAR_4)
   break;
  VAR_1->phy_reset(VAR_14, VAR_9, VAR_2);
  break;

 case 130:
  VAR_1->phy_enable(VAR_14, VAR_9);
  VAR_1->phy_reset(VAR_14, VAR_9, VAR_3);
  break;

 case 132:
  VAR_1->phy_disable(VAR_14, VAR_9);
  break;
 case 129:
 default:
  VAR_8 = -VAR_0;
 }
 FUNC_0(200);
 return VAR_8;
}
