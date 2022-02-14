
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int sq_tail; int sqes; int q_depth; int sq_lock; scalar_t__ sq_cmds; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (scalar_t__,struct nvme_command*,int) ;
 int FUNC_1 (struct nvme_queue*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nvme_queue *VAR_0, struct nvme_command *VAR_1,
       bool VAR_2)
{
 FUNC_2(&VAR_0->sq_lock);
 FUNC_0(VAR_0->sq_cmds + (VAR_0->sq_tail << VAR_0->sqes),
        VAR_1, sizeof(*VAR_1));
 if (++VAR_0->sq_tail == VAR_0->q_depth)
  VAR_0->sq_tail = 0;
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(&VAR_0->sq_lock);
}
