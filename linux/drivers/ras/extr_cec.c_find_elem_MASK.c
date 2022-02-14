
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ce_array {int n; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ce_array*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct ce_array *VAR_1, u64 VAR_2, unsigned int *VAR_3)
{
 FUNC_0(!VAR_3);

 if (!VAR_1->n) {
  *VAR_3 = 0;
  return -VAR_0;
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
