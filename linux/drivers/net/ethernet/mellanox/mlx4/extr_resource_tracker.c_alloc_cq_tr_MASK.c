
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_common {int res_id; int state; } ;
struct res_cq {struct res_common com; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct res_cq* FUNC_1 (int,int ) ;

__attribute__((used)) static struct res_common *FUNC_2(int VAR_2)
{
 struct res_cq *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->com.res_id = VAR_2;
 VAR_3->com.state = VAR_1;
 FUNC_0(&VAR_3->ref_count, 0);

 return &VAR_3->com;
}
