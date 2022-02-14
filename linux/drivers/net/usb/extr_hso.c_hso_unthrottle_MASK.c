
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {int unthrottle_tasklet; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct hso_serial *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->unthrottle_tasklet);
}
