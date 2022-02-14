
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_fastpath {int sb_id; int sb_info; } ;
struct qedi_ctx {int dbg_ctx; struct qedi_fastpath* fp_array; } ;


 int VAR_0 ;
 int FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qedi_ctx*,int ,int ) ;
 int FUNC_3 (struct qedi_ctx*) ;
 int FUNC_4 (struct qedi_ctx*) ;
 int FUNC_5 (struct qedi_ctx*) ;
 int FUNC_6 (struct qedi_ctx*) ;

__attribute__((used)) static int FUNC_7(struct qedi_ctx *VAR_1)
{
 struct qedi_fastpath *VAR_2;
 int VAR_3, VAR_4 = 0;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  goto err;

 FUNC_6(VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_2 = &VAR_1->fp_array[VAR_3];
  VAR_4 = FUNC_2(VAR_1, VAR_2->sb_info, VAR_2->sb_id);
  if (VAR_4) {
   FUNC_1(&VAR_1->dbg_ctx,
     "SB allocation and initialization failed.\n");
   VAR_4 = -VAR_0;
   goto err_init;
  }
 }

 return 0;

err_init:
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
err:
 return VAR_4;
}
