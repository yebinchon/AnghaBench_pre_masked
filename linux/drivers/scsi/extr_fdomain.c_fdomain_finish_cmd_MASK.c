
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdomain {TYPE_1__* cur_cmd; scalar_t__ base; } ;
struct TYPE_2__ {int result; int (* scsi_done ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fdomain*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct fdomain *VAR_1, int VAR_2)
{
 FUNC_1(0, VAR_1->base + VAR_0);
 FUNC_0(VAR_1);
 VAR_1->cur_cmd->result = VAR_2;
 VAR_1->cur_cmd->scsi_done(VAR_1->cur_cmd);
 VAR_1->cur_cmd = ((void*)0);
}
