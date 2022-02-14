
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ online; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(scsi_qla_host_t *VAR_1)
{
 int VAR_2 = VAR_0;

 if (VAR_1->flags.online) {

  FUNC_0(VAR_1);
 }




 FUNC_1(VAR_1);


 VAR_2 = FUNC_2(VAR_1);

 return VAR_2;
}
