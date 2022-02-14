
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver; int name; struct slgt_info* driver_data; } ;
struct TYPE_6__ {int count; int * tty; int mutex; } ;
struct slgt_info {TYPE_2__ port; int timeout; int device_name; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,char*) ;
 int FUNC_5 (struct slgt_info*) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (TYPE_2__*,struct tty_struct*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct tty_struct*,int ) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct slgt_info *VAR_2 = VAR_0->driver_data;

 if (FUNC_4(VAR_2, VAR_0->name, "close"))
  return;
 FUNC_0(("%s close entry, count=%d\n", VAR_2->device_name, VAR_2->port.count));

 if (FUNC_8(&VAR_2->port, VAR_0, VAR_1) == 0)
  goto cleanup;

 FUNC_2(&VAR_2->port.mutex);
 if (FUNC_9(&VAR_2->port))
   FUNC_10(VAR_0, VAR_2->timeout);
 FUNC_1(VAR_0);
 FUNC_6(VAR_0);

 FUNC_5(VAR_2);
 FUNC_3(&VAR_2->port.mutex);

 FUNC_7(&VAR_2->port, VAR_0);
 VAR_2->port.tty = ((void*)0);
cleanup:
 FUNC_0(("%s close exit, count=%d\n", VAR_0->driver->name, VAR_2->port.count));
}
