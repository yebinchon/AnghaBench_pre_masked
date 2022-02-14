
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int signals; int device_name; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct slgt_info*,int ,char*) ;
 int FUNC_5 (struct tty_struct*,int ) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct tty_struct * VAR_1)
{
 struct slgt_info *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;

 if (FUNC_4(VAR_2, VAR_1->name, "throttle"))
  return;
 FUNC_1(("%s throttle\n", VAR_2->device_name));
 if (FUNC_2(VAR_1))
  FUNC_5(VAR_1, FUNC_3(VAR_1));
  if (FUNC_0(VAR_1)) {
  FUNC_7(&VAR_2->lock,VAR_3);
  VAR_2->signals &= ~VAR_0;
   FUNC_6(VAR_2);
  FUNC_8(&VAR_2->lock,VAR_3);
 }
}
