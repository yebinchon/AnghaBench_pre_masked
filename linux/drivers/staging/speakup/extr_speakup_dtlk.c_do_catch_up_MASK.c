
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
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_7 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct var_t* FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 int FUNC_8 (struct spk_synth*) ;
 scalar_t__ FUNC_9 () ;
 char FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (int,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct spk_synth *VAR_8)
{
 u_char VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 struct var_t *VAR_12;
 struct var_t *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_6(VAR_1);
 VAR_13 = FUNC_6(VAR_0);
 FUNC_4(&VAR_7.spinlock, VAR_10);
 VAR_14 = VAR_12->u.n.value;
 FUNC_5(&VAR_7.spinlock, VAR_10);
 VAR_11 = VAR_6 + VAR_14;
 while (!FUNC_0()) {
  FUNC_4(&VAR_7.spinlock, VAR_10);
  if (VAR_7.flushing) {
   VAR_7.flushing = 0;
   FUNC_5(&VAR_7.spinlock, VAR_10);
   VAR_8->flush(VAR_8);
   continue;
  }
  FUNC_11();
  if (FUNC_9()) {
   FUNC_5(&VAR_7.spinlock, VAR_10);
   break;
  }
  FUNC_3(VAR_4);
  VAR_15 = VAR_13->u.n.value;
  FUNC_5(&VAR_7.spinlock, VAR_10);
  if (FUNC_12()) {
   FUNC_2(FUNC_1(VAR_15));
   continue;
  }
  FUNC_3(VAR_5);
  FUNC_4(&VAR_7.spinlock, VAR_10);
  VAR_9 = FUNC_10();
  FUNC_5(&VAR_7.spinlock, VAR_10);
  if (VAR_9 == '\n')
   VAR_9 = VAR_2;
  FUNC_7(VAR_9);
  if (FUNC_13(VAR_6, VAR_11) && (VAR_9 == VAR_3)) {
   FUNC_7(VAR_2);
   FUNC_4(&VAR_7.spinlock, VAR_10);
   VAR_15 = VAR_13->u.n.value;
   VAR_14 = VAR_12->u.n.value;
   FUNC_5(&VAR_7.spinlock, VAR_10);
   FUNC_2(FUNC_1(VAR_15));
   VAR_11 = VAR_6 + VAR_14;
  }
 }
 FUNC_7(VAR_2);
}
