
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_hba {int dummy; } ;
struct myrs_cmdblk {int * complete; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct myrs_hba *VAR_0, struct myrs_cmdblk *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->complete) {
  FUNC_0(VAR_1->complete);
  VAR_1->complete = ((void*)0);
 }
}
