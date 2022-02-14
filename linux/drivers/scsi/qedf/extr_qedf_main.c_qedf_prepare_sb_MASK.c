
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_fastpath {int sb_id; int cq_num_entries; struct qedf_ctx* qedf; void* sb_info; } ;
struct qedf_ctx {int num_queues; TYPE_1__** global_queues; int dbg_ctx; struct qedf_fastpath* fp_array; } ;
struct fcoe_cqe {int dummy; } ;
struct TYPE_2__ {int cq_mem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct qedf_ctx*,void*,int) ;

__attribute__((used)) static int FUNC_3(struct qedf_ctx *VAR_3)
{
 int VAR_4;
 struct qedf_fastpath *VAR_5;
 int VAR_6;

 VAR_3->fp_array =
     FUNC_1(VAR_3->num_queues, sizeof(struct qedf_fastpath),
  VAR_1);

 if (!VAR_3->fp_array) {
  FUNC_0(&(VAR_3->dbg_ctx), "fastpath array allocation "
     "failed.\n");
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_queues; VAR_4++) {
  VAR_5 = &(VAR_3->fp_array[VAR_4]);
  VAR_5->sb_id = VAR_2;
  VAR_5->sb_info = FUNC_1(1, sizeof(*VAR_5->sb_info), VAR_1);
  if (!VAR_5->sb_info) {
   FUNC_0(&(VAR_3->dbg_ctx), "SB info struct "
      "allocation failed.\n");
   goto err;
  }
  VAR_6 = FUNC_2(VAR_3, VAR_5->sb_info, VAR_4);
  if (VAR_6) {
   FUNC_0(&(VAR_3->dbg_ctx), "SB allocation and "
      "initialization failed.\n");
   goto err;
  }
  VAR_5->sb_id = VAR_4;
  VAR_5->qedf = VAR_3;
  VAR_5->cq_num_entries =
      VAR_3->global_queues[VAR_4]->cq_mem_size /
      sizeof(struct fcoe_cqe);
 }
err:
 return 0;
}
