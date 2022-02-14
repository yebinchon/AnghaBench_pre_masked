
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* shost; } ;
struct sas_ha_struct {unsigned short num_phys; TYPE_3__ core; int * sas_addr; int lldd_module; int dev; int sas_ha_name; int ** sas_port; int ** sas_phy; scalar_t__ lldd_ha; } ;
struct mvs_prv_info {unsigned short n_host; struct mvs_info** mvi; } ;
struct mvs_info {int flags; TYPE_4__* shost; int * sas_addr; int dev; TYPE_2__* port; TYPE_1__* phy; } ;
struct mvs_chip_info {int n_phy; } ;
struct Scsi_Host {int can_queue; int sg_tablesize; } ;
struct TYPE_8__ {int cmd_per_lun; } ;
struct TYPE_6__ {int sas_port; } ;
struct TYPE_5__ {int sas_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_9,
   const struct mvs_chip_info *VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 struct mvs_info *VAR_14 = ((void*)0);
 struct sas_ha_struct *VAR_15 = FUNC_0(VAR_9);
 unsigned short VAR_16 = ((struct mvs_prv_info *)VAR_15->lldd_ha)->n_host;

 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  VAR_14 = ((struct mvs_prv_info *)VAR_15->lldd_ha)->mvi[VAR_13];
  for (VAR_12 = 0; VAR_12 < VAR_10->n_phy; VAR_12++) {
   VAR_15->sas_phy[VAR_13 * VAR_10->n_phy + VAR_12] =
    &VAR_14->phy[VAR_12].sas_phy;
   VAR_15->sas_port[VAR_13 * VAR_10->n_phy + VAR_12] =
    &VAR_14->port[VAR_12].sas_port;
  }
 }

 VAR_15->sas_ha_name = VAR_0;
 VAR_15->dev = VAR_14->dev;
 VAR_15->lldd_module = VAR_7;
 VAR_15->sas_addr = &VAR_14->sas_addr[0];

 VAR_15->num_phys = VAR_16 * VAR_10->n_phy;

 if (VAR_14->flags & VAR_1)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_2;

 VAR_9->sg_tablesize = FUNC_1(VAR_8, VAR_6, VAR_3);
 VAR_9->can_queue = VAR_11;
 VAR_14->shost->cmd_per_lun = VAR_4;
 VAR_15->core.shost = VAR_14->shost;
}
