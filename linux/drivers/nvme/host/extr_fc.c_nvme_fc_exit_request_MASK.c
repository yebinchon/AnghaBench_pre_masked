
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_fc_fcp_op {int dummy; } ;
struct blk_mq_tag_set {int driver_data; } ;


 void FUNC_0 (int ,struct nvme_fc_fcp_op*) ;
 struct nvme_fc_fcp_op* FUNC_1 (struct request*) ;

__attribute__((used)) static void
FUNC_2(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
  unsigned int VAR_2)
{
 struct nvme_fc_fcp_op *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0->driver_data, VAR_3);
}
