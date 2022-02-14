
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pci_dev* pdev; int host_no; } ;
struct qedi_ctx {int max_sqes; int max_active_conns; TYPE_1__ dbg_ctx; struct pci_dev* pdev; struct Scsi_Host* shost; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int max_cmd_len; int nr_hw_queues; int host_no; int transportt; int max_lun; scalar_t__ max_channel; int max_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_2 (int *,int,int ) ;
 struct qedi_ctx* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct qedi_ctx*,int ,int) ;
 int FUNC_5 (struct pci_dev*,struct qedi_ctx*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct qedi_ctx *FUNC_6(struct pci_dev *VAR_5)
{
 struct Scsi_Host *VAR_6;
 struct qedi_ctx *VAR_7 = ((void*)0);

 VAR_6 = FUNC_2(&VAR_3,
     sizeof(struct qedi_ctx), 0);
 if (!VAR_6) {
  FUNC_1(((void*)0), "Could not allocate shost\n");
  goto exit_setup_shost;
 }

 VAR_6->max_id = VAR_1;
 VAR_6->max_channel = 0;
 VAR_6->max_lun = ~0;
 VAR_6->max_cmd_len = 16;
 VAR_6->transportt = VAR_4;

 VAR_7 = FUNC_3(VAR_6);
 FUNC_4(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->shost = VAR_6;
 VAR_7->dbg_ctx.host_no = VAR_6->host_no;
 VAR_7->pdev = VAR_5;
 VAR_7->dbg_ctx.pdev = VAR_5;
 VAR_7->max_active_conns = VAR_0;
 VAR_7->max_sqes = VAR_2;

 VAR_6->nr_hw_queues = FUNC_0(VAR_7);

 FUNC_5(VAR_5, VAR_7);

exit_setup_shost:
 return VAR_7;
}
