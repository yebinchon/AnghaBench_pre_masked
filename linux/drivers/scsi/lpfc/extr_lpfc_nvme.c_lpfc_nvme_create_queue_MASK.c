
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvme_fc_local_port {scalar_t__ private; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nvme_qhandle {unsigned int qidx; unsigned int index; int cpu_id; } ;
struct lpfc_nvme_lport {struct lpfc_vport* vport; } ;
struct TYPE_2__ {unsigned int max_hw_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lpfc_nvme_qhandle* FUNC_0 (int,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,char*,unsigned int,int ,unsigned int,struct lpfc_nvme_qhandle*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct nvme_fc_local_port *VAR_5,
         unsigned int VAR_6, u16 VAR_7,
         void **VAR_8)
{
 struct lpfc_nvme_lport *VAR_9;
 struct lpfc_vport *VAR_10;
 struct lpfc_nvme_qhandle *VAR_11;
 char *VAR_12;

 if (!VAR_5->private)
  return -VAR_0;

 VAR_9 = (struct lpfc_nvme_lport *)VAR_5->private;
 VAR_10 = VAR_9->vport;
 VAR_11 = FUNC_0(sizeof(struct lpfc_nvme_qhandle), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_11->cpu_id = FUNC_2();
 VAR_11->qidx = VAR_6;





 if (VAR_6) {
  VAR_12 = "IO ";
  VAR_11->index = ((VAR_6 - 1) %
   VAR_4.max_hw_queues);
 } else {
  VAR_12 = "ADM";
  VAR_11->index = VAR_6;
 }

 FUNC_1(VAR_10, VAR_2, VAR_3,
    "6073 Binding %s HdwQueue %d  (cpu %d) to "
    "hdw_queue %d qhandle x%px\n", VAR_12,
    VAR_6, VAR_11->cpu_id, VAR_11->index, VAR_11);
 *VAR_8 = (void *)VAR_11;
 return 0;
}
