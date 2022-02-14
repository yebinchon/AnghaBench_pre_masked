
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct pl2303_type_data {scalar_t__ no_autoxonxoff; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static bool FUNC_4(struct tty_struct *VAR_0, const struct pl2303_type_data *VAR_1)
{
 if (!FUNC_1(VAR_0) || FUNC_0(VAR_0))
  return 0;

 if (FUNC_2(VAR_0) != 0x11 || FUNC_3(VAR_0) != 0x13)
  return 0;

 if (VAR_1->no_autoxonxoff)
  return 0;

 return 1;
}
