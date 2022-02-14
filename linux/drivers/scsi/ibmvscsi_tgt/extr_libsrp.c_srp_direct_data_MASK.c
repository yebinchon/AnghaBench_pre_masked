
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_direct_buf {int len; } ;
struct scatterlist {int dummy; } ;
struct iu_entry {TYPE_2__* target; } ;
struct TYPE_3__ {int data_length; int t_data_nents; struct scatterlist* t_data_sg; } ;
struct ibmvscsis_cmd {TYPE_1__ se_cmd; struct iu_entry* iue; } ;
typedef int (* srp_rdma_t ) (struct ibmvscsis_cmd*,struct scatterlist*,int,struct srp_direct_buf*,int,int,int) ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_2 (int ,struct scatterlist*,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,struct iu_entry*,int ) ;

__attribute__((used)) static int FUNC_5(struct ibmvscsis_cmd *VAR_1, struct srp_direct_buf *VAR_2,
      enum dma_data_direction VAR_3, srp_rdma_t VAR_4,
      int VAR_5, int VAR_6)
{
 struct iu_entry *VAR_7 = ((void*)0);
 struct scatterlist *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0, VAR_11;

 if (VAR_5) {
  VAR_7 = VAR_1->iue;
  VAR_8 = VAR_1->se_cmd.t_data_sg;
  VAR_10 = FUNC_1(VAR_7->target->dev, VAR_8, VAR_1->se_cmd.t_data_nents,
     VAR_0);
  if (!VAR_10) {
   FUNC_4("fail to map %p %d\n", VAR_7,
          VAR_1->se_cmd.t_data_nents);
   return 0;
  }
  VAR_11 = FUNC_3(VAR_1->se_cmd.data_length, FUNC_0(VAR_2->len));
 } else {
  VAR_11 = FUNC_0(VAR_2->len);
 }

 VAR_9 = VAR_4(VAR_1, VAR_8, VAR_10, VAR_2, 1, VAR_3, VAR_11);

 if (VAR_5)
  FUNC_2(VAR_7->target->dev, VAR_8, VAR_10, VAR_0);

 return VAR_9;
}
