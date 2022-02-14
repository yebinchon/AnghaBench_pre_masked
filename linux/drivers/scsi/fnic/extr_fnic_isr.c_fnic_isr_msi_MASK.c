
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


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fnic*,int) ;
 scalar_t__ FUNC_2 (struct fnic*,int) ;
 scalar_t__ FUNC_3 (struct fnic*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct fnic *VAR_5 = VAR_4;
 unsigned long VAR_6 = 0;

 VAR_5->fnic_stats.misc_stats.last_isr_time = VAR_2;
 FUNC_0(&VAR_5->fnic_stats.misc_stats.isr_count);

 VAR_6 += FUNC_3(VAR_5, VAR_1);
 VAR_6 += FUNC_2(VAR_5, -1);
 VAR_6 += FUNC_1(VAR_5, -1);

 FUNC_4(&VAR_5->intr[0],
     VAR_6,
     1 ,
     1 );

 return VAR_0;
}
