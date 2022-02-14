
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int rp_len; scalar_t__ base; TYPE_1__* rp; scalar_t__ burst; } ;
struct mt76_usb {TYPE_2__ mcu; } ;
struct mt76_dev {struct mt76_usb usb; } ;
struct TYPE_3__ {scalar_t__ reg; scalar_t__ value; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mt76_dev *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct mt76_usb *VAR_3 = &VAR_0->usb;
 u32 VAR_4, VAR_5;
 int VAR_6;

 if (VAR_3->mcu.burst) {
  FUNC_0(VAR_2 / 4 != VAR_3->mcu.rp_len);

  VAR_4 = VAR_3->mcu.rp[0].reg - VAR_3->mcu.base;
  for (VAR_6 = 0; VAR_6 < VAR_3->mcu.rp_len; VAR_6++) {
   VAR_5 = FUNC_1(VAR_1 + 4 * VAR_6);
   VAR_3->mcu.rp[VAR_6].reg = VAR_4++;
   VAR_3->mcu.rp[VAR_6].value = VAR_5;
  }
 } else {
  FUNC_0(VAR_2 / 8 != VAR_3->mcu.rp_len);

  for (VAR_6 = 0; VAR_6 < VAR_3->mcu.rp_len; VAR_6++) {
   VAR_4 = FUNC_1(VAR_1 + 8 * VAR_6) -
         VAR_3->mcu.base;
   VAR_5 = FUNC_1(VAR_1 + 8 * VAR_6 + 4);

   FUNC_0(VAR_3->mcu.rp[VAR_6].reg != VAR_4);
   VAR_3->mcu.rp[VAR_6].value = VAR_5;
  }
 }
}
