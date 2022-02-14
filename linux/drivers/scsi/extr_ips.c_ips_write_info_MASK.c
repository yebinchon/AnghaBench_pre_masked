
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host** VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct Scsi_Host *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;
 ips_ha_t *VAR_7 = ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_2[VAR_6]) {
   if (VAR_2[VAR_6] == VAR_3) {
    VAR_7 = (ips_ha_t *) VAR_2[VAR_6]->hostdata;
    break;
   }
  }
 }

 if (!VAR_7)
  return (-VAR_0);

 return 0;
}
