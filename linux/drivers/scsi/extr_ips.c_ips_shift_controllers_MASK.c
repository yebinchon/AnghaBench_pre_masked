
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int host_num; } ;
typedef TYPE_1__ ips_ha_t ;


 TYPE_1__** VAR_0 ;
 struct Scsi_Host** VAR_1 ;

__attribute__((used)) static void
FUNC_0(int VAR_2, int VAR_3)
{
 ips_ha_t *VAR_4 = VAR_0[VAR_3];
 struct Scsi_Host *VAR_5 = VAR_1[VAR_3];
 int VAR_6;

 for (VAR_6 = VAR_3; VAR_6 > VAR_2; VAR_6--) {
  VAR_0[VAR_6] = VAR_0[VAR_6 - 1];
  VAR_1[VAR_6] = VAR_1[VAR_6 - 1];
  VAR_0[VAR_6]->host_num = VAR_6;
 }
 VAR_4->host_num = VAR_2;
 VAR_0[VAR_2] = VAR_4;
 VAR_1[VAR_2] = VAR_5;
}
