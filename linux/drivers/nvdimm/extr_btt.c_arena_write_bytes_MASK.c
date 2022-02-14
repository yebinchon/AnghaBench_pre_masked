
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dummy; } ;
struct nd_btt {struct nd_namespace_common* ndns; } ;
struct arena_info {struct nd_btt* nd_btt; } ;
typedef int resource_size_t ;


 int FUNC_0 (struct nd_btt*,int ) ;
 int FUNC_1 (struct nd_namespace_common*,int ,void*,size_t,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct arena_info *VAR_0, resource_size_t VAR_1,
  void *VAR_2, size_t VAR_3, unsigned long VAR_4)
{
 struct nd_btt *VAR_5 = VAR_0->nd_btt;
 struct nd_namespace_common *VAR_6 = VAR_5->ndns;


 VAR_1 = FUNC_0(VAR_5, VAR_1);
 return FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
}
