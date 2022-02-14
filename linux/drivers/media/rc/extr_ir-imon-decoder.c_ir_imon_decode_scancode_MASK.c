
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rc_dev {int input_dev; TYPE_1__* raw; } ;
struct imon_dec {int bits; int stick_keyboard; } ;
struct TYPE_2__ {struct imon_dec imon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rc_dev*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rc_dev *VAR_5)
{
 struct imon_dec *VAR_6 = &VAR_5->raw->imon;


 if (VAR_6->bits == 0x299115b7)
  VAR_6->stick_keyboard = !VAR_6->stick_keyboard;

 if ((VAR_6->bits & 0xfc0000ff) == 0x680000b7) {
  int VAR_7, VAR_8;
  u8 VAR_9;

  VAR_9 = VAR_6->bits >> 16;
  VAR_7 = (VAR_9 & 0x08) | (VAR_9 & 0x10) >> 2 |
   (VAR_9 & 0x20) >> 4 | (VAR_9 & 0x40) >> 6;
  if (VAR_6->bits & 0x02000000)
   VAR_7 |= ~0x0f;
  VAR_9 = VAR_6->bits >> 8;
  VAR_8 = (VAR_9 & 0x08) | (VAR_9 & 0x10) >> 2 |
   (VAR_9 & 0x20) >> 4 | (VAR_9 & 0x40) >> 6;
  if (VAR_6->bits & 0x01000000)
   VAR_8 |= ~0x0f;

  if (VAR_7 && VAR_8 && VAR_6->stick_keyboard) {
   if (FUNC_0(VAR_8) > FUNC_0(VAR_7))
    VAR_6->bits = VAR_8 > 0 ?
     0x289515b7 :
     0x2aa515b7;
   else
    VAR_6->bits = VAR_7 > 0 ?
     0x2ba515b7 :
     0x29a515b7;
  }

  if (!VAR_6->stick_keyboard) {
   FUNC_2(VAR_5->input_dev, VAR_3, VAR_7);
   FUNC_2(VAR_5->input_dev, VAR_4, VAR_8);

   FUNC_1(VAR_5->input_dev, VAR_0,
      (VAR_6->bits & 0x00010000) != 0);
   FUNC_1(VAR_5->input_dev, VAR_1,
      (VAR_6->bits & 0x00040000) != 0);
  }
 }

 FUNC_3(VAR_5, VAR_2, VAR_6->bits, 0);
}
