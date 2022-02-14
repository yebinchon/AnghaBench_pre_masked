
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_qpair {int id; } ;
struct qla_msix_entry {int have_irq; struct qla_qpair* handle; int vector; int name; } ;
struct qla_init_msix_entry {int handler; } ;
struct qla_hw_data {int pdev; } ;
struct TYPE_4__ {int host_no; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 struct qla_init_msix_entry* VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,struct qla_qpair*) ;
 int FUNC_3 (int ,int,char*,int ,int ) ;

int FUNC_4(struct qla_hw_data *VAR_2, struct qla_qpair *VAR_3,
 struct qla_msix_entry *VAR_4, int VAR_5)
{
 const struct qla_init_msix_entry *VAR_6 = &VAR_0[VAR_5];
 scsi_qla_host_t *VAR_7 = FUNC_0(VAR_2->pdev);
 int VAR_8;

 FUNC_3(VAR_4->name, sizeof(VAR_4->name),
     "qla2xxx%lu_qpair%d", VAR_7->host_no, VAR_3->id);
 VAR_8 = FUNC_2(VAR_4->vector, VAR_6->handler, 0, VAR_4->name, VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_1, VAR_7, 0x00e6,
      "MSI-X: Unable to register handler -- %x/%d.\n",
      VAR_4->vector, VAR_8);
  return VAR_8;
 }
 VAR_4->have_irq = 1;
 VAR_4->handle = VAR_3;
 return VAR_8;
}
