
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mgmtm {struct csio_hw* hw; int cbfn_q; int active_q; int mgmt_timer; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct csio_mgmtm *VAR_1, struct csio_hw *VAR_2)
{
 FUNC_1(&VAR_1->mgmt_timer, VAR_0, 0);

 FUNC_0(&VAR_1->active_q);
 FUNC_0(&VAR_1->cbfn_q);

 VAR_1->hw = VAR_2;


 return 0;
}
