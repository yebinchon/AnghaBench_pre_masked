
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; } ;
struct TYPE_6__ {scalar_t__ rd_idx; scalar_t__ wr_idx; scalar_t__ last_blk_idx; int flag; } ;
struct TYPE_5__ {scalar_t__ af_mode; TYPE_3__ rds; } ;
struct fmdev {TYPE_1__ irq_info; TYPE_2__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(struct fmdev *VAR_3)
{
 VAR_3->rx.rds.flag = VAR_1;
 VAR_3->rx.rds.last_blk_idx = 0;
 VAR_3->rx.rds.wr_idx = 0;
 VAR_3->rx.rds.rd_idx = 0;

 if (VAR_3->rx.af_mode == VAR_2)
  VAR_3->irq_info.mask |= VAR_0;
}
