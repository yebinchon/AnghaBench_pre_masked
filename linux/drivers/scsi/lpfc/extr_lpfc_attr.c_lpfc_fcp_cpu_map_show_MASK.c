
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_vector_map_info {int flag; int irq; int core_id; int phys_id; int hdwq; int eq; } ;
struct TYPE_2__ {size_t num_possible_cpu; size_t curr_disp_cpu; struct lpfc_vector_map_info* cpu_map; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ intr_type; int cfg_fcp_cpu_map; TYPE_1__ sli4_hba; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_6, struct device_attribute *VAR_7,
        char *VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_6);
 struct lpfc_vport *VAR_10 = (struct lpfc_vport *)VAR_9->hostdata;
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 struct lpfc_vector_map_info *VAR_12;
 int VAR_13 = 0;

 if ((VAR_11->sli_rev != VAR_2) ||
     (VAR_11->intr_type != VAR_4))
  return VAR_13;

 switch (VAR_11->cfg_fcp_cpu_map) {
 case 0:
  VAR_13 += FUNC_4(VAR_8 + VAR_13, VAR_5-VAR_13,
    "fcp_cpu_map: No mapping (%d)\n",
    VAR_11->cfg_fcp_cpu_map);
  return VAR_13;
 case 1:
  VAR_13 += FUNC_4(VAR_8 + VAR_13, VAR_5-VAR_13,
    "fcp_cpu_map: HBA centric mapping (%d): "
    "%d of %d CPUs online from %d possible CPUs\n",
    VAR_11->cfg_fcp_cpu_map, FUNC_2(),
    FUNC_3(),
    VAR_11->sli4_hba.num_possible_cpu);
  break;
 }

 while (VAR_11->sli4_hba.curr_disp_cpu <
        VAR_11->sli4_hba.num_possible_cpu) {
  VAR_12 = &VAR_11->sli4_hba.cpu_map[VAR_11->sli4_hba.curr_disp_cpu];

  if (!FUNC_1(VAR_11->sli4_hba.curr_disp_cpu))
   VAR_13 += FUNC_4(VAR_8 + VAR_13, VAR_5 - VAR_13,
     "CPU %02d not present\n",
     VAR_11->sli4_hba.curr_disp_cpu);
  else if (VAR_12->irq == VAR_3) {
   if (VAR_12->hdwq == VAR_3)
    VAR_13 += FUNC_4(
     VAR_8 + VAR_13, VAR_5 - VAR_13,
     "CPU %02d hdwq None "
     "physid %d coreid %d ht %d ua %d\n",
     VAR_11->sli4_hba.curr_disp_cpu,
     VAR_12->phys_id, VAR_12->core_id,
     (VAR_12->flag & VAR_0),
     (VAR_12->flag & VAR_1));
   else
    VAR_13 += FUNC_4(
     VAR_8 + VAR_13, VAR_5 - VAR_13,
     "CPU %02d EQ %04d hdwq %04d "
     "physid %d coreid %d ht %d ua %d\n",
     VAR_11->sli4_hba.curr_disp_cpu,
     VAR_12->eq, VAR_12->hdwq, VAR_12->phys_id,
     VAR_12->core_id,
     (VAR_12->flag & VAR_0),
     (VAR_12->flag & VAR_1));
  } else {
   if (VAR_12->hdwq == VAR_3)
    VAR_13 += FUNC_4(
     VAR_8 + VAR_13, VAR_5 - VAR_13,
     "CPU %02d hdwq None "
     "physid %d coreid %d ht %d ua %d IRQ %d\n",
     VAR_11->sli4_hba.curr_disp_cpu,
     VAR_12->phys_id,
     VAR_12->core_id,
     (VAR_12->flag & VAR_0),
     (VAR_12->flag & VAR_1),
     VAR_12->irq);
   else
    VAR_13 += FUNC_4(
     VAR_8 + VAR_13, VAR_5 - VAR_13,
     "CPU %02d EQ %04d hdwq %04d "
     "physid %d coreid %d ht %d ua %d IRQ %d\n",
     VAR_11->sli4_hba.curr_disp_cpu,
     VAR_12->eq, VAR_12->hdwq, VAR_12->phys_id,
     VAR_12->core_id,
     (VAR_12->flag & VAR_0),
     (VAR_12->flag & VAR_1),
     VAR_12->irq);
  }

  VAR_11->sli4_hba.curr_disp_cpu++;


  if (VAR_11->sli4_hba.curr_disp_cpu <
    VAR_11->sli4_hba.num_possible_cpu &&
    (VAR_13 >= (VAR_5 - 64))) {
   VAR_13 += FUNC_4(VAR_8 + VAR_13,
     VAR_5 - VAR_13, "more...\n");
   break;
  }
 }

 if (VAR_11->sli4_hba.curr_disp_cpu == VAR_11->sli4_hba.num_possible_cpu)
  VAR_11->sli4_hba.curr_disp_cpu = 0;

 return VAR_13;
}
