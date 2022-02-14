
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; struct raw3215_info* driver_data; } ;
struct tty_driver {int dummy; } ;
struct raw3215_info {int port; } ;


 int VAR_0 ;
 struct raw3215_info** VAR_1 ;
 int FUNC_0 (int *,struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_driver *VAR_2, struct tty_struct *VAR_3)
{
 struct raw3215_info *VAR_4;

 VAR_4 = VAR_1[VAR_3->index];
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_3->driver_data = VAR_4;

 return FUNC_0(&VAR_4->port, VAR_2, VAR_3);
}
