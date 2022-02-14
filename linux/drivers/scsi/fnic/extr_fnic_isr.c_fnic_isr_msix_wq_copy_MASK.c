
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isr_count; int last_isr_time; } ;
struct TYPE_4__ {TYPE_1__ misc_stats; } ;
struct fnic {int * intr; TYPE_2__ fnic_stats; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (struct fnic*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct fnic *VAR_6 = VAR_5;
 unsigned long VAR_7 = 0;

 VAR_6->fnic_stats.misc_stats.last_isr_time = VAR_3;
 FUNC_0(&VAR_6->fnic_stats.misc_stats.isr_count);

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 FUNC_2(&VAR_6->intr[VAR_0],
     VAR_7,
     1 ,
     1 );
 return VAR_1;
}
