
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_flags; } ;
struct nvme_command {int dummy; } ;
typedef int blk_mq_req_flags_t ;
struct TYPE_2__ {struct nvme_command* cmd; } ;


 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct request* FUNC_1 (struct request_queue*,unsigned int,int ) ;
 struct request* FUNC_2 (struct request_queue*,unsigned int,int ,int) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct nvme_command*) ;
 TYPE_1__* FUNC_5 (struct request*) ;

struct request *FUNC_6(struct request_queue *VAR_4,
  struct nvme_command *VAR_5, blk_mq_req_flags_t VAR_6, int VAR_7)
{
 unsigned VAR_8 = FUNC_4(VAR_5) ? VAR_3 : VAR_2;
 struct request *VAR_9;

 if (VAR_7 == VAR_0) {
  VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_6);
 } else {
  VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_6,
    VAR_7 ? VAR_7 - 1 : 0);
 }
 if (FUNC_0(VAR_9))
  return VAR_9;

 VAR_9->cmd_flags |= VAR_1;
 FUNC_3(VAR_9);
 FUNC_5(VAR_9)->cmd = VAR_5;

 return VAR_9;
}
