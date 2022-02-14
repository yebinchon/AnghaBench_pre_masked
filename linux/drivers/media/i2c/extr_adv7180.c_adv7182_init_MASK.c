
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7180_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct adv7180_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct adv7180_state *VAR_10)
{
 if (VAR_10->chip_info->flags & VAR_3)
  FUNC_0(VAR_10, VAR_5,
   VAR_0 << 1);

 if (VAR_10->chip_info->flags & VAR_2)
  FUNC_0(VAR_10, VAR_9,
   VAR_1 << 1);

 if (VAR_10->chip_info->flags & VAR_4) {

  FUNC_0(VAR_10, 0x0080, 0x51);
  FUNC_0(VAR_10, 0x0081, 0x51);
  FUNC_0(VAR_10, 0x0082, 0x68);
 }


 if (VAR_10->chip_info->flags & VAR_3) {
  FUNC_0(VAR_10, VAR_8, 0x4e);
  FUNC_0(VAR_10, VAR_7, 0x57);
  FUNC_0(VAR_10, VAR_6, 0xc0);
 } else {
  if (VAR_10->chip_info->flags & VAR_4)
   FUNC_0(VAR_10,
          VAR_7,
          0x17);
  else
   FUNC_0(VAR_10,
          VAR_7,
          0x07);
  FUNC_0(VAR_10, VAR_8, 0x0c);
  FUNC_0(VAR_10, VAR_6, 0x40);
 }

 FUNC_0(VAR_10, 0x0013, 0x00);

 return 0;
}
