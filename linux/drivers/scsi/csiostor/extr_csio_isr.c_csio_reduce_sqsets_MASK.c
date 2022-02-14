
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsi_cpu_info {int max_cpus; } ;
struct csio_hw {int num_sqsets; int num_pports; struct csio_scsi_cpu_info* scsi_cpu_info; } ;


 int FUNC_0 (struct csio_hw*,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct csio_hw *VAR_0, int VAR_1)
{
 int VAR_2;
 struct csio_scsi_cpu_info *VAR_3;

 while (VAR_1 < VAR_0->num_sqsets) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_pports; VAR_2++) {
   VAR_3 = &VAR_0->scsi_cpu_info[VAR_2];
   if (VAR_3->max_cpus > 1) {
    VAR_3->max_cpus--;
    VAR_0->num_sqsets--;
    if (VAR_0->num_sqsets <= VAR_1)
     break;
   }
  }
 }

 FUNC_0(VAR_0, "Reduced sqsets to %d\n", VAR_0->num_sqsets);
}
