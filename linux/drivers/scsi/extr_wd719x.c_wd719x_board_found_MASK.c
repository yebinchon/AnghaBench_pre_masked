
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wd719x_host_param {int dummy; } ;
struct wd719x {size_t type; int params_phys; TYPE_2__* params; TYPE_1__* pdev; int hash_phys; TYPE_2__* hash_virt; int * fw_virt; struct Scsi_Host* sh; int active_scbs; } ;
struct Scsi_Host {int this_id; int irq; int base; } ;
struct TYPE_4__ {int own_scsi_id; } ;
struct TYPE_3__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,char const* const,int ,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 void* FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,TYPE_2__*,int ) ;
 int FUNC_5 (int ,struct wd719x*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ,int ,char*,struct wd719x*) ;
 struct wd719x* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct wd719x*) ;
 size_t FUNC_10 (struct wd719x*) ;
 int VAR_5 ;
 int FUNC_11 (struct wd719x*) ;

__attribute__((used)) static int FUNC_12(struct Scsi_Host *VAR_6)
{
 struct wd719x *VAR_7 = FUNC_8(VAR_6);
 static const char * const VAR_8[] = {
  "Unknown card", "WD7193", "WD7197", "WD7296"
 };
 int VAR_9;

 FUNC_0(&VAR_7->active_scbs);

 VAR_6->base = FUNC_6(VAR_7->pdev, 0);

 VAR_7->type = FUNC_10(VAR_7);

 VAR_7->sh = VAR_6;
 VAR_6->irq = VAR_7->pdev->irq;
 VAR_7->fw_virt = ((void*)0);


 VAR_7->params = FUNC_3(&VAR_7->pdev->dev,
     sizeof(struct wd719x_host_param),
     &VAR_7->params_phys, VAR_1);
 if (!VAR_7->params) {
  FUNC_2(&VAR_7->pdev->dev, "unable to allocate parameter buffer\n");
  return -VAR_0;
 }


 VAR_7->hash_virt = FUNC_3(&VAR_7->pdev->dev,
        VAR_4,
        &VAR_7->hash_phys, VAR_1);
 if (!VAR_7->hash_virt) {
  FUNC_2(&VAR_7->pdev->dev, "unable to allocate hash buffer\n");
  VAR_9 = -VAR_0;
  goto fail_free_params;
 }

 VAR_9 = FUNC_7(VAR_7->pdev->irq, VAR_5, VAR_2,
     "wd719x", VAR_7);
 if (VAR_9) {
  FUNC_2(&VAR_7->pdev->dev, "unable to assign IRQ %d\n",
    VAR_7->pdev->irq);
  goto fail_free_hash;
 }


 FUNC_11(VAR_7);

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  goto fail_free_irq;

 VAR_6->this_id = VAR_7->params->own_scsi_id & VAR_3;

 FUNC_1(&VAR_7->pdev->dev, "%s at I/O 0x%lx, IRQ %u, SCSI ID %d\n",
   VAR_8[VAR_7->type], VAR_6->base, VAR_6->irq, VAR_6->this_id);

 return 0;

fail_free_irq:
 FUNC_5(VAR_7->pdev->irq, VAR_7);
fail_free_hash:
 FUNC_4(&VAR_7->pdev->dev, VAR_4, VAR_7->hash_virt,
       VAR_7->hash_phys);
fail_free_params:
 FUNC_4(&VAR_7->pdev->dev, sizeof(struct wd719x_host_param),
       VAR_7->params, VAR_7->params_phys);

 return VAR_9;
}
