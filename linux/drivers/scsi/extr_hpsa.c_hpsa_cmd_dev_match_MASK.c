
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_accel2_cmd {int dummy; } ;
struct hpsa_tmf_struct {int it_nexus; } ;
struct hpsa_scsi_dev_t {int nphysical_disks; int ioaccel_handle; struct hpsa_scsi_dev_t** phys_disk; } ;
struct ctlr_info {TYPE_3__* pdev; struct io_accel2_cmd* ioaccel2_cmd_pool; } ;
struct TYPE_4__ {int LunAddrBytes; } ;
struct TYPE_5__ {TYPE_1__ LUN; } ;
struct CommandList {size_t cmdindex; int cmd_type; struct hpsa_scsi_dev_t* phys_disk; TYPE_2__ Header; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 () ;





 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct CommandList*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*,int *,int) ;

__attribute__((used)) static bool FUNC_5(struct ctlr_info *VAR_0, struct CommandList *VAR_1,
          struct hpsa_scsi_dev_t *VAR_2,
          unsigned char *VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;
 struct io_accel2_cmd *VAR_6 = &VAR_0->ioaccel2_cmd_pool[VAR_1->cmdindex];
 struct hpsa_tmf_struct *VAR_7 = (struct hpsa_tmf_struct *) VAR_6;

 if (FUNC_2(VAR_1))
  return 0;

 switch (VAR_1->cmd_type) {
 case 129:
 case 130:
  VAR_5 = !FUNC_4(VAR_3, &VAR_1->Header.LUN.LunAddrBytes,
    sizeof(VAR_1->Header.LUN.LunAddrBytes));
  break;

 case 132:
 case 131:
  if (VAR_1->phys_disk == VAR_2) {

   VAR_5 = 1;
  } else {




   for (VAR_4 = 0; VAR_4 < VAR_2->nphysical_disks && !VAR_5; VAR_4++) {




    VAR_5 = VAR_2->phys_disk[VAR_4] == VAR_1->phys_disk;
   }
  }
  break;

 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_2->nphysical_disks && !VAR_5; VAR_4++) {
   VAR_5 = VAR_2->phys_disk[VAR_4]->ioaccel_handle ==
     FUNC_3(VAR_7->it_nexus);
  }
  break;

 case 0:
  VAR_5 = 0;
  break;

 default:
  FUNC_1(&VAR_0->pdev->dev, "unexpected cmd_type: %d\n",
   VAR_1->cmd_type);
  FUNC_0();
 }

 return VAR_5;
}
