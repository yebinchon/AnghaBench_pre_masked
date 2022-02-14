
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nvme_result {int dummy; } nvme_result ;
struct request_queue {int dummy; } ;
struct request {unsigned int timeout; int q; } ;
struct nvme_command {int dummy; } ;
typedef int blk_mq_req_flags_t ;
struct TYPE_2__ {int flags; int status; union nvme_result result; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_3 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,int *,struct request*,int) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request_queue*,struct request*,void*,unsigned int,int ) ;
 struct request* FUNC_5 (struct request_queue*,struct nvme_command*,int ,int) ;
 int FUNC_6 (int ,int *,struct request*,int) ;
 TYPE_1__* FUNC_7 (struct request*) ;

int FUNC_8(struct request_queue *VAR_4, struct nvme_command *VAR_5,
  union nvme_result *VAR_6, void *VAR_7, unsigned VAR_8,
  unsigned VAR_9, int VAR_10, int VAR_11,
  blk_mq_req_flags_t VAR_12, bool VAR_13)
{
 struct request *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_12, VAR_10);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_14->timeout = VAR_9 ? VAR_9 : VAR_0;

 if (VAR_7 && VAR_8) {
  VAR_15 = FUNC_4(VAR_4, VAR_14, VAR_7, VAR_8, VAR_2);
  if (VAR_15)
   goto out;
 }

 if (VAR_13)
  FUNC_6(VAR_14->q, ((void*)0), VAR_14, VAR_11);
 else
  FUNC_2(VAR_14->q, ((void*)0), VAR_14, VAR_11);
 if (VAR_6)
  *VAR_6 = FUNC_7(VAR_14)->result;
 if (FUNC_7(VAR_14)->flags & VAR_3)
  VAR_15 = -VAR_1;
 else
  VAR_15 = FUNC_7(VAR_14)->status;
 out:
 FUNC_3(VAR_14);
 return VAR_15;
}
