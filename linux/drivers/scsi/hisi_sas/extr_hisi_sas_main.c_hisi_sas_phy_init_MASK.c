
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {int dummy; } ;
struct asd_sas_phy {int enabled; int id; struct hisi_sas_phy* lldd_phy; struct sas_ha_struct* ha; int * frame_rcvd; int * sas_addr; int linkrate; int oob_mode; int role; int type; scalar_t__ tproto; int iproto; int class; } ;
struct hisi_sas_phy {int timer; int lock; int * works; int * frame_rcvd; int maximum_linkrate; int minimum_linkrate; int * port; struct hisi_hba* hisi_hba; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {int n_phy; TYPE_2__* shost; int * sas_addr; TYPE_1__* hw; struct hisi_sas_phy* phy; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {int (* phy_get_max_linkrate ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_10, int VAR_11)
{
 struct hisi_sas_phy *VAR_12 = &VAR_10->phy[VAR_11];
 struct asd_sas_phy *VAR_13 = &VAR_12->sas_phy;
 int VAR_14;

 VAR_12->hisi_hba = VAR_10;
 VAR_12->port = ((void*)0);
 VAR_12->minimum_linkrate = VAR_5;
 VAR_12->maximum_linkrate = VAR_10->hw->phy_get_max_linkrate();
 VAR_13->enabled = (VAR_11 < VAR_10->n_phy) ? 1 : 0;
 VAR_13->class = VAR_4;
 VAR_13->iproto = VAR_7;
 VAR_13->tproto = 0;
 VAR_13->type = VAR_3;
 VAR_13->role = VAR_2;
 VAR_13->oob_mode = VAR_1;
 VAR_13->linkrate = VAR_6;
 VAR_13->id = VAR_11;
 VAR_13->sas_addr = &VAR_10->sas_addr[0];
 VAR_13->frame_rcvd = &VAR_12->frame_rcvd[0];
 VAR_13->ha = (struct sas_ha_struct *)VAR_10->shost->hostdata;
 VAR_13->lldd_phy = VAR_12;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
  FUNC_0(&VAR_12->works[VAR_14], VAR_8[VAR_14]);

 FUNC_1(&VAR_12->lock);

 FUNC_3(&VAR_12->timer, VAR_9, 0);
}
