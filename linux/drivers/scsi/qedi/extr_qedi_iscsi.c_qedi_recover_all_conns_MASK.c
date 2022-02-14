
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int max_active_conns; } ;
struct qedi_conn {int dummy; } ;


 int VAR_0 ;
 struct qedi_conn* FUNC_0 (struct qedi_ctx*,int) ;
 int FUNC_1 (struct qedi_ctx*,struct qedi_conn*) ;

int FUNC_2(struct qedi_ctx *VAR_1)
{
 struct qedi_conn *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_active_conns; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  if (!VAR_2)
   continue;

  FUNC_1(VAR_1, VAR_2);
 }

 return VAR_0;
}
