
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pxa3xx_gcu_priv {TYPE_1__* shared; int wait_idle; } ;
struct TYPE_2__ {int num_interrupts; scalar_t__ hw_running; int num_wait_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct pxa3xx_gcu_priv*,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct pxa3xx_gcu_priv *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0("Waiting for idle...");



 VAR_3->shared->num_wait_idle++;

 while (VAR_3->shared->hw_running) {
  int VAR_5 = VAR_3->shared->num_interrupts;
  u32 VAR_6 = FUNC_2(VAR_3, VAR_2);

  VAR_4 = FUNC_3(VAR_3->wait_idle,
     !VAR_3->shared->hw_running, VAR_1*4);

  if (VAR_4 != 0)
   break;

  if (FUNC_2(VAR_3, VAR_2) == VAR_6 &&
      VAR_3->shared->num_interrupts == VAR_5) {
   FUNC_1("TIMEOUT");
   VAR_4 = -VAR_0;
   break;
  }
 }

 FUNC_0("done");

 return VAR_4;
}
