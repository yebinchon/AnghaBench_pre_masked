
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
 scalar_t__ FUNC_0 (char) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_8 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct var_t* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char) ;
 int FUNC_9 (struct spk_synth*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 char FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct spk_synth *VAR_9)
{
 u_char VAR_10;
 static u_char VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 struct var_t *VAR_14;
 struct var_t *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = FUNC_7(VAR_1);
 VAR_15 = FUNC_7(VAR_0);
 FUNC_5(&VAR_8.spinlock, VAR_12);
 VAR_16 = VAR_14->u.n.value;
 FUNC_6(&VAR_8.spinlock, VAR_12);
 VAR_13 = VAR_7 + VAR_16;

 while (!FUNC_1()) {
  FUNC_5(&VAR_8.spinlock, VAR_12);
  if (VAR_8.flushing) {
   VAR_8.flushing = 0;
   FUNC_6(&VAR_8.spinlock, VAR_12);
   VAR_9->flush(VAR_9);
   continue;
  }
  FUNC_13();
  if (FUNC_10()) {
   FUNC_6(&VAR_8.spinlock, VAR_12);
   break;
  }
  VAR_10 = FUNC_12();
  FUNC_4(VAR_4);
  VAR_17 = VAR_15->u.n.value;
  FUNC_6(&VAR_8.spinlock, VAR_12);
  if (VAR_10 == '\n')
   VAR_10 = 0x0D;
  if (FUNC_0(VAR_10)) {
   FUNC_3(FUNC_2(VAR_17));
   continue;
  }
  FUNC_4(VAR_5);
  FUNC_5(&VAR_8.spinlock, VAR_12);
  FUNC_11();
  FUNC_6(&VAR_8.spinlock, VAR_12);
  if (VAR_10 == '[') {
   VAR_6 = 1;
  } else if (VAR_10 == ']') {
   VAR_6 = 0;
  } else if (VAR_10 <= VAR_3) {
   if (!VAR_6 && FUNC_8(",.!?;:", VAR_11))
    FUNC_0(VAR_2);
   if (FUNC_14(VAR_7, VAR_13)) {
    if (!VAR_6)
     FUNC_0(VAR_2);
    FUNC_5(&VAR_8.spinlock,
        VAR_12);
    VAR_16 = VAR_14->u.n.value;
    VAR_17 = VAR_15->u.n.value;
    FUNC_6(&VAR_8.spinlock,
             VAR_12);
    FUNC_3(FUNC_2
       (VAR_17));
    VAR_13 = VAR_7 + VAR_16;
   }
  }
  VAR_11 = VAR_10;
  VAR_10 = 0;
 }
 if (!VAR_6)
  FUNC_0(VAR_2);
}
