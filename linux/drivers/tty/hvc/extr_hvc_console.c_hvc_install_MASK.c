
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvc_struct* driver_data; int index; } ;
struct tty_driver {int dummy; } ;
struct hvc_struct {int port; } ;


 int VAR_0 ;
 struct hvc_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tty_driver*,struct tty_struct*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_1, struct tty_struct *VAR_2)
{
 struct hvc_struct *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_0(VAR_2->index);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->driver_data = VAR_3;

 VAR_4 = FUNC_1(&VAR_3->port, VAR_1, VAR_2);
 if (VAR_4)
  FUNC_2(&VAR_3->port);
 return VAR_4;
}
