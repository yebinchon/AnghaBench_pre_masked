
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int cmd_flags; } ;
struct nvme_ctrl {scalar_t__ state; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 TYPE_1__* FUNC_3 (struct request*) ;

blk_status_t FUNC_4(struct nvme_ctrl *VAR_6,
  struct request *VAR_7)
{
 if (VAR_6->state != VAR_3 &&
     VAR_6->state != VAR_2 &&
     !FUNC_1(VAR_7) && !(VAR_7->cmd_flags & VAR_5))
  return VAR_1;

 FUNC_3(VAR_7)->status = VAR_4;
 FUNC_0(VAR_7);
 FUNC_2(VAR_7);
 return VAR_0;
}
