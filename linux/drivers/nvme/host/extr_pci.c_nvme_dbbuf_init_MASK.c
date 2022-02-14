
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int * dbbuf_cq_ei; int * dbbuf_sq_ei; int * dbbuf_cq_db; int * dbbuf_sq_db; } ;
struct nvme_dev {int db_stride; int * dbbuf_eis; int * dbbuf_dbs; } ;


 size_t FUNC_0 (int,int ) ;
 size_t FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct nvme_dev *VAR_0,
       struct nvme_queue *VAR_1, int VAR_2)
{
 if (!VAR_0->dbbuf_dbs || !VAR_2)
  return;

 VAR_1->dbbuf_sq_db = &VAR_0->dbbuf_dbs[FUNC_1(VAR_2, VAR_0->db_stride)];
 VAR_1->dbbuf_cq_db = &VAR_0->dbbuf_dbs[FUNC_0(VAR_2, VAR_0->db_stride)];
 VAR_1->dbbuf_sq_ei = &VAR_0->dbbuf_eis[FUNC_1(VAR_2, VAR_0->db_stride)];
 VAR_1->dbbuf_cq_ei = &VAR_0->dbbuf_eis[FUNC_0(VAR_2, VAR_0->db_stride)];
}
