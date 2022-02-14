
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct slgt_info {int device_name; TYPE_1__ port; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct slgt_info *VAR_0)
{
 struct tty_struct *VAR_1 = VAR_0->port.tty;

 FUNC_0(("%s bh_transmit\n", VAR_0->device_name));
 if (VAR_1)
  FUNC_1(VAR_1);
}
