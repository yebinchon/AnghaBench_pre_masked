
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int itty; } ;
struct tty_ldisc {int dummy; } ;


 struct tty_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct tty_ldisc*) ;
 int FUNC_2 (struct tty_ldisc*,unsigned char const*,char*,size_t) ;
 struct tty_ldisc* FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_4(struct tty_port *VAR_0,
     const unsigned char *VAR_1,
     const unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct tty_struct *VAR_5;
 struct tty_ldisc *VAR_6;

 VAR_5 = FUNC_0(VAR_0->itty);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return 0;

 VAR_4 = FUNC_2(VAR_6, VAR_1, (char *)VAR_2, VAR_3);

 FUNC_1(VAR_6);

 return VAR_4;
}
