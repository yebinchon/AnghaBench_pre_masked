
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp {int sreg; int ireg; int flags; scalar_t__ rev; scalar_t__ select_state; scalar_t__ event; int sreg2; scalar_t__ active_cmd; int host; void* seqreg; int * eh_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (struct esp*) ;
 int FUNC_5 (char*,int,void*,int,int) ;
 int FUNC_6 (struct esp*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct esp*) ;
 int FUNC_9 (struct esp*) ;
 int FUNC_10 (struct esp*) ;
 int FUNC_11 (struct esp*) ;
 int FUNC_12 (int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_13(struct esp *VAR_20)
{
 int VAR_21, VAR_22;
 u8 VAR_23;




 VAR_20->sreg = FUNC_7(VAR_15);
 VAR_20->seqreg = FUNC_7(VAR_12);
 VAR_20->ireg = FUNC_7(VAR_5);

 if (VAR_20->flags & VAR_4) {
  VAR_21 = 1;
 } else {
  if (FUNC_1(VAR_20))
   return;

  VAR_21 = FUNC_2(VAR_20);
  if (VAR_21 < 0)
   return;
 }

 if (VAR_20->ireg & VAR_10)
  VAR_21 = 1;

 if (VAR_21) {
  FUNC_9(VAR_20);
  if (VAR_20->eh_reset) {
   FUNC_0(VAR_20->eh_reset);
   VAR_20->eh_reset = ((void*)0);
  }
  return;
 }

 VAR_23 = (VAR_20->sreg & VAR_17);
 if (VAR_20->rev == VAR_18) {
  if (((VAR_23 != VAR_0 && VAR_23 != VAR_1) &&
       VAR_20->select_state == VAR_11 &&
       VAR_20->event != VAR_3 &&
       VAR_20->event != VAR_2) ||
      (VAR_20->ireg & VAR_7)) {
   VAR_20->sreg2 = FUNC_7(VAR_16);
   if (!(VAR_20->sreg2 & VAR_14) ||
       (VAR_20->sreg2 & VAR_13))
    FUNC_11(VAR_20);
  }
 }

 FUNC_5("intr sreg[%02x] seqreg[%02x] "
       "sreg2[%02x] ireg[%02x]\n",
       VAR_20->sreg, VAR_20->seqreg, VAR_20->sreg2, VAR_20->ireg);

 VAR_22 = 0;

 if (VAR_20->ireg & (VAR_8 | VAR_9 | VAR_6)) {
  FUNC_12(VAR_19, VAR_20->host,
        "unexpected IREG %02x\n", VAR_20->ireg);
  if (VAR_20->ireg & VAR_6)
   FUNC_3(VAR_20);

  FUNC_10(VAR_20);
 } else {
  if (VAR_20->ireg & VAR_7) {
   if (VAR_20->active_cmd)
    (void) FUNC_4(VAR_20);
   VAR_22 = FUNC_8(VAR_20);
  } else {

   if (VAR_20->select_state != VAR_11)
    VAR_22 = FUNC_4(VAR_20);
  }
 }
 while (!VAR_22)
  VAR_22 = FUNC_6(VAR_20);
}
