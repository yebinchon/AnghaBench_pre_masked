
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flag; int mask; int stage; } ;
struct TYPE_4__ {scalar_t__ afcache_size; } ;
struct TYPE_5__ {scalar_t__ af_mode; scalar_t__ freq; scalar_t__ freq_before_jump; scalar_t__ afjump_idx; TYPE_1__ stat_info; } ;
struct fmdev {TYPE_3__ irq_info; TYPE_2__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct fmdev *VAR_5)
{
 if ((VAR_5->rx.af_mode == VAR_2) &&
     (VAR_5->irq_info.flag & VAR_1 & VAR_5->irq_info.mask) &&
     (VAR_5->rx.freq != VAR_4) &&
     (VAR_5->rx.stat_info.afcache_size != 0)) {
  FUNC_1("irq: rssi level has fallen below threshold level\n");


  VAR_5->irq_info.mask &= ~VAR_1;

  VAR_5->rx.afjump_idx = 0;
  VAR_5->rx.freq_before_jump = VAR_5->rx.freq;
  VAR_5->irq_info.stage = VAR_0;
 } else {

  VAR_5->irq_info.stage = VAR_3;
 }

 FUNC_0(VAR_5);
}
