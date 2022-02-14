
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct niu_ldg {int napi; int ldg_num; void* v2; void* v1; void* v0; } ;
struct niu {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct niu*,int ,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_0, struct niu_ldg *VAR_1,
         u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 if (FUNC_2(FUNC_3(&VAR_1->napi))) {
  VAR_1->v0 = VAR_2;
  VAR_1->v1 = VAR_3;
  VAR_1->v2 = VAR_4;
  FUNC_1(VAR_0, VAR_1->ldg_num, VAR_2);
  FUNC_0(&VAR_1->napi);
 }
}
