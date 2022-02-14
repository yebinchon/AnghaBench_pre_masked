
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_wait; int fasync; int flow_stopped; scalar_t__ stopped; struct n_tty_data* disc_data; } ;
struct n_tty_data {int lnext; size_t canon_head; size_t read_head; int read_flags; scalar_t__ icanon; } ;


 unsigned char FUNC_0 (struct tty_struct*) ;
 unsigned char FUNC_1 (struct tty_struct*) ;
 unsigned char FUNC_2 (struct tty_struct*) ;
 int VAR_0 ;
 unsigned char FUNC_3 (struct tty_struct*) ;
 unsigned char FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_struct*) ;
 unsigned char FUNC_11 (struct tty_struct*) ;
 unsigned char FUNC_12 (struct tty_struct*) ;
 scalar_t__ FUNC_13 (struct tty_struct*) ;
 scalar_t__ FUNC_14 (struct tty_struct*) ;
 scalar_t__ FUNC_15 (struct tty_struct*) ;
 scalar_t__ FUNC_16 (struct tty_struct*) ;
 scalar_t__ FUNC_17 (struct tty_struct*) ;
 scalar_t__ FUNC_18 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_19 (struct tty_struct*) ;
 unsigned char FUNC_20 (struct tty_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char FUNC_21 (struct tty_struct*) ;
 unsigned char FUNC_22 (struct tty_struct*) ;
 unsigned char FUNC_23 (struct tty_struct*) ;
 unsigned char FUNC_24 (struct tty_struct*) ;
 unsigned char VAR_7 ;
 int FUNC_25 (struct tty_struct*) ;
 int FUNC_26 (unsigned char,struct tty_struct*) ;
 int FUNC_27 (char,struct n_tty_data*) ;
 int FUNC_28 (struct n_tty_data*) ;
 int FUNC_29 (unsigned char,struct tty_struct*) ;
 int FUNC_30 (struct n_tty_data*) ;
 int FUNC_31 (int *,int ,int ) ;
 int FUNC_32 (struct tty_struct*,int ,unsigned char) ;
 int FUNC_33 (struct tty_struct*) ;
 int FUNC_34 (unsigned char,struct n_tty_data*) ;
 unsigned char FUNC_35 (struct n_tty_data*,size_t) ;
 int FUNC_36 (int,int ) ;
 int FUNC_37 (scalar_t__*,int) ;
 int FUNC_38 (struct tty_struct*) ;
 int FUNC_39 (struct tty_struct*) ;
 int FUNC_40 (int *,int ) ;

__attribute__((used)) static int
FUNC_41(struct tty_struct *VAR_8, unsigned char VAR_9)
{
 struct n_tty_data *VAR_10 = VAR_8->disc_data;

 if (FUNC_9(VAR_8)) {
  if (VAR_9 == FUNC_21(VAR_8)) {
   FUNC_38(VAR_8);
   FUNC_33(VAR_8);
   return 0;
  }
  if (VAR_9 == FUNC_22(VAR_8)) {
   FUNC_39(VAR_8);
   return 0;
  }
 }

 if (FUNC_17(VAR_8)) {
  if (VAR_9 == FUNC_4(VAR_8)) {
   FUNC_32(VAR_8, VAR_3, VAR_9);
   return 0;
  } else if (VAR_9 == FUNC_19(VAR_8)) {
   FUNC_32(VAR_8, VAR_5, VAR_9);
   return 0;
  } else if (VAR_9 == FUNC_23(VAR_8)) {
   FUNC_32(VAR_8, VAR_6, VAR_9);
   return 0;
  }
 }

 if (VAR_8->stopped && !VAR_8->flow_stopped && FUNC_9(VAR_8) && FUNC_8(VAR_8)) {
  FUNC_38(VAR_8);
  FUNC_33(VAR_8);
 }

 if (VAR_9 == '\r') {
  if (FUNC_6(VAR_8))
   return 0;
  if (FUNC_5(VAR_8))
   VAR_9 = '\n';
 } else if (VAR_9 == '\n' && FUNC_7(VAR_8))
  VAR_9 = '\r';

 if (VAR_10->icanon) {
  if (VAR_9 == FUNC_3(VAR_8) || VAR_9 == FUNC_11(VAR_8) ||
      (VAR_9 == FUNC_24(VAR_8) && FUNC_16(VAR_8))) {
   FUNC_29(VAR_9, VAR_8);
   FUNC_25(VAR_8);
   return 0;
  }
  if (VAR_9 == FUNC_12(VAR_8) && FUNC_16(VAR_8)) {
   VAR_10->lnext = 1;
   if (FUNC_13(VAR_8)) {
    FUNC_30(VAR_10);
    if (FUNC_14(VAR_8)) {
     FUNC_27('^', VAR_10);
     FUNC_27('\b', VAR_10);
     FUNC_25(VAR_8);
    }
   }
   return 1;
  }
  if (VAR_9 == FUNC_20(VAR_8) && FUNC_13(VAR_8) && FUNC_16(VAR_8)) {
   size_t VAR_11 = VAR_10->canon_head;

   FUNC_30(VAR_10);
   FUNC_26(VAR_9, VAR_8);
   FUNC_27('\n', VAR_10);
   while (FUNC_18(VAR_11) != FUNC_18(VAR_10->read_head)) {
    FUNC_26(FUNC_35(VAR_10, VAR_11), VAR_8);
    VAR_11++;
   }
   FUNC_25(VAR_8);
   return 0;
  }
  if (VAR_9 == '\n') {
   if (FUNC_13(VAR_8) || FUNC_15(VAR_8)) {
    FUNC_27('\n', VAR_10);
    FUNC_25(VAR_8);
   }
   goto handle_newline;
  }
  if (VAR_9 == FUNC_0(VAR_8)) {
   VAR_9 = VAR_7;
   goto handle_newline;
  }
  if ((VAR_9 == FUNC_2(VAR_8)) ||
      (VAR_9 == FUNC_1(VAR_8) && FUNC_16(VAR_8))) {



   if (FUNC_13(VAR_8)) {

    if (VAR_10->canon_head == VAR_10->read_head)
     FUNC_28(VAR_10);
    FUNC_26(VAR_9, VAR_8);
    FUNC_25(VAR_8);
   }




   if (VAR_9 == (unsigned char) '\377' && FUNC_10(VAR_8))
    FUNC_34(VAR_9, VAR_10);

handle_newline:
   FUNC_36(VAR_10->read_head & (VAR_1 - 1), VAR_10->read_flags);
   FUNC_34(VAR_9, VAR_10);
   FUNC_37(&VAR_10->canon_head, VAR_10->read_head);
   FUNC_31(&VAR_8->fasync, VAR_4, VAR_2);
   FUNC_40(&VAR_8->read_wait, VAR_0);
   return 0;
  }
 }

 if (FUNC_13(VAR_8)) {
  FUNC_30(VAR_10);
  if (VAR_9 == '\n')
   FUNC_27('\n', VAR_10);
  else {

   if (VAR_10->canon_head == VAR_10->read_head)
    FUNC_28(VAR_10);
   FUNC_26(VAR_9, VAR_8);
  }
  FUNC_25(VAR_8);
 }


 if (VAR_9 == (unsigned char) '\377' && FUNC_10(VAR_8))
  FUNC_34(VAR_9, VAR_10);

 FUNC_34(VAR_9, VAR_10);
 return 0;
}
