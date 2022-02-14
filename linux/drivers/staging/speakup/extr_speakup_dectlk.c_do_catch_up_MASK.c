
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ) ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 TYPE_4__ VAR_11 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct var_t* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int FUNC_11 (struct spk_synth*) ;
 int FUNC_12 (struct spk_synth*,char) ;
 int FUNC_13 (struct spk_synth*,char) ;
 int FUNC_14 (struct spk_synth*,char) ;
 int FUNC_15 (struct spk_synth*,char) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 () ;
 char FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int,unsigned long) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_22(struct spk_synth *VAR_13)
{
 int VAR_14 = 0;
 static u_char VAR_15;
 static u_char VAR_16 = '\0';
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19 = FUNC_3(4000);
 FUNC_0(VAR_12);
 struct var_t *VAR_20;
 struct var_t *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_20 = FUNC_9(VAR_1);
 VAR_21 = FUNC_9(VAR_0);
 FUNC_7(&VAR_11.spinlock, VAR_17);
 VAR_22 = VAR_20->u.n.value;
 FUNC_8(&VAR_11.spinlock, VAR_17);
 VAR_18 = VAR_10 + VAR_22;

 while (!FUNC_2()) {

  FUNC_7(&VAR_7, VAR_17);
  while (VAR_9 && VAR_19) {
   FUNC_4(&VAR_6, &VAR_12, VAR_4);
   FUNC_8(&VAR_7, VAR_17);
   VAR_19 = FUNC_5(VAR_19);
   FUNC_7(&VAR_7, VAR_17);
  }
  FUNC_1(&VAR_6, &VAR_12);
  VAR_9 = 0;
  FUNC_8(&VAR_7, VAR_17);

  FUNC_7(&VAR_11.spinlock, VAR_17);
  if (VAR_11.flushing) {
   VAR_11.flushing = 0;
   FUNC_8(&VAR_11.spinlock, VAR_17);
   VAR_13->flush(VAR_13);
   continue;
  }
  FUNC_19();
  if (FUNC_16()) {
   FUNC_8(&VAR_11.spinlock, VAR_17);
   break;
  }
  VAR_15 = FUNC_18();
  FUNC_6(VAR_4);
  VAR_23 = VAR_21->u.n.value;
  VAR_14 = FUNC_20();
  FUNC_8(&VAR_11.spinlock, VAR_17);
  if (VAR_15 == '\n')
   VAR_15 = 0x0D;
  if (VAR_14 || !VAR_13->io_ops->synth_out(VAR_13, VAR_15)) {
   FUNC_5(FUNC_3(VAR_23));
   continue;
  }
  FUNC_6(VAR_5);
  FUNC_7(&VAR_11.spinlock, VAR_17);
  FUNC_17();
  FUNC_8(&VAR_11.spinlock, VAR_17);
  if (VAR_15 == '[') {
   VAR_8 = 1;
  } else if (VAR_15 == ']') {
   VAR_8 = 0;
  } else if (VAR_15 <= VAR_3) {
   if (!VAR_8 && FUNC_10(",.!?;:", VAR_16))
    VAR_13->io_ops->synth_out(VAR_13, VAR_2);
   if (FUNC_21(VAR_10, VAR_18)) {
    if (!VAR_8)
     VAR_13->io_ops->synth_out(VAR_13,
         VAR_2);
    FUNC_7(&VAR_11.spinlock,
        VAR_17);
    VAR_22 = VAR_20->u.n.value;
    VAR_23 = VAR_21->u.n.value;
    FUNC_8(&VAR_11.spinlock,
             VAR_17);
    FUNC_5(FUNC_3
       (VAR_23));
    VAR_18 = VAR_10 + VAR_22;
   }
  }
  VAR_16 = VAR_15;
 }
 if (!VAR_8)
  VAR_13->io_ops->synth_out(VAR_13, VAR_2);
}
