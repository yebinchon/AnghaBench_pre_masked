
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct spk_synth {TYPE_3__* io_ops; int (* flush ) (struct spk_synth*) ;} ;
struct TYPE_8__ {int spinlock; scalar_t__ flushing; } ;
struct TYPE_7__ {int (* synth_out ) (struct spk_synth*,char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct var_t* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (struct spk_synth*) ;
 int FUNC_9 (struct spk_synth*,char) ;
 int FUNC_10 (struct spk_synth*,char) ;
 int FUNC_11 (struct spk_synth*,char) ;
 int FUNC_12 (struct spk_synth*,char) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 char FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (int,unsigned long) ;

__attribute__((used)) static void FUNC_19(struct spk_synth *VAR_9)
{
 u_char VAR_10;
 static u_char VAR_11 = '\0';
 unsigned long VAR_12;
 unsigned long VAR_13;
 struct var_t *VAR_14;
 struct var_t *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 VAR_14 = FUNC_6(VAR_1);
 VAR_15 = FUNC_6(VAR_0);

 FUNC_4(&VAR_8.spinlock, VAR_12);
 VAR_16 = VAR_14->u.n.value;
 FUNC_5(&VAR_8.spinlock, VAR_12);
 VAR_13 = VAR_7 + VAR_16;

 while (!FUNC_0()) {
  FUNC_4(&VAR_8.spinlock, VAR_12);
  if (VAR_8.flushing) {
   VAR_8.flushing = 0;
   FUNC_5(&VAR_8.spinlock, VAR_12);
   VAR_9->flush(VAR_9);
   continue;
  }
  FUNC_16();
  if (FUNC_13()) {
   FUNC_5(&VAR_8.spinlock, VAR_12);
   break;
  }
  VAR_10 = FUNC_15();
  FUNC_3(VAR_4);
  VAR_17 = VAR_15->u.n.value;
  FUNC_5(&VAR_8.spinlock, VAR_12);
  if (VAR_10 == '\n')
   VAR_10 = 0x0D;
  if (FUNC_17() || !VAR_9->io_ops->synth_out(VAR_9, VAR_10)) {
   FUNC_2(FUNC_1(VAR_17));
   continue;
  }
  FUNC_3(VAR_5);
  FUNC_4(&VAR_8.spinlock, VAR_12);
  FUNC_14();
  FUNC_5(&VAR_8.spinlock, VAR_12);
  if (VAR_10 == '[') {
   VAR_6 = 1;
  } else if (VAR_10 == ']') {
   VAR_6 = 0;
  } else if (VAR_10 <= VAR_3) {
   if (!VAR_6 && FUNC_7(",.!?;:", VAR_11))
    VAR_9->io_ops->synth_out(VAR_9, VAR_2);
   if (FUNC_18(VAR_7, VAR_13)) {
    if (!VAR_6)
     VAR_9->io_ops->synth_out(VAR_9,
         VAR_2);
    FUNC_4(&VAR_8.spinlock,
        VAR_12);
    VAR_16 = VAR_14->u.n.value;
    VAR_17 = VAR_15->u.n.value;
    FUNC_5(&VAR_8.spinlock,
             VAR_12);
    FUNC_2(FUNC_1
       (VAR_17));
    VAR_13 = VAR_7 + VAR_16;
   }
  }
  VAR_11 = VAR_10;
 }
 if (!VAR_6)
  VAR_9->io_ops->synth_out(VAR_9, VAR_2);
}
