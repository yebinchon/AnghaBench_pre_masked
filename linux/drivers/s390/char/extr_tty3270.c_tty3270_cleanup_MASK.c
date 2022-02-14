
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty3270* driver_data; } ;
struct tty3270 {int view; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct tty3270 *VAR_1 = VAR_0->driver_data;

 if (VAR_1) {
  VAR_0->driver_data = ((void*)0);
  FUNC_0(&VAR_1->view);
 }
}
