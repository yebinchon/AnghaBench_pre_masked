
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct serial_state* driver_data; } ;
struct TYPE_2__ {unsigned char* buf; int head; int tail; } ;
struct serial_state {TYPE_1__ xmit; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct serial_state*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct serial_state *VAR_3;
 unsigned long VAR_4;

 VAR_3 = VAR_1->driver_data;

 if (FUNC_3(VAR_3, VAR_1->name, "rs_put_char"))
  return 0;

 if (!VAR_3->xmit.buf)
  return 0;

 FUNC_2(VAR_4);
 if (FUNC_0(VAR_3->xmit.head,
         VAR_3->xmit.tail,
         VAR_0) == 0) {
  FUNC_1(VAR_4);
  return 0;
 }

 VAR_3->xmit.buf[VAR_3->xmit.head++] = VAR_2;
 VAR_3->xmit.head &= VAR_0-1;
 FUNC_1(VAR_4);
 return 1;
}
