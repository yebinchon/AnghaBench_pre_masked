
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; TYPE_1__* se_tfo; int scsi_status; } ;
struct TYPE_2__ {int (* queue_status ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;

int FUNC_3(struct se_cmd *VAR_2)
{
 FUNC_0(VAR_2->se_cmd_flags & VAR_1);

 VAR_2->scsi_status = VAR_0;
 FUNC_2(VAR_2);
 return VAR_2->se_tfo->queue_status(VAR_2);
}
