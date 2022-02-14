
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {int dummy; } ;


 int FUNC_0 (struct gb_tty*,int) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, int VAR_1)
{
 struct gb_tty *VAR_2 = VAR_0->driver_data;

 return FUNC_0(VAR_2, VAR_1 ? 1 : 0);
}
