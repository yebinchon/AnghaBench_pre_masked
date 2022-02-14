
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clip_tbl {struct clip_tbl* cl_list; } ;
struct adapter {struct clip_tbl* clipt; } ;


 int FUNC_0 (struct clip_tbl*) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct clip_tbl *VAR_1 = VAR_0->clipt;

 if (VAR_1) {
  if (VAR_1->cl_list)
   FUNC_0(VAR_1->cl_list);
  FUNC_0(VAR_1);
 }
}
