
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {int mcast_list_len; } ;
struct bnx2x_mcast_obj {int (* set_one_rule ) (struct bnx2x*,struct bnx2x_mcast_obj*,int,int *,int ) ;} ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_mcast_obj*,int,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_2,
 struct bnx2x_mcast_obj *VAR_3, struct bnx2x_mcast_ramrod_params *VAR_4,
 int *VAR_5)
{
 int VAR_6 = *VAR_5, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->mcast_list_len; VAR_7++) {
  VAR_3->set_one_rule(VAR_2, VAR_3, VAR_6, ((void*)0), VAR_0);

  VAR_6++;

  FUNC_0(VAR_1, "Deleting MAC. %d left\n",
     VAR_4->mcast_list_len - VAR_7 - 1);
 }

 *VAR_5 = VAR_6;
}
