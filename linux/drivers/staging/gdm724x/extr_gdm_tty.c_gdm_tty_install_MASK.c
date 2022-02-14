
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {size_t index; struct gdm* driver_data; TYPE_1__* driver; } ;
struct tty_driver {int dummy; } ;
struct gdm {int port; } ;
struct TYPE_2__ {int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gdm*** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_6(struct tty_driver *VAR_5, struct tty_struct *VAR_6)
{
 struct gdm *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_2,
      VAR_6->driver->driver_name);
 if (VAR_8 < 0)
  return -VAR_1;

 FUNC_1(&VAR_4);
 VAR_7 = VAR_3[VAR_8][VAR_6->index];
 if (!VAR_7) {
  FUNC_2(&VAR_4);
  return -VAR_1;
 }

 FUNC_3(&VAR_7->port);

 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_4(&VAR_7->port);
  FUNC_2(&VAR_4);
  return VAR_8;
 }

 VAR_6->driver_data = VAR_7;
 FUNC_2(&VAR_4);

 return 0;
}
