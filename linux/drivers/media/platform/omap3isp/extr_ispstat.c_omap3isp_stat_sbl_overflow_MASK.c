
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ispstat {int sbl_ovl_recover; TYPE_1__* isp; scalar_t__ recover_priv; int buf_err; } ;
struct TYPE_2__ {int stat_lock; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ispstat *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->isp->stat_lock, VAR_1);




 FUNC_0(&VAR_0->buf_err, 2);







 if (VAR_0->recover_priv)
  VAR_0->sbl_ovl_recover = 1;
 FUNC_2(&VAR_0->isp->stat_lock, VAR_1);
}
