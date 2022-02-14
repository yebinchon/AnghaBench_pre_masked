
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nents; } ;
struct TYPE_4__ {TYPE_3__ table; } ;
struct scsi_cmnd {TYPE_2__* prot_sdb; TYPE_1__ sdb; } ;
struct TYPE_5__ {TYPE_3__ table; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_cmnd *VAR_2)
{
 if (VAR_2->sdb.table.nents)
  FUNC_1(&VAR_2->sdb.table,
    VAR_1);
 if (FUNC_0(VAR_2))
  FUNC_1(&VAR_2->prot_sdb->table,
    VAR_0);
}
