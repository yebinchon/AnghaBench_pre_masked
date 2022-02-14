
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ alive; int long_name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 if (!VAR_1) {
  FUNC_0("%s: I/O error, deactivating speakup\n",
   VAR_0->long_name);




  VAR_0->alive = 0;
  FUNC_1();
  return 1;
 }

 return 0;
}
