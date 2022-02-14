
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ arb_divider; } ;
struct baycom_state {int hdrv; TYPE_1__ modem; } ;


 int FUNC_0 (struct baycom_state*) ;
 int FUNC_1 (struct net_device*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct baycom_state* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,struct baycom_state*) ;
 int FUNC_9 (struct net_device*,struct baycom_state*) ;

__attribute__((used)) static void FUNC_10(void *VAR_0)
{
 struct net_device *VAR_1 = VAR_0;
 struct baycom_state *VAR_2 = FUNC_7(VAR_1);

 FUNC_0(VAR_2);



 if (FUNC_2(&VAR_2->hdrv))
  FUNC_9(VAR_1, VAR_2);
 else {
  FUNC_8(VAR_1, VAR_2);
  if (--VAR_2->modem.arb_divider <= 0) {
   VAR_2->modem.arb_divider = 6;
   FUNC_6();
   FUNC_1(VAR_1, &VAR_2->hdrv);
  }
 }
 FUNC_6();
 FUNC_4(VAR_1, &VAR_2->hdrv);
 FUNC_3(VAR_1, &VAR_2->hdrv);
        FUNC_5();
}
