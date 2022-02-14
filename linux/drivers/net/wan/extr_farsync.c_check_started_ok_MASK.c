
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ nports; int card_no; void* state; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct fst_card_info*,int ) ;
 scalar_t__ FUNC_1 (struct fst_card_info*,int ) ;
 scalar_t__ FUNC_2 (struct fst_card_info*,int ) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_5(struct fst_card_info *VAR_9)
{
 int VAR_10;


 if (FUNC_2(VAR_9, VAR_7) != VAR_4) {
  FUNC_3("Bad shared memory version %d expected %d\n",
         FUNC_2(VAR_9, VAR_7), VAR_4);
  VAR_9->state = VAR_1;
  return;
 }
 if (FUNC_1(VAR_9, VAR_5) != VAR_0) {
  FUNC_3("Missing shared memory signature\n");
  VAR_9->state = VAR_1;
  return;
 }

 if ((VAR_10 = FUNC_0(VAR_9, VAR_8)) == 0x01) {
  VAR_9->state = VAR_3;
 } else if (VAR_10 == 0xFF) {
  FUNC_3("Firmware initialisation failed. Card halted\n");
  VAR_9->state = VAR_2;
  return;
 } else if (VAR_10 != 0x00) {
  FUNC_3("Unknown firmware status 0x%x\n", VAR_10);
  VAR_9->state = VAR_2;
  return;
 }





 if (FUNC_1(VAR_9, VAR_6) != VAR_9->nports) {
  FUNC_4("Port count mismatch on card %d.  Firmware thinks %d we say %d\n",
   VAR_9->card_no,
   FUNC_1(VAR_9, VAR_6), VAR_9->nports);
 }
}
