
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct mkiss {scalar_t__ mtu; TYPE_2__* dev; int flags; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {scalar_t__ mtu; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct mkiss*) ;
 int FUNC_1 (struct mkiss*,int ) ;
 struct mkiss* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct mkiss*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1, const unsigned char *VAR_2,
 char *VAR_3, int VAR_4)
{
 struct mkiss *VAR_5 = FUNC_2(VAR_1);

 if (!VAR_5)
  return;





 if (VAR_5->mtu != VAR_5->dev->mtu + 73)
  FUNC_0(VAR_5);


 while (VAR_4--) {
  if (VAR_3 != ((void*)0) && *VAR_3++) {
   if (!FUNC_4(VAR_0, &VAR_5->flags))
    VAR_5->dev->stats.rx_errors++;
   VAR_2++;
   continue;
  }

  FUNC_1(VAR_5, *VAR_2++);
 }

 FUNC_3(VAR_5);
 FUNC_5(VAR_1);
}
