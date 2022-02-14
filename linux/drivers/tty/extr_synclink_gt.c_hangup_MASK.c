
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct TYPE_2__ {int open_wait; int mutex; int lock; int * tty; scalar_t__ count; } ;
struct slgt_info {TYPE_1__ port; int device_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,char*) ;
 int FUNC_5 (struct slgt_info*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_0)
{
 struct slgt_info *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_4(VAR_1, VAR_0->name, "hangup"))
  return;
 FUNC_0(("%s hangup\n", VAR_1->device_name));

 FUNC_1(VAR_0);

 FUNC_2(&VAR_1->port.mutex);
 FUNC_5(VAR_1);

 FUNC_6(&VAR_1->port.lock, VAR_2);
 VAR_1->port.count = 0;
 VAR_1->port.tty = ((void*)0);
 FUNC_7(&VAR_1->port.lock, VAR_2);
 FUNC_8(&VAR_1->port, 0);
 FUNC_3(&VAR_1->port.mutex);

 FUNC_9(&VAR_1->port.open_wait);
}
