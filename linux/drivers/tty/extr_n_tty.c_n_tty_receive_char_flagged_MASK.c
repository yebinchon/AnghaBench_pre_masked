
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;






 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,unsigned char) ;
 int FUNC_3 (struct tty_struct*,char*,char) ;

__attribute__((used)) static void
FUNC_4(struct tty_struct *VAR_0, unsigned char VAR_1, char VAR_2)
{
 switch (VAR_2) {
 case 131:
  FUNC_0(VAR_0);
  break;
 case 128:
 case 130:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 default:
  FUNC_3(VAR_0, "unknown flag %d\n", VAR_2);
  break;
 }
}
