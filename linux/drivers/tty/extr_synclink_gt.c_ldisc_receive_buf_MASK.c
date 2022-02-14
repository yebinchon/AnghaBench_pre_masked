
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* receive_buf ) (struct tty_struct*,int const*,char*,int) ;} ;


 int FUNC_0 (struct tty_struct*,int const*,char*,int) ;
 int FUNC_1 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0,
         const __u8 *VAR_1, char *VAR_2, int VAR_3)
{
 struct tty_ldisc *VAR_4;
 if (!VAR_0)
  return;
 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4) {
  if (VAR_4->ops->receive_buf)
   VAR_4->ops->receive_buf(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_4);
 }
}
