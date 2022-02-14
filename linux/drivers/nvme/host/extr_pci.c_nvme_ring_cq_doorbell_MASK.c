
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvme_queue {TYPE_1__* dev; scalar_t__ q_db; int dbbuf_cq_ei; int dbbuf_cq_db; int cq_head; } ;
struct TYPE_2__ {scalar_t__ db_stride; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct nvme_queue *VAR_0)
{
 u16 VAR_1 = VAR_0->cq_head;

 if (FUNC_0(VAR_1, VAR_0->dbbuf_cq_db,
           VAR_0->dbbuf_cq_ei))
  FUNC_1(VAR_1, VAR_0->q_db + VAR_0->dev->db_stride);
}
