
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mm_struct {int dummy; } ;
struct cxl_context {int dummy; } ;
struct copro_slb {int member_1; int member_0; } ;


 int FUNC_0 (struct mm_struct*,int ,struct copro_slb*) ;
 int FUNC_1 (struct cxl_context*,struct copro_slb*) ;

__attribute__((used)) static int FUNC_2(struct cxl_context *VAR_0, struct mm_struct *VAR_1,
        u64 VAR_2)
{
 struct copro_slb VAR_3 = {0,0};
 int VAR_4;

 if (!(VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3))) {
  FUNC_1(VAR_0, &VAR_3);
 }

 return VAR_4;
}
