
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int char_map; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 char VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct tty_struct*,int ,char) ;
 int FUNC_6 (struct tty_struct*,unsigned char) ;
 int FUNC_7 (struct tty_struct*,int ,char) ;
 scalar_t__ FUNC_8 (struct tty_struct*,unsigned char) ;
 int FUNC_9 (unsigned char,struct n_tty_data*) ;
 int FUNC_10 (unsigned char,int ) ;
 unsigned char FUNC_11 (unsigned char) ;

__attribute__((used)) static void
FUNC_12(struct tty_struct *VAR_1, const unsigned char *VAR_2,
     char *VAR_3, int VAR_4)
{
 struct n_tty_data *VAR_5 = VAR_1->disc_data;
 char VAR_6 = VAR_0;

 while (VAR_4--) {
  if (VAR_3)
   VAR_6 = *VAR_3++;
  if (FUNC_4(VAR_6 == VAR_0)) {
   unsigned char VAR_7 = *VAR_2++;

   if (FUNC_0(VAR_1))
    VAR_7 &= 0x7f;
   if (FUNC_1(VAR_1) && FUNC_3(VAR_1))
    VAR_7 = FUNC_11(VAR_7);
   if (FUNC_2(VAR_1)) {
    FUNC_9(VAR_7, VAR_5);
    continue;
   }
   if (!FUNC_10(VAR_7, VAR_5->char_map))
    FUNC_6(VAR_1, VAR_7);
   else if (FUNC_8(VAR_1, VAR_7) && VAR_4) {
    if (VAR_3)
     VAR_6 = *VAR_3++;
    FUNC_7(VAR_1, *VAR_2++, VAR_6);
    VAR_4--;
   }
  } else
   FUNC_5(VAR_1, *VAR_2++, VAR_6);
 }
}
