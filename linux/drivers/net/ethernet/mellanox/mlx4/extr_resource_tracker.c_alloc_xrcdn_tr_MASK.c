
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_common {int res_id; int state; } ;
struct res_xrcdn {struct res_common com; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct res_xrcdn* FUNC_0 (int,int ) ;

__attribute__((used)) static struct res_common *FUNC_1(int VAR_2)
{
 struct res_xrcdn *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->com.res_id = VAR_2;
 VAR_3->com.state = VAR_1;

 return &VAR_3->com;
}
