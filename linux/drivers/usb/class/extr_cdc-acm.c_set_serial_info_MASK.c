
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct acm* driver_data; } ;
struct serial_struct {int close_delay; int closing_wait; } ;
struct TYPE_2__ {unsigned int close_delay; unsigned int closing_wait; int mutex; } ;
struct acm {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4, struct serial_struct *VAR_5)
{
 struct acm *VAR_6 = VAR_4->driver_data;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_5->close_delay * 10;
 VAR_7 = VAR_5->closing_wait == VAR_0 ?
   VAR_0 : VAR_5->closing_wait * 10;

 FUNC_1(&VAR_6->port.mutex);

 if (!FUNC_0(VAR_1)) {
  if ((VAR_8 != VAR_6->port.close_delay) ||
      (VAR_7 != VAR_6->port.closing_wait))
   VAR_9 = -VAR_3;
  else
   VAR_9 = -VAR_2;
 } else {
  VAR_6->port.close_delay = VAR_8;
  VAR_6->port.closing_wait = VAR_7;
 }

 FUNC_2(&VAR_6->port.mutex);
 return VAR_9;
}
