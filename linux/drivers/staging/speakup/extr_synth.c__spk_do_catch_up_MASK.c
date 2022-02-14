
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u16 ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct spk_synth {char procspeech; TYPE_3__* io_ops; int (* flush ) (struct spk_synth*) ;} ;
struct TYPE_8__ {int spinlock; scalar_t__ flushing; } ;
struct TYPE_7__ {int (* synth_out_unicode ) (struct spk_synth*,char) ;int (* synth_out ) (struct spk_synth*,char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_7 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct var_t* FUNC_6 (int ) ;
 int FUNC_7 (struct spk_synth*) ;
 int FUNC_8 (struct spk_synth*,char) ;
 int FUNC_9 (struct spk_synth*,char) ;
 int FUNC_10 (struct spk_synth*,char) ;
 int FUNC_11 (struct spk_synth*,char) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 char FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int,unsigned long) ;

__attribute__((used)) static void FUNC_17(struct spk_synth *VAR_8, int VAR_9)
{
 u16 VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 struct var_t *VAR_13;
 struct var_t *VAR_14;
 struct var_t *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_6(VAR_2);
 VAR_14 = FUNC_6(VAR_1);
 VAR_13 = FUNC_6(VAR_0);

 FUNC_4(&VAR_7.spinlock, VAR_11);
 VAR_16 = VAR_15->u.n.value;
 FUNC_5(&VAR_7.spinlock, VAR_11);

 VAR_12 = VAR_6 + VAR_16;
 while (!FUNC_0()) {
  FUNC_4(&VAR_7.spinlock, VAR_11);
  if (VAR_7.flushing) {
   VAR_7.flushing = 0;
   FUNC_5(&VAR_7.spinlock, VAR_11);
   VAR_8->flush(VAR_8);
   continue;
  }
  if (!VAR_9)
   FUNC_15();
  if (FUNC_12()) {
   FUNC_5(&VAR_7.spinlock, VAR_11);
   break;
  }
  VAR_10 = FUNC_14();
  FUNC_3(VAR_4);
  VAR_18 = VAR_14->u.n.value;
  FUNC_5(&VAR_7.spinlock, VAR_11);
  if (VAR_10 == '\n')
   VAR_10 = VAR_8->procspeech;
  if (VAR_9)
   VAR_19 = VAR_8->io_ops->synth_out_unicode(VAR_8, VAR_10);
  else
   VAR_19 = VAR_8->io_ops->synth_out(VAR_8, VAR_10);
  if (!VAR_19) {
   FUNC_2(FUNC_1(VAR_18));
   continue;
  }
  if (FUNC_16(VAR_6, VAR_12) && (VAR_10 == VAR_3)) {
   FUNC_4(&VAR_7.spinlock, VAR_11);
   VAR_16 = VAR_15->u.n.value;
   VAR_17 = VAR_13->u.n.value;
   VAR_18 = VAR_14->u.n.value;
   FUNC_5(&VAR_7.spinlock, VAR_11);
   if (VAR_8->io_ops->synth_out(VAR_8, VAR_8->procspeech))
    FUNC_2(
     FUNC_1(VAR_17));
   else
    FUNC_2(
     FUNC_1(VAR_18));
   VAR_12 = VAR_6 + VAR_16;
  }
  FUNC_3(VAR_5);
  FUNC_4(&VAR_7.spinlock, VAR_11);
  FUNC_13();
  FUNC_5(&VAR_7.spinlock, VAR_11);
 }
 VAR_8->io_ops->synth_out(VAR_8, VAR_8->procspeech);
}
