
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {size_t echo_tail; size_t echo_commit; unsigned int canon_column; unsigned int column; } ;


 size_t VAR_0 ;




 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (unsigned char,struct tty_struct*,int) ;
 int const FUNC_3 (struct n_tty_data*,size_t) ;
 int FUNC_4 (struct tty_struct*,unsigned char const) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static size_t FUNC_6(struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;
 int VAR_3, VAR_4;
 size_t VAR_5;
 unsigned char VAR_6;

 VAR_4 = VAR_3 = FUNC_5(VAR_1);

 VAR_5 = VAR_2->echo_tail;
 while (FUNC_0(VAR_2->echo_commit) != FUNC_0(VAR_5)) {
  VAR_6 = FUNC_3(VAR_2, VAR_5);
  if (VAR_6 == 128) {
   unsigned char VAR_7;
   int VAR_8 = 0;






   if (FUNC_0(VAR_2->echo_commit) == FUNC_0(VAR_5 + 1))
    goto not_yet_stored;





   VAR_7 = FUNC_3(VAR_2, VAR_5 + 1);

   switch (VAR_7) {
    unsigned int VAR_9, VAR_10;

   case 131:
    if (FUNC_0(VAR_2->echo_commit) == FUNC_0(VAR_5 + 2))
     goto not_yet_stored;
    VAR_9 = FUNC_3(VAR_2, VAR_5 + 2);
    if (!(VAR_9 & 0x80))
     VAR_9 += VAR_2->canon_column;
    VAR_10 = 8 - (VAR_9 & 7);

    if (VAR_10 > VAR_3) {
     VAR_8 = 1;
     break;
    }
    VAR_3 -= VAR_10;
    while (VAR_10--) {
     FUNC_4(VAR_1, '\b');
     if (VAR_2->column > 0)
      VAR_2->column--;
    }
    VAR_5 += 3;
    break;

   case 129:
    VAR_2->canon_column = VAR_2->column;
    VAR_5 += 2;
    break;

   case 130:
    if (VAR_2->column > 0)
     VAR_2->column--;
    VAR_5 += 2;
    break;

   case 128:

    if (!VAR_3) {
     VAR_8 = 1;
     break;
    }
    FUNC_4(VAR_1, 128);
    VAR_2->column++;
    VAR_3--;
    VAR_5 += 2;
    break;

   default:
    if (VAR_3 < 2) {
     VAR_8 = 1;
     break;
    }
    FUNC_4(VAR_1, '^');
    FUNC_4(VAR_1, VAR_7 ^ 0100);
    VAR_2->column += 2;
    VAR_3 -= 2;
    VAR_5 += 2;
   }

   if (VAR_8)
    break;
  } else {
   if (FUNC_1(VAR_1)) {
    int VAR_11 = FUNC_2(VAR_6, VAR_1, VAR_3);
    if (VAR_11 < 0)
     break;
    VAR_3 -= VAR_11;
   } else {
    if (!VAR_3)
     break;
    FUNC_4(VAR_1, VAR_6);
    VAR_3 -= 1;
   }
   VAR_5 += 1;
  }
 }




 while (VAR_2->echo_commit > VAR_5 &&
        VAR_2->echo_commit - VAR_5 >= VAR_0) {
  if (FUNC_3(VAR_2, VAR_5) == 128) {
   if (FUNC_3(VAR_2, VAR_5 + 1) == 131)
    VAR_5 += 3;
   else
    VAR_5 += 2;
  } else
   VAR_5++;
 }

 not_yet_stored:
 VAR_2->echo_tail = VAR_5;
 return VAR_4 - VAR_3;
}
