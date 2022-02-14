
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ips_ha_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct seq_file*) ;
 int VAR_1 ;
 struct Scsi_Host** VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_3, struct Scsi_Host *VAR_4)
{
 int VAR_5;
 ips_ha_t *VAR_6 = ((void*)0);


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5]) {
   if (VAR_2[VAR_5] == VAR_4) {
    VAR_6 = (ips_ha_t *) VAR_2[VAR_5]->hostdata;
    break;
   }
  }
 }

 if (!VAR_6)
  return (-VAR_0);

 return FUNC_0(VAR_6, VAR_3);
}
