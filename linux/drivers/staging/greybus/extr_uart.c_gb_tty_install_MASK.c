
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; int index; } ;
struct tty_driver {int dummy; } ;
struct gb_tty {int port; } ;


 int VAR_0 ;
 struct gb_tty* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_1, struct tty_struct *VAR_2)
{
 struct gb_tty *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->index);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  goto error;

 VAR_2->driver_data = VAR_3;
 return 0;
error:
 FUNC_1(&VAR_3->port);
 return VAR_4;
}
