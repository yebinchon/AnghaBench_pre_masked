
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7180_state {scalar_t__ field; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adv7180_state*,int,int) ;
 int FUNC_1 (struct adv7180_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct adv7180_state *VAR_3)
{
 if (!(VAR_3->chip_info->flags & VAR_0))
  return 0;

 if (VAR_3->field == VAR_2) {
  if (VAR_3->chip_info->flags & VAR_1) {
   FUNC_0(VAR_3, 0x01, 0x20);
   FUNC_0(VAR_3, 0x02, 0x28);
   FUNC_0(VAR_3, 0x03, 0x38);
   FUNC_0(VAR_3, 0x04, 0x30);
   FUNC_0(VAR_3, 0x05, 0x30);
   FUNC_0(VAR_3, 0x06, 0x80);
   FUNC_0(VAR_3, 0x07, 0x70);
   FUNC_0(VAR_3, 0x08, 0x50);
  }
  FUNC_1(VAR_3, 0xa3, 0x00);
  FUNC_1(VAR_3, 0x5b, 0x00);
  FUNC_1(VAR_3, 0x55, 0x80);
 } else {
  if (VAR_3->chip_info->flags & VAR_1) {
   FUNC_0(VAR_3, 0x01, 0x18);
   FUNC_0(VAR_3, 0x02, 0x18);
   FUNC_0(VAR_3, 0x03, 0x30);
   FUNC_0(VAR_3, 0x04, 0x20);
   FUNC_0(VAR_3, 0x05, 0x28);
   FUNC_0(VAR_3, 0x06, 0x40);
   FUNC_0(VAR_3, 0x07, 0x58);
   FUNC_0(VAR_3, 0x08, 0x30);
  }
  FUNC_1(VAR_3, 0xa3, 0x70);
  FUNC_1(VAR_3, 0x5b, 0x80);
  FUNC_1(VAR_3, 0x55, 0x00);
 }

 return 0;
}
