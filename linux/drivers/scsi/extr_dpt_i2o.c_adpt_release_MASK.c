
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;
typedef TYPE_1__ adpt_hba ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(adpt_hba *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;

 FUNC_2(VAR_1);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
