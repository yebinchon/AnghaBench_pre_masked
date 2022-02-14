
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct spk_synth {scalar_t__ procspeech; TYPE_3__* io_ops; int (* flush ) (struct spk_synth*) ;} ;
struct TYPE_8__ {int spinlock; scalar_t__ flushing; } ;
struct TYPE_7__ {scalar_t__ (* synth_out ) (struct spk_synth*,scalar_t__) ;int (* tiocmset ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_9 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct var_t* FUNC_6 (int ) ;
 int FUNC_7 (struct spk_synth*) ;
 scalar_t__ FUNC_8 (struct spk_synth*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (struct spk_synth*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct spk_synth*,scalar_t__) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int,unsigned long) ;

__attribute__((used)) static void FUNC_18(struct spk_synth *VAR_10)
{
 u_char VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 struct var_t *VAR_14;
 struct var_t *VAR_15;
 struct var_t *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;

 VAR_14 = FUNC_6(VAR_2);
 VAR_15 = FUNC_6(VAR_0);
 VAR_16 = FUNC_6(VAR_1);
 FUNC_4(&VAR_9.spinlock, VAR_12);
 VAR_19 = VAR_14->u.n.value;
 FUNC_5(&VAR_9.spinlock, VAR_12);
 VAR_13 = VAR_8 + VAR_19;

 while (!FUNC_0()) {
  FUNC_4(&VAR_9.spinlock, VAR_12);
  VAR_19 = VAR_14->u.n.value;
  VAR_17 = VAR_16->u.n.value;
  VAR_18 = VAR_15->u.n.value;
  if (VAR_9.flushing) {
   VAR_9.flushing = 0;
   FUNC_5(&VAR_9.spinlock, VAR_12);
   VAR_10->flush(VAR_10);
   continue;
  }
  FUNC_16();
  if (FUNC_13()) {
   FUNC_5(&VAR_9.spinlock, VAR_12);
   break;
  }
  VAR_11 = FUNC_15();
  FUNC_3(VAR_5);
  VAR_17 = VAR_16->u.n.value;
  FUNC_5(&VAR_9.spinlock, VAR_12);
  if (!VAR_10->io_ops->synth_out(VAR_10, VAR_11)) {
   VAR_10->io_ops->tiocmset(0, VAR_7);
   VAR_10->io_ops->tiocmset(VAR_7, 0);
   FUNC_2(FUNC_1(VAR_17));
   continue;
  }
  if (FUNC_17(VAR_8, VAR_13) && (VAR_11 == VAR_4)) {
   FUNC_4(&VAR_9.spinlock, VAR_12);
   VAR_19 = VAR_14->u.n.value;
   VAR_17 = VAR_16->u.n.value;
   VAR_18 = VAR_15->u.n.value;
   FUNC_5(&VAR_9.spinlock, VAR_12);
   if (VAR_10->io_ops->synth_out(VAR_10, VAR_10->procspeech))
    FUNC_2(FUNC_1
       (VAR_18));
   else
    FUNC_2(FUNC_1
       (VAR_17));
   VAR_13 = VAR_8 + VAR_19;
  }
  FUNC_3(VAR_6);
  FUNC_4(&VAR_9.spinlock, VAR_12);
  FUNC_14();
  FUNC_5(&VAR_9.spinlock, VAR_12);
 }
 VAR_10->io_ops->synth_out(VAR_10, VAR_3);
}
