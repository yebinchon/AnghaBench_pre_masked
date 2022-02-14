
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int driver_closed; int timer_started; int driver_open; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 if (!FUNC_3(0, &VAR_1.driver_open)) {
  FUNC_2("intel_scu_release, without open\n");
  return -VAR_0;
 }

 if (!VAR_1.timer_started) {

  FUNC_2("closed, without starting timer\n");
  return 0;
 }

 FUNC_1("Unexpected close of /dev/watchdog!\n");


 VAR_1.driver_closed = 1;


 FUNC_0();


 FUNC_4();


 return 0;
}
