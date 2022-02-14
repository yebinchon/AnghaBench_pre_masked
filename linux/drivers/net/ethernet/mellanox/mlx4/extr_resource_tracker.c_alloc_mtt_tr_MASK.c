
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_common {int res_id; int state; } ;
struct res_mtt {int order; struct res_common com; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct res_mtt* FUNC_1 (int,int ) ;

__attribute__((used)) static struct res_common *FUNC_2(int VAR_2, int VAR_3)
{
 struct res_mtt *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->com.res_id = VAR_2;
 VAR_4->order = VAR_3;
 VAR_4->com.state = VAR_1;
 FUNC_0(&VAR_4->ref_count, 0);

 return &VAR_4->com;
}
