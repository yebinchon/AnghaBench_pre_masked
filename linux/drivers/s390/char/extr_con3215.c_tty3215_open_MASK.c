
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct raw3215_info* driver_data; } ;
struct TYPE_2__ {scalar_t__ low_latency; } ;
struct raw3215_info {TYPE_1__ port; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct raw3215_info*) ;
 int FUNC_1 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct raw3215_info *VAR_2 = VAR_0->driver_data;
 int VAR_3;

 FUNC_1(&VAR_2->port, VAR_0);

 VAR_2->port.low_latency = 0;



 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
