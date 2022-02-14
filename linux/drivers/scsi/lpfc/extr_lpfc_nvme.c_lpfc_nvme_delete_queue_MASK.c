
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_local_port {scalar_t__ private; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nvme_lport {struct lpfc_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,struct lpfc_nvme_lport*,unsigned int,void*) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_local_port *VAR_2,
         unsigned int VAR_3,
         void *VAR_4)
{
 struct lpfc_nvme_lport *VAR_5;
 struct lpfc_vport *VAR_6;

 if (!VAR_2->private)
  return;

 VAR_5 = (struct lpfc_nvme_lport *)VAR_2->private;
 VAR_6 = VAR_5->vport;

 FUNC_1(VAR_6, VAR_0, VAR_1,
   "6001 ENTER.  lpfc_pnvme x%px, qidx x%x qhandle x%px\n",
   VAR_5, VAR_3, VAR_4);
 FUNC_0(VAR_4);
}
