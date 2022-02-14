
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_fastpath {int sb_id; int name; struct qedi_ctx* qedi; struct qedi_fastpath* sb_info; } ;
struct qedi_ctx {struct qedi_fastpath* sb_array; struct qedi_fastpath* fp_array; } ;


 int FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (struct qedi_fastpath*,int ,int) ;
 int FUNC_2 (int ,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct qedi_ctx *VAR_0)
{
 struct qedi_fastpath *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->fp_array, 0, FUNC_0(VAR_0) *
        sizeof(*VAR_0->fp_array));
 FUNC_1(VAR_0->sb_array, 0, FUNC_0(VAR_0) *
        sizeof(*VAR_0->sb_array));

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_1 = &VAR_0->fp_array[VAR_2];
  VAR_1->sb_info = &VAR_0->sb_array[VAR_2];
  VAR_1->sb_id = VAR_2;
  VAR_1->qedi = VAR_0;
  FUNC_2(VAR_1->name, sizeof(VAR_1->name), "%s-fp-%d",
    "qedi", VAR_2);




 }
}
