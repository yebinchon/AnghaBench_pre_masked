
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_fastpath {int sb_info; struct qedi_ctx* qedi; } ;
struct qedi_ctx {int dbg_ctx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct qedi_fastpath*) ;
 int FUNC_4 (struct qedi_fastpath*) ;
 int FUNC_5 () ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct qedi_fastpath *VAR_6 = VAR_5;
 struct qedi_ctx *VAR_7 = VAR_6->qedi;
 bool VAR_8 = 1;

 FUNC_1(VAR_6->sb_info, VAR_0, 0);

process_again:
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_7->dbg_ctx, VAR_3,
     "process already running\n");
 }

 if (FUNC_3(VAR_6) == 0)
  FUNC_2(VAR_6->sb_info);


 FUNC_5();

 if (FUNC_3(VAR_6) == 0)
  FUNC_1(VAR_6->sb_info, VAR_1, 1);
 else
  goto process_again;

 return VAR_2;
}
