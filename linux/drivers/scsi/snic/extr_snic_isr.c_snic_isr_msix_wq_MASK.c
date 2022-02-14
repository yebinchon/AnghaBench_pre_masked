
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ack_isr_cnt; int last_isr_time; } ;
struct TYPE_4__ {TYPE_1__ misc; } ;
struct snic {int * intr; TYPE_2__ s_stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 unsigned long FUNC_1 (struct snic*,int) ;
 int FUNC_2 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_3, void *VAR_4)
{
 struct snic *VAR_5 = VAR_4;
 unsigned long VAR_6 = 0;

 VAR_5->s_stats.misc.last_isr_time = VAR_2;
 FUNC_0(&VAR_5->s_stats.misc.ack_isr_cnt);

 VAR_6 = FUNC_1(VAR_5, -1);
 FUNC_2(&VAR_5->intr[VAR_1],
      VAR_6,
      1 ,
      1 );

 return VAR_0;
}
