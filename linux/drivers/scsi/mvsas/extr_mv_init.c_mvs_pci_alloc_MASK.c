
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {scalar_t__ lldd_ha; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; } ;
struct mvs_slot_info {int dummy; } ;
struct mvs_prv_info {int n_phy; struct mvs_info** mvi; } ;
struct mvs_info {size_t chip_id; unsigned int id; void* tags; struct Scsi_Host* shost; struct sas_ha_struct* sas; TYPE_1__* chip; int wq_list; int * dev; struct pci_dev* pdev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* chip_ioremap ) (struct mvs_info*) ;} ;
struct TYPE_3__ {long slot_width; int n_phy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 struct sas_ha_struct* FUNC_1 (struct Scsi_Host*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mvs_info*,struct Scsi_Host*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (struct mvs_info*) ;
 scalar_t__ FUNC_5 (struct mvs_info*) ;

__attribute__((used)) static struct mvs_info *FUNC_6(struct pci_dev *VAR_4,
    const struct pci_device_id *VAR_5,
    struct Scsi_Host *VAR_6, unsigned int VAR_7)
{
 struct mvs_info *VAR_8 = ((void*)0);
 struct sas_ha_struct *VAR_9 = FUNC_1(VAR_6);

 VAR_8 = FUNC_2(sizeof(*VAR_8) +
  (1L << VAR_3[VAR_5->driver_data].slot_width) *
  sizeof(struct mvs_slot_info), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->pdev = VAR_4;
 VAR_8->dev = &VAR_4->dev;
 VAR_8->chip_id = VAR_5->driver_data;
 VAR_8->chip = &VAR_3[VAR_8->chip_id];
 FUNC_0(&VAR_8->wq_list);

 ((struct mvs_prv_info *)VAR_9->lldd_ha)->mvi[VAR_7] = VAR_8;
 ((struct mvs_prv_info *)VAR_9->lldd_ha)->n_phy = VAR_8->chip->n_phy;

 VAR_8->id = VAR_7;
 VAR_8->sas = VAR_9;
 VAR_8->shost = VAR_6;

 VAR_8->tags = FUNC_2(VAR_2>>3, VAR_0);
 if (!VAR_8->tags)
  goto err_out;

 if (VAR_1->chip_ioremap(VAR_8))
  goto err_out;
 if (!FUNC_3(VAR_8, VAR_6))
  return VAR_8;
err_out:
 FUNC_4(VAR_8);
 return ((void*)0);
}
