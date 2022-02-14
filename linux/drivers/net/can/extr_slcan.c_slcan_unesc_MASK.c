
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slcan {int rcount; unsigned char* rbuff; int flags; TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_over_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct slcan*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct slcan *VAR_2, unsigned char VAR_3)
{
 if ((VAR_3 == '\r') || (VAR_3 == '\a')) {
  if (!FUNC_2(VAR_1, &VAR_2->flags) &&
      (VAR_2->rcount > 4)) {
   FUNC_1(VAR_2);
  }
  VAR_2->rcount = 0;
 } else {
  if (!FUNC_3(VAR_1, &VAR_2->flags)) {
   if (VAR_2->rcount < VAR_0) {
    VAR_2->rbuff[VAR_2->rcount++] = VAR_3;
    return;
   } else {
    VAR_2->dev->stats.rx_over_errors++;
    FUNC_0(VAR_1, &VAR_2->flags);
   }
  }
 }
}
