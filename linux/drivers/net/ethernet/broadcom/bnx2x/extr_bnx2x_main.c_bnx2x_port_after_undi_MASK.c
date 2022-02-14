
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_prev_path_list {int undi; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 struct bnx2x_prev_path_list* FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct bnx2x *VAR_1)
{
 struct bnx2x_prev_path_list *VAR_2;
 bool VAR_3;

 FUNC_2(&VAR_0);

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = !!(VAR_2 && (VAR_2->undi & (1 << FUNC_0(VAR_1))));

 FUNC_3(&VAR_0);

 return VAR_3;
}
