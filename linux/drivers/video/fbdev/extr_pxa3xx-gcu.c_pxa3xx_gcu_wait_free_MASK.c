
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pxa3xx_gcu_priv {int free; int wait_free; TYPE_1__* shared; } ;
struct TYPE_2__ {int num_wait_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct pxa3xx_gcu_priv*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct pxa3xx_gcu_priv *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0("Waiting for free...");



 VAR_3->shared->num_wait_free++;

 while (!VAR_3->free) {
  u32 VAR_5 = FUNC_2(VAR_3, VAR_2);

  VAR_4 = FUNC_3(VAR_3->wait_free,
             VAR_3->free, VAR_1*4);

  if (VAR_4 < 0)
   break;

  if (VAR_4 > 0)
   continue;

  if (FUNC_2(VAR_3, VAR_2) == VAR_5) {
   FUNC_1("TIMEOUT");
   VAR_4 = -VAR_0;
   break;
  }
 }

 FUNC_0("done");

 return VAR_4;
}
