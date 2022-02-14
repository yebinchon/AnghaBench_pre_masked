
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tickcnt; } ;
struct brcmf_sdio {int watchdog_wait; TYPE_1__ sdcnt; int sdiodev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_sdio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(void *VAR_1)
{
 struct brcmf_sdio *VAR_2 = (struct brcmf_sdio *)VAR_1;
 int VAR_3;

 FUNC_0(VAR_0);

 FUNC_2(VAR_2->sdiodev);
 while (1) {
  if (FUNC_5())
   break;
  FUNC_3(VAR_2->sdiodev);
  VAR_3 = FUNC_7(&VAR_2->watchdog_wait);
  FUNC_2(VAR_2->sdiodev);
  FUNC_4(VAR_2->sdiodev);
  if (!VAR_3) {
   FUNC_1(VAR_2);

   VAR_2->sdcnt.tickcnt++;
   FUNC_6(&VAR_2->watchdog_wait);
  } else
   break;
 }
 return 0;
}
