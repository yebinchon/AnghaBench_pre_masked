
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport_uss720_private {int* reg; } ;
struct parport {TYPE_2__* physport; struct parport_uss720_private* private_data; } ;
typedef int __u8 ;
struct TYPE_4__ {TYPE_1__* cad; } ;
struct TYPE_3__ {unsigned long timeout; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct parport*,int,int *,int ) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct parport*,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct parport *VAR_6, int VAR_7)
{
 struct parport_uss720_private *VAR_8 = VAR_6->private_data;
 int VAR_9;
 __u8 VAR_10;

 if (FUNC_0(VAR_6, 6, &VAR_10, VAR_3))
  return -VAR_2;

 VAR_9 = (VAR_8->reg[2] >> 5) & 0x7;
 if (VAR_9 == VAR_7)
  return 0;

 if (VAR_9 > VAR_1 && VAR_7 > VAR_1)
  if (FUNC_5(VAR_6, VAR_1))
   return -VAR_2;

 if (VAR_7 <= VAR_1 && !(VAR_8->reg[1] & 0x20)) {


  unsigned long VAR_11 = VAR_5 + VAR_6->physport->cad->timeout;
  switch (VAR_9) {
  case 128:
  case 129:

   for (;;) {
    if (FUNC_0(VAR_6, 6, &VAR_10, VAR_3))
     return -VAR_2;
    if (VAR_8->reg[2] & 0x01)
     break;
    if (FUNC_4 (VAR_5, VAR_11))

     return -VAR_0;
    FUNC_1(10);
    if (FUNC_3 (VAR_4))
     break;
   }
  }
 }

 if (FUNC_2(VAR_6, 6, VAR_7 << 5, VAR_3))
  return -VAR_2;
 if (FUNC_0(VAR_6, 6, &VAR_10, VAR_3))
  return -VAR_2;
 return 0;
}
