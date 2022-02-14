
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct spk_synth {int (* flush ) (struct spk_synth*) ;} ;
struct TYPE_6__ {int spinlock; scalar_t__ flushing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct var_t* FUNC_8 (int ) ;
 int FUNC_9 (struct spk_synth*) ;
 scalar_t__ FUNC_10 () ;
 char FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int VAR_10 ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (int,unsigned long) ;

__attribute__((used)) static void FUNC_16(struct spk_synth *VAR_11)
{
 u_char VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 struct var_t *VAR_16;
 struct var_t *VAR_17;
 struct var_t *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_16 = FUNC_8(VAR_2);
 VAR_17 = FUNC_8(VAR_0);
 VAR_18 = FUNC_8(VAR_1);
 FUNC_6(&VAR_9.spinlock, VAR_14);
 VAR_21 = VAR_16->u.n.value;
 FUNC_7(&VAR_9.spinlock, VAR_14);

 VAR_15 = VAR_8 + VAR_21;
 while (!FUNC_0()) {
  FUNC_6(&VAR_9.spinlock, VAR_14);
  if (VAR_9.flushing) {
   VAR_9.flushing = 0;
   FUNC_7(&VAR_9.spinlock, VAR_14);
   VAR_11->flush(VAR_11);
   continue;
  }
  FUNC_12();
  if (FUNC_10()) {
   FUNC_7(&VAR_9.spinlock, VAR_14);
   break;
  }
  FUNC_5(VAR_6);
  VAR_20 = VAR_18->u.n.value;
  FUNC_7(&VAR_9.spinlock, VAR_14);
  if (FUNC_13()) {
   FUNC_4(FUNC_1(VAR_20));
   continue;
  }
  FUNC_5(VAR_7);
  VAR_13 = 1000;
  while (FUNC_14())
   if (--VAR_13 <= 0)
    break;
  if (VAR_13 <= 0) {
   FUNC_2();
   break;
  }
  FUNC_6(&VAR_9.spinlock, VAR_14);
  VAR_12 = FUNC_11();
  FUNC_7(&VAR_9.spinlock, VAR_14);
  if (VAR_12 == '\n')
   VAR_12 = VAR_3;
  FUNC_3(VAR_12, VAR_10);
  VAR_5;
  if (FUNC_15(VAR_8, VAR_15) && (VAR_12 == VAR_4)) {
   VAR_13 = 1000;
   while (FUNC_14())
    if (--VAR_13 <= 0)
     break;
   if (VAR_13 <= 0) {
    FUNC_2();
    break;
   }
   FUNC_3(VAR_3, VAR_10);
   FUNC_6(&VAR_9.spinlock, VAR_14);
   VAR_21 = VAR_16->u.n.value;
   VAR_19 = VAR_17->u.n.value;
   FUNC_7(&VAR_9.spinlock, VAR_14);
   FUNC_4(FUNC_1(VAR_19));
   VAR_15 = VAR_8 + VAR_21;
  }
 }
 VAR_13 = 1000;
 while (FUNC_14())
  if (--VAR_13 <= 0)
   break;
 if (VAR_13 <= 0)
  FUNC_2();
 else
  FUNC_3(VAR_3, VAR_10);
}
