
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bleep {scalar_t__ jiffies; scalar_t__ freq; scalar_t__ active; } ;
struct TYPE_5__ {int spinlock; scalar_t__ flushing; } ;
struct TYPE_4__ {int (* catch_up ) (TYPE_1__*) ;scalar_t__ alive; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int VAR_3 ;
 struct bleep VAR_4 ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_12 () ;
 int VAR_6 ;

int FUNC_13(void *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 struct bleep VAR_10;

 VAR_10.active = 0;
 VAR_10.freq = 0;
 VAR_10.jiffies = 0;

 FUNC_4(&VAR_3);
 while (1) {
  FUNC_0(VAR_6);

  while (1) {
   FUNC_9(&VAR_2.spinlock, VAR_8);
   VAR_10 = VAR_4;
   VAR_4.active = 0;
   FUNC_6(&VAR_1, &VAR_6,
     VAR_0);
   VAR_9 = FUNC_3() ||
    VAR_10.active ||
    (VAR_5 && VAR_5->catch_up && VAR_5->alive &&
     (VAR_2.flushing ||
     !FUNC_12()));
   FUNC_10(&VAR_2.spinlock, VAR_8);
   if (VAR_9)
    break;
   FUNC_5(&VAR_3);
   FUNC_7();
   FUNC_4(&VAR_3);
  }
  FUNC_1(&VAR_1, &VAR_6);
  if (FUNC_3())
   break;

  if (VAR_10.active)
   FUNC_2(VAR_10.freq, VAR_10.jiffies);
  if (VAR_5 && VAR_5->catch_up && VAR_5->alive) {




   VAR_5->catch_up(VAR_5);
  }

  FUNC_8();
 }
 FUNC_5(&VAR_3);
 return 0;
}
