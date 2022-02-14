
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa3xx_gcu_shared {int num_done; scalar_t__ hw_running; int num_idle; int num_interrupts; } ;
struct pxa3xx_gcu_priv {int spinlock; int wait_idle; scalar_t__ ready; int wait_free; struct pxa3xx_gcu_shared* shared; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pxa3xx_gcu_priv*) ;
 int FUNC_3 (struct pxa3xx_gcu_priv*) ;
 int FUNC_4 (struct pxa3xx_gcu_priv*,int ) ;
 int FUNC_5 (struct pxa3xx_gcu_priv*,int ,int) ;
 int FUNC_6 (struct pxa3xx_gcu_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_6, void *VAR_7)
{
 struct pxa3xx_gcu_priv *VAR_8 = VAR_7;
 struct pxa3xx_gcu_shared *VAR_9 = VAR_8->shared;
 u32 VAR_10 = FUNC_4(VAR_8, VAR_4) & VAR_0;

 FUNC_0("-Interrupt");

 if (!VAR_10)
  return VAR_3;

 FUNC_7(&VAR_8->spinlock);
 VAR_9->num_interrupts++;

 if (VAR_10 & VAR_1) {
  FUNC_0(" [EEOB]");

  FUNC_3(VAR_8);
  FUNC_9(&VAR_8->wait_free);

  if (VAR_8->ready) {
   FUNC_6(VAR_8);
  } else {



   VAR_9->num_idle++;
   VAR_9->hw_running = 0;

   FUNC_0(" '-> Idle.");


   FUNC_5(VAR_8, VAR_5, 0);

   FUNC_9(&VAR_8->wait_idle);
  }

  VAR_9->num_done++;
 } else {
  FUNC_1(" [???]");
  FUNC_2(VAR_8);
 }


 FUNC_5(VAR_8, VAR_4, VAR_10);
 FUNC_8(&VAR_8->spinlock);

 return VAR_2;
}
