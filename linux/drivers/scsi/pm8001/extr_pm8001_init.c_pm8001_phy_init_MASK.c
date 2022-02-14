
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {int dummy; } ;
struct asd_sas_phy {int enabled; int id; struct pm8001_phy* lldd_phy; struct sas_ha_struct* ha; int * frame_rcvd; int * sas_addr; int linkrate; int oob_mode; int role; int type; scalar_t__ tproto; int iproto; int class; } ;
struct pm8001_phy {int * frame_rcvd; int dev_sas_addr; struct pm8001_hba_info* pm8001_ha; int phy_state; struct asd_sas_phy sas_phy; } ;
struct pm8001_hba_info {TYPE_2__* shost; TYPE_1__* chip; struct pm8001_phy* phy; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct pm8001_hba_info *VAR_7, int VAR_8)
{
 struct pm8001_phy *VAR_9 = &VAR_7->phy[VAR_8];
 struct asd_sas_phy *VAR_10 = &VAR_9->sas_phy;
 VAR_9->phy_state = VAR_1;
 VAR_9->pm8001_ha = VAR_7;
 VAR_10->enabled = (VAR_8 < VAR_7->chip->n_phy) ? 1 : 0;
 VAR_10->class = VAR_4;
 VAR_10->iproto = VAR_6;
 VAR_10->tproto = 0;
 VAR_10->type = VAR_3;
 VAR_10->role = VAR_2;
 VAR_10->oob_mode = VAR_0;
 VAR_10->linkrate = VAR_5;
 VAR_10->id = VAR_8;
 VAR_10->sas_addr = (u8 *)&VAR_9->dev_sas_addr;
 VAR_10->frame_rcvd = &VAR_9->frame_rcvd[0];
 VAR_10->ha = (struct sas_ha_struct *)VAR_7->shost->hostdata;
 VAR_10->lldd_phy = VAR_9;
}
