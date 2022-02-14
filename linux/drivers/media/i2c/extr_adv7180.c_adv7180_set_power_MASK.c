
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adv7180_state {scalar_t__ field; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct adv7180_state*,int,int) ;
 int FUNC_1 (struct adv7180_state*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adv7180_state *VAR_5, bool VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 if (VAR_6)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 VAR_8 = FUNC_1(VAR_5, VAR_3, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->chip_info->flags & VAR_0) {
  if (VAR_6) {
   FUNC_0(VAR_5, 0xDE, 0x02);
   FUNC_0(VAR_5, 0xD2, 0xF7);
   FUNC_0(VAR_5, 0xD8, 0x65);
   FUNC_0(VAR_5, 0xE0, 0x09);
   FUNC_0(VAR_5, 0x2C, 0x00);
   if (VAR_5->field == VAR_4)
    FUNC_0(VAR_5, 0x1D, 0x80);
   FUNC_0(VAR_5, 0x00, 0x00);
  } else {
   FUNC_0(VAR_5, 0x00, 0x80);
  }
 }

 return 0;
}
