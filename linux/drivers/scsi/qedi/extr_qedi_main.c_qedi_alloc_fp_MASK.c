
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_fastpath {int dummy; } ;
struct qedi_ctx {int dbg_ctx; void* sb_array; void* fp_array; } ;
struct qed_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct qedi_ctx*) ;

__attribute__((used)) static int FUNC_4(struct qedi_ctx *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->fp_array = FUNC_2(FUNC_0(VAR_2),
     sizeof(struct qedi_fastpath), VAR_1);
 if (!VAR_2->fp_array) {
  FUNC_1(&VAR_2->dbg_ctx,
    "fastpath fp array allocation failed.\n");
  return -VAR_0;
 }

 VAR_2->sb_array = FUNC_2(FUNC_0(VAR_2),
     sizeof(struct qed_sb_info), VAR_1);
 if (!VAR_2->sb_array) {
  FUNC_1(&VAR_2->dbg_ctx,
    "fastpath sb array allocation failed.\n");
  VAR_3 = -VAR_0;
  goto free_fp;
 }

 return VAR_3;

free_fp:
 FUNC_3(VAR_2);
 return VAR_3;
}
