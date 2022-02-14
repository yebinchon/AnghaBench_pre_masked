
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_credit_pool_obj {int base_pool_offset; int pool_sz; int pool_mirror; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(
 struct bnx2x_credit_pool_obj *VAR_0,
 int VAR_1)
{
 if (VAR_1 < VAR_0->base_pool_offset)
  return 0;

 VAR_1 -= VAR_0->base_pool_offset;

 if (VAR_1 >= VAR_0->pool_sz)
  return 0;


 FUNC_0(VAR_0->pool_mirror, VAR_1);

 return 1;
}
