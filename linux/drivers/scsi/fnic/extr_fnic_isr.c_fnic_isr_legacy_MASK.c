
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int isr_count; int last_isr_time; } ;
struct TYPE_4__ {TYPE_1__ misc_stats; } ;
struct fnic {int * intr; TYPE_2__ fnic_stats; int legacy_pba; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fnic*) ;
 int FUNC_2 (struct fnic*) ;
 scalar_t__ FUNC_3 (struct fnic*,int) ;
 scalar_t__ FUNC_4 (struct fnic*,int) ;
 scalar_t__ FUNC_5 (struct fnic*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct fnic *VAR_9 = VAR_8;
 u32 VAR_10;
 unsigned long VAR_11 = 0;

 VAR_10 = FUNC_6(VAR_9->legacy_pba);
 if (!VAR_10)
  return VAR_4;

 VAR_9->fnic_stats.misc_stats.last_isr_time = VAR_6;
 FUNC_0(&VAR_9->fnic_stats.misc_stats.isr_count);

 if (VAR_10 & (1 << VAR_1)) {
  FUNC_7(&VAR_9->intr[VAR_1]);
  FUNC_1(VAR_9);
 }

 if (VAR_10 & (1 << VAR_0)) {
  FUNC_7(&VAR_9->intr[VAR_0]);
  FUNC_2(VAR_9);
 }

 if (VAR_10 & (1 << VAR_2)) {
  VAR_11 += FUNC_5(VAR_9, VAR_5);
  VAR_11 += FUNC_4(VAR_9, -1);
  VAR_11 += FUNC_3(VAR_9, -1);

  FUNC_8(&VAR_9->intr[VAR_2],
      VAR_11,
      1 ,
      1 );
 }

 return VAR_3;
}
