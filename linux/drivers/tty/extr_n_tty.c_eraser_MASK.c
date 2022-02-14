
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {size_t read_head; size_t canon_head; int erasing; } ;


 unsigned char FUNC_0 (struct tty_struct*) ;
 unsigned char FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (size_t) ;
 unsigned char FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (unsigned char,struct tty_struct*) ;
 int FUNC_11 (char,struct n_tty_data*) ;
 int FUNC_12 (unsigned int,int,struct n_tty_data*) ;
 int FUNC_13 (struct n_tty_data*) ;
 int FUNC_14 (struct n_tty_data*) ;
 scalar_t__ FUNC_15 (unsigned char,struct tty_struct*) ;
 scalar_t__ FUNC_16 (unsigned char) ;
 scalar_t__ FUNC_17 (unsigned char) ;
 char FUNC_18 (struct n_tty_data*,size_t) ;

__attribute__((used)) static void FUNC_19(unsigned char VAR_0, struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;
 enum { ERASE, WERASE, KILL } VAR_3;
 size_t VAR_4;
 size_t VAR_5;
 int VAR_6;

 if (VAR_2->read_head == VAR_2->canon_head) {

  return;
 }
 if (VAR_0 == FUNC_0(VAR_1))
  VAR_3 = ERASE;
 else if (VAR_0 == FUNC_9(VAR_1))
  VAR_3 = WERASE;
 else {
  if (!FUNC_2(VAR_1)) {
   VAR_2->read_head = VAR_2->canon_head;
   return;
  }
  if (!FUNC_5(VAR_1) || !FUNC_6(VAR_1) || !FUNC_4(VAR_1)) {
   VAR_2->read_head = VAR_2->canon_head;
   FUNC_14(VAR_2);
   FUNC_10(FUNC_1(VAR_1), VAR_1);

   if (FUNC_5(VAR_1))
    FUNC_11('\n', VAR_2);
   return;
  }
  VAR_3 = KILL;
 }

 VAR_6 = 0;
 while (FUNC_8(VAR_2->read_head) != FUNC_8(VAR_2->canon_head)) {
  VAR_4 = VAR_2->read_head;


  do {
   VAR_4--;
   VAR_0 = FUNC_18(VAR_2, VAR_4);
  } while (FUNC_15(VAR_0, VAR_1) &&
    FUNC_8(VAR_4) != FUNC_8(VAR_2->canon_head));


  if (FUNC_15(VAR_0, VAR_1))
   break;

  if (VAR_3 == WERASE) {

   if (FUNC_16(VAR_0) || VAR_0 == '_')
    VAR_6++;
   else if (VAR_6)
    break;
  }
  VAR_5 = VAR_2->read_head - VAR_4;
  VAR_2->read_head = VAR_4;
  if (FUNC_2(VAR_1)) {
   if (FUNC_7(VAR_1)) {
    if (!VAR_2->erasing) {
     FUNC_11('\\', VAR_2);
     VAR_2->erasing = 1;
    }

    FUNC_10(VAR_0, VAR_1);
    while (--VAR_5 > 0) {
     VAR_4++;
     FUNC_11(FUNC_18(VAR_2, VAR_4), VAR_2);
     FUNC_13(VAR_2);
    }
   } else if (VAR_3 == ERASE && !FUNC_4(VAR_1)) {
    FUNC_10(FUNC_0(VAR_1), VAR_1);
   } else if (VAR_0 == '\t') {
    unsigned int VAR_7 = 0;
    int VAR_8 = 0;
    size_t VAR_9 = VAR_2->read_head;
    while (FUNC_8(VAR_9) != FUNC_8(VAR_2->canon_head)) {
     VAR_9--;
     VAR_0 = FUNC_18(VAR_2, VAR_9);
     if (VAR_0 == '\t') {
      VAR_8 = 1;
      break;
     } else if (FUNC_17(VAR_0)) {
      if (FUNC_3(VAR_1))
       VAR_7 += 2;
     } else if (!FUNC_15(VAR_0, VAR_1)) {
      VAR_7++;
     }
    }
    FUNC_12(VAR_7, VAR_8, VAR_2);
   } else {
    if (FUNC_17(VAR_0) && FUNC_3(VAR_1)) {
     FUNC_11('\b', VAR_2);
     FUNC_11(' ', VAR_2);
     FUNC_11('\b', VAR_2);
    }
    if (!FUNC_17(VAR_0) || FUNC_3(VAR_1)) {
     FUNC_11('\b', VAR_2);
     FUNC_11(' ', VAR_2);
     FUNC_11('\b', VAR_2);
    }
   }
  }
  if (VAR_3 == ERASE)
   break;
 }
 if (VAR_2->read_head == VAR_2->canon_head && FUNC_2(VAR_1))
  FUNC_14(VAR_2);
}
