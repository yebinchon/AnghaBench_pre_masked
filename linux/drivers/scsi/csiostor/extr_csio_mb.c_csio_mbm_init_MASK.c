
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mbm {int cbfn_q; int req_q; int timer; struct csio_hw* hw; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct csio_mbm*,int) ;
 int FUNC_2 (int *,void (*) (struct timer_list*),int ) ;

int
FUNC_3(struct csio_mbm *VAR_0, struct csio_hw *VAR_1,
       void (*VAR_2)(struct timer_list *))
{
 VAR_0->hw = VAR_1;
 FUNC_2(&VAR_0->timer, VAR_2, 0);

 FUNC_0(&VAR_0->req_q);
 FUNC_0(&VAR_0->cbfn_q);
 FUNC_1(VAR_0, -1);

 return 0;
}
