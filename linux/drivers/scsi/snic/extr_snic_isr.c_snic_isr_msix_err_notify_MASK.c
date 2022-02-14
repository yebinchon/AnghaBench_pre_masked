
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errnotify_isr_cnt; int last_isr_time; } ;
struct TYPE_4__ {TYPE_1__ misc; } ;
struct snic {int * intr; TYPE_2__ s_stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct snic*) ;
 int FUNC_2 (struct snic*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_3, void *VAR_4)
{
 struct snic *VAR_5 = VAR_4;

 VAR_5->s_stats.misc.last_isr_time = VAR_2;
 FUNC_0(&VAR_5->s_stats.misc.errnotify_isr_cnt);

 FUNC_3(&VAR_5->intr[VAR_1]);
 FUNC_2(VAR_5);


 FUNC_1(VAR_5);

 return VAR_0;
}
