
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int domain_map; int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct dlm_ctxt *VAR_1)
{
 int VAR_2 = -1, VAR_3 = 0;

 FUNC_0(&VAR_1->spinlock);

 FUNC_2("( ");
 while ((VAR_2 = FUNC_1(VAR_1->domain_map, VAR_0,
         VAR_2 + 1)) < VAR_0) {
  FUNC_2("%d ", VAR_2);
  ++VAR_3;
 }
 FUNC_2(") %u nodes\n", VAR_3);
}
