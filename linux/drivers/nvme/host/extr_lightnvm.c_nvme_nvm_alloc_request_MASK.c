
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct nvme_ns* queuedata; } ;
struct request {int ioprio; int cmd_flags; } ;
struct nvme_nvm_command {int dummy; } ;
struct nvme_ns {int dummy; } ;
struct nvme_command {int dummy; } ;
struct nvm_rq {int bio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct request*,int *) ;
 struct request* FUNC_3 (struct request_queue*,struct nvme_command*,int ,int ) ;
 int FUNC_4 (struct nvm_rq*,struct nvme_ns*,struct nvme_nvm_command*) ;

__attribute__((used)) static struct request *FUNC_5(struct request_queue *VAR_4,
           struct nvm_rq *VAR_5,
           struct nvme_nvm_command *VAR_6)
{
 struct nvme_ns *VAR_7 = VAR_4->queuedata;
 struct request *VAR_8;

 FUNC_4(VAR_5, VAR_7, VAR_6);

 VAR_8 = FUNC_3(VAR_4, (struct nvme_command *)VAR_6, 0, VAR_2);
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_8->cmd_flags &= ~VAR_3;

 if (VAR_5->bio)
  FUNC_2(VAR_8, &VAR_5->bio);
 else
  VAR_8->ioprio = FUNC_0(VAR_0, VAR_1);

 return VAR_8;
}
