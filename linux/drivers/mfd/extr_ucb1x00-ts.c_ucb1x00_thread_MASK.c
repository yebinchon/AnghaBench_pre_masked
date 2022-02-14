
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ucb1x00_ts {int * rtask; int irq_wait; TYPE_1__* ucb; int irq_lock; scalar_t__ irq_disabled; } ;
struct TYPE_5__ {scalar_t__ irq_base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct ucb1x00_ts*) ;
 int FUNC_16 (struct ucb1x00_ts*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_17 (struct ucb1x00_ts*) ;
 scalar_t__ FUNC_18 (struct ucb1x00_ts*) ;
 unsigned int FUNC_19 (struct ucb1x00_ts*) ;
 unsigned int FUNC_20 (struct ucb1x00_ts*) ;
 unsigned int FUNC_21 (struct ucb1x00_ts*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_22(void *VAR_6)
{
 struct ucb1x00_ts *VAR_7 = VAR_6;
 FUNC_0(VAR_5, VAR_4);
 bool VAR_8, VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_8();
 FUNC_1(&VAR_7->irq_wait, &VAR_5);
 while (!FUNC_3(&VAR_8)) {
  unsigned int VAR_11, VAR_12, VAR_13;
  signed long VAR_14;

  if (VAR_8)
   VAR_9 = 1;

  FUNC_12(VAR_7->ucb);

  VAR_11 = FUNC_20(VAR_7);
  VAR_12 = FUNC_21(VAR_7);
  VAR_13 = FUNC_19(VAR_7);




  FUNC_17(VAR_7);
  FUNC_11(VAR_7->ucb);

  FUNC_4(10);

  FUNC_14(VAR_7->ucb);


  if (FUNC_18(VAR_7)) {
   FUNC_7(VAR_2);

   FUNC_9(&VAR_7->irq_lock);
   if (VAR_7->irq_disabled) {
    VAR_7->irq_disabled = 0;
    FUNC_2(VAR_7->ucb->irq_base + VAR_3);
   }
   FUNC_10(&VAR_7->irq_lock);
   FUNC_13(VAR_7->ucb);





   if (VAR_10) {
    FUNC_15(VAR_7);
    VAR_10 = 0;
   }

   VAR_14 = VAR_1;
  } else {
   FUNC_13(VAR_7->ucb);






   if (!VAR_9) {
    FUNC_16(VAR_7, VAR_13, VAR_11, VAR_12);
    VAR_10 = 1;
   }

   FUNC_7(VAR_2);
   VAR_14 = VAR_0 / 100;
  }

  FUNC_6(VAR_14);
 }

 FUNC_5(&VAR_7->irq_wait, &VAR_5);

 VAR_7->rtask = ((void*)0);
 return 0;
}
