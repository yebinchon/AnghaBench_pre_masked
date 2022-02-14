
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_affinity {int pre_vectors; struct csio_hw* priv; int calc_sets; } ;
struct csio_scsi_cpu_info {int max_cpus; } ;
struct csio_hw {int num_pports; int num_sqsets; int flags; int num_scsi_msix_cpus; TYPE_1__** sqset; struct csio_scsi_cpu_info* scsi_cpu_info; int pdev; int cfg_niq; } ;
struct TYPE_2__ {int intr_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct csio_hw*,char*,int,...) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int) ;
 int FUNC_4 (struct csio_hw*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct csio_hw*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int,int,int,struct irq_affinity*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_0;
 struct csio_scsi_cpu_info *VAR_16;
 struct irq_affinity VAR_17 = {
  .pre_vectors = VAR_0,
  .calc_sets = VAR_6,
  .priv = VAR_8,
 };

 if (VAR_8->num_pports > VAR_3)
  return -VAR_2;

 VAR_13 = VAR_8->num_pports + VAR_15;
 VAR_14 = VAR_8->num_sqsets + VAR_15;


 if (VAR_8->flags & VAR_1 || !FUNC_2(VAR_8))
  VAR_14 = FUNC_7(VAR_7, VAR_8->cfg_niq, VAR_14);

 FUNC_0(VAR_8, "FW supp #niq:%d, trying %d msix's\n", VAR_8->cfg_niq, VAR_14);

 VAR_14 = FUNC_8(VAR_8->pdev, VAR_13, VAR_14,
   VAR_5 | VAR_4, &VAR_17);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_14 < (VAR_8->num_sqsets + VAR_15)) {
  FUNC_0(VAR_8, "Reducing sqsets to %d\n", VAR_14 - VAR_15);
  FUNC_3(VAR_8, VAR_14 - VAR_15);
 }


 VAR_11 = 0;
 FUNC_6(VAR_8, VAR_11);
 FUNC_5(FUNC_1(VAR_8), VAR_11++);
 FUNC_4(VAR_8, VAR_11++);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_pports; VAR_9++) {
  VAR_16 = &VAR_8->scsi_cpu_info[VAR_9];

  for (VAR_10 = 0; VAR_10 < VAR_8->num_scsi_msix_cpus; VAR_10++) {
   VAR_12 = (VAR_10 % VAR_16->max_cpus) + VAR_11;
   VAR_8->sqset[VAR_9][VAR_10].intr_idx = VAR_12;
  }

  VAR_11 += VAR_16->max_cpus;
 }

 return 0;
}
