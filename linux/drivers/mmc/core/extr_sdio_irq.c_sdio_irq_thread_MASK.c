
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct mmc_host {int caps; TYPE_1__* ops; int sdio_irq_thread_abort; } ;
struct TYPE_2__ {int (* enable_sdio_irq ) (struct mmc_host*,int) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_host*,int *,int *) ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (int ,int ,struct sched_param*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mmc_host*,int) ;
 int FUNC_11 (struct mmc_host*,int) ;

__attribute__((used)) static int FUNC_12(void *VAR_7)
{
 struct mmc_host *VAR_8 = VAR_7;
 struct sched_param VAR_9 = { .sched_priority = 1 };
 unsigned long VAR_10, VAR_11;
 int VAR_12;

 FUNC_7(VAR_6, VAR_3, &VAR_9);







 VAR_11 = FUNC_4(10);
 VAR_10 = (VAR_8->caps & VAR_2) ?
  VAR_1 : VAR_11;

 FUNC_5("%s: IRQ thread started (poll period = %lu jiffies)\n",
   FUNC_2(VAR_8), VAR_10);

 do {
  VAR_12 = FUNC_0(VAR_8, ((void*)0),
           &VAR_8->sdio_irq_thread_abort);
  if (VAR_12)
   break;
  VAR_12 = FUNC_6(VAR_8);
  FUNC_3(VAR_8);





  if (VAR_12 < 0) {
   FUNC_9(VAR_4);
   if (!FUNC_1())
    FUNC_8(VAR_0);
   FUNC_9(VAR_5);
  }






  if (!(VAR_8->caps & VAR_2)) {
   if (VAR_12 > 0)
    VAR_10 /= 2;
   else {
    VAR_10++;
    if (VAR_10 > VAR_11)
     VAR_10 = VAR_11;
   }
  }

  FUNC_9(VAR_4);
  if (VAR_8->caps & VAR_2)
   VAR_8->ops->enable_sdio_irq(VAR_8, 1);
  if (!FUNC_1())
   FUNC_8(VAR_10);
  FUNC_9(VAR_5);
 } while (!FUNC_1());

 if (VAR_8->caps & VAR_2)
  VAR_8->ops->enable_sdio_irq(VAR_8, 0);

 FUNC_5("%s: IRQ thread exiting with code %d\n",
   FUNC_2(VAR_8), VAR_12);

 return VAR_12;
}
