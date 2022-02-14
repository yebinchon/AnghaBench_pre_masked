
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ macs_num; } ;
struct bnx2x_pending_mcast_cmd {int done; TYPE_1__ data; int type; } ;
struct bnx2x_mcast_obj {int max_cmd_len; int (* set_one_rule ) (struct bnx2x*,struct bnx2x_mcast_obj*,int,int *,int ) ;} ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_mcast_obj*,int,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_1,
 struct bnx2x_mcast_obj *VAR_2, struct bnx2x_pending_mcast_cmd *VAR_3,
 int *VAR_4)
{
 int VAR_5 = *VAR_4;

 while (VAR_3->data.macs_num) {
  VAR_2->set_one_rule(VAR_1, VAR_2, VAR_5, ((void*)0), VAR_3->type);

  VAR_5++;

  VAR_3->data.macs_num--;

  FUNC_0(VAR_0, "Deleting MAC. %d left,cnt is %d\n",
     VAR_3->data.macs_num, VAR_5);




  if (VAR_5 >= VAR_2->max_cmd_len)
   break;
 }

 *VAR_4 = VAR_5;


 if (!VAR_3->data.macs_num)
  VAR_3->done = 1;
}
