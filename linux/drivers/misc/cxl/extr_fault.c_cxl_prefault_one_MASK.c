
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mm_struct {int dummy; } ;
struct cxl_context {int pid; } ;


 int FUNC_0 (struct cxl_context*,struct mm_struct*,int ) ;
 struct mm_struct* FUNC_1 (struct cxl_context*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct cxl_context *VAR_0, u64 VAR_1)
{
 struct mm_struct *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_4("cxl_prefault_one unable to get mm %i\n",
    FUNC_3(VAR_0->pid));
  return;
 }

 FUNC_0(VAR_0, VAR_2, VAR_1);

 FUNC_2(VAR_2);
}
