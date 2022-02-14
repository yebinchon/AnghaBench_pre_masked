
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_span_entry {scalar_t__ ref_count; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_span_entry*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_span_entry *VAR_1)
{
 FUNC_0(!VAR_1->ref_count);
 if (--VAR_1->ref_count == 0)
  FUNC_1(VAR_1);
 return 0;
}
