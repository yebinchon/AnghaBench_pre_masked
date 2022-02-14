
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_affinity {int post_vectors; } ;
struct TYPE_2__ {int eqid_count; } ;
struct beiscsi_hba {int generation; int num_cpus; int pcidev; TYPE_1__ fw_config; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int,int,struct irq_affinity*) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_4)
{
 int VAR_5 = 1;

 switch (VAR_4->generation) {
 case 130:
 case 129:
  VAR_5 = VAR_0 + 1;
  break;
 case 128:
  VAR_5 = VAR_4->fw_config.eqid_count;
  break;
 default:
  VAR_5 = 2;
  break;
 }


 if (VAR_3 && VAR_5 > 1) {
  struct irq_affinity VAR_6 = { .post_vectors = 1 };

  if (FUNC_0(VAR_4->pcidev, 2, VAR_5,
    VAR_2 | VAR_1, &VAR_6) < 0) {
   VAR_4->num_cpus = VAR_5 - 1;
   return;
  }
 }

 VAR_4->num_cpus = 1;
}
