
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; struct n_tty_data* disc_data; } ;
struct n_tty_data {int column; int canon_column; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,char*,int) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_6 (unsigned char,struct tty_struct*) ;
 int FUNC_7 (unsigned char) ;
 int FUNC_8 (struct tty_struct*,char*,int) ;
 int FUNC_9 (struct tty_struct*,char*,int) ;
 unsigned char FUNC_10 (unsigned char) ;
 int FUNC_11 (struct tty_struct*,unsigned char) ;

__attribute__((used)) static int FUNC_12(unsigned char VAR_1, struct tty_struct *VAR_2, int VAR_3)
{
 struct n_tty_data *VAR_4 = VAR_2->disc_data;
 int VAR_5;

 if (!VAR_3)
  return -1;

 switch (VAR_1) {
 case '\n':
  if (FUNC_3(VAR_2))
   VAR_4->column = 0;
  if (FUNC_2(VAR_2)) {
   if (VAR_3 < 2)
    return -1;
   VAR_4->canon_column = VAR_4->column = 0;
   VAR_2->ops->write(VAR_2, "\r\n", 2);
   return 2;
  }
  VAR_4->canon_column = VAR_4->column;
  break;
 case '\r':
  if (FUNC_4(VAR_2) && VAR_4->column == 0)
   return 0;
  if (FUNC_0(VAR_2)) {
   VAR_1 = '\n';
   if (FUNC_3(VAR_2))
    VAR_4->canon_column = VAR_4->column = 0;
   break;
  }
  VAR_4->canon_column = VAR_4->column = 0;
  break;
 case '\t':
  VAR_5 = 8 - (VAR_4->column & 7);
  if (FUNC_5(VAR_2) == VAR_0) {
   if (VAR_3 < VAR_5)
    return -1;
   VAR_4->column += VAR_5;
   VAR_2->ops->write(VAR_2, "        ", VAR_5);
   return VAR_5;
  }
  VAR_4->column += VAR_5;
  break;
 case '\b':
  if (VAR_4->column > 0)
   VAR_4->column--;
  break;
 default:
  if (!FUNC_7(VAR_1)) {
   if (FUNC_1(VAR_2))
    VAR_1 = FUNC_10(VAR_1);
   if (!FUNC_6(VAR_1, VAR_2))
    VAR_4->column++;
  }
  break;
 }

 FUNC_11(VAR_2, VAR_1);
 return 1;
}
