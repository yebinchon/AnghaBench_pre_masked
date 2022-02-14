
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
struct TYPE_6__ {int port_tts; int spinlock; scalar_t__ flushing; } ;


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
 int FUNC_2 (char,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct var_t* FUNC_7 (int ) ;
 int FUNC_8 (struct spk_synth*) ;
 scalar_t__ FUNC_9 () ;
 char FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int,unsigned long) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct spk_synth *VAR_10)
{
 u_char VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct var_t *VAR_18;
 struct var_t *VAR_19;
 struct var_t *VAR_20;

 VAR_20 = FUNC_7(VAR_2);
 VAR_18 = FUNC_7(VAR_0);
 VAR_19 = FUNC_7(VAR_1);

 FUNC_5(&VAR_9.spinlock, VAR_12);
 VAR_16 = VAR_20->u.n.value;
 FUNC_6(&VAR_9.spinlock, VAR_12);

 VAR_13 = VAR_8 + VAR_16;
 while (!FUNC_0()) {
  FUNC_5(&VAR_9.spinlock, VAR_12);
  if (VAR_9.flushing) {
   VAR_9.flushing = 0;
   FUNC_6(&VAR_9.spinlock, VAR_12);
   VAR_10->flush(VAR_10);
   continue;
  }
  FUNC_11();
  if (FUNC_9()) {
   FUNC_6(&VAR_9.spinlock, VAR_12);
   break;
  }
  FUNC_4(VAR_6);
  VAR_17 = VAR_19->u.n.value;
  FUNC_6(&VAR_9.spinlock, VAR_12);
  if (FUNC_12()) {
   FUNC_3(FUNC_1(VAR_17));
   continue;
  }
  FUNC_4(VAR_7);
  VAR_14 = VAR_5;
  while (FUNC_13()) {
   if (!--VAR_14)
    break;
   FUNC_15(1);
  }
  FUNC_5(&VAR_9.spinlock, VAR_12);
  VAR_11 = FUNC_10();
  FUNC_6(&VAR_9.spinlock, VAR_12);
  if (VAR_11 == '\n')
   VAR_11 = VAR_3;
  FUNC_2(VAR_11, VAR_9.port_tts);
  if (FUNC_14(VAR_8, VAR_13) && VAR_11 == VAR_4) {
   VAR_14 = VAR_5;
   while (FUNC_13()) {
    if (!--VAR_14)
     break;
    FUNC_15(1);
   }
   FUNC_2(VAR_3, VAR_9.port_tts);
   FUNC_5(&VAR_9.spinlock, VAR_12);
   VAR_16 = VAR_20->u.n.value;
   VAR_15 = VAR_18->u.n.value;
   FUNC_6(&VAR_9.spinlock, VAR_12);
   FUNC_3(FUNC_1(VAR_15));
   VAR_13 = VAR_8 + VAR_16;
  }
 }
 VAR_14 = VAR_5;
 while (FUNC_13()) {
  if (!--VAR_14)
   break;
  FUNC_15(1);
 }
 FUNC_2(VAR_3, VAR_9.port_tts);
}
