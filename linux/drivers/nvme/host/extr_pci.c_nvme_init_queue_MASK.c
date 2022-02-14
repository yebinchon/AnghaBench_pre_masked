
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvme_queue {int cq_phase; scalar_t__ cqes; int * q_db; scalar_t__ cq_head; scalar_t__ last_sq_tail; scalar_t__ sq_tail; struct nvme_dev* dev; } ;
struct nvme_dev {int db_stride; int online_queues; int * dbs; } ;


 int FUNC_0 (struct nvme_queue*) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (struct nvme_dev*,struct nvme_queue*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct nvme_queue *VAR_0, u16 VAR_1)
{
 struct nvme_dev *VAR_2 = VAR_0->dev;

 VAR_0->sq_tail = 0;
 VAR_0->last_sq_tail = 0;
 VAR_0->cq_head = 0;
 VAR_0->cq_phase = 1;
 VAR_0->q_db = &VAR_2->dbs[VAR_1 * 2 * VAR_2->db_stride];
 FUNC_1((void *)VAR_0->cqes, 0, FUNC_0(VAR_0));
 FUNC_2(VAR_2, VAR_0, VAR_1);
 VAR_2->online_queues++;
 FUNC_3();
}
