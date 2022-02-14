
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct gb_tty*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, unsigned int VAR_2,
   unsigned long VAR_3)
{
 struct gb_tty *VAR_4 = VAR_1->driver_data;

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_4, VAR_3);
 }

 return -VAR_0;
}
