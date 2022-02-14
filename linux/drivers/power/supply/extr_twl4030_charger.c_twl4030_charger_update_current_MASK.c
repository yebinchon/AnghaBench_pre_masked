
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_bci {int ac_cur; int ac_is_active; int usb_cur; int usb_cur_target; int ichg_eoc; int ichg_lo; int ichg_hi; int current_worker; int channel_vac; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int,int ) ;
 unsigned int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct twl4030_bci *VAR_11)
{
 int VAR_12;
 int VAR_13;
 unsigned VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 bool VAR_19 = 0;
 u8 VAR_20;





 if (FUNC_0(VAR_11->channel_vac)) {
  VAR_13 = VAR_11->ac_cur;
  VAR_11->ac_is_active = 1;
 } else {
  VAR_13 = VAR_11->usb_cur;
  VAR_11->ac_is_active = 0;
  if (VAR_13 > VAR_11->usb_cur_target) {
   VAR_13 = VAR_11->usb_cur_target;
   VAR_11->usb_cur = VAR_13;
  }
  if (VAR_13 < VAR_11->usb_cur_target)
   FUNC_1(&VAR_11->current_worker, VAR_10);
 }


 if (VAR_11->ichg_eoc >= 200000)
  VAR_19 = 1;
 if (VAR_11->ichg_lo >= 400000)
  VAR_19 = 1;
 if (VAR_11->ichg_hi >= 820000)
  VAR_19 = 1;
 if (VAR_13 > 852000)
  VAR_19 = 1;

 VAR_12 = FUNC_2(VAR_0, &VAR_16);
 if (VAR_12 < 0)
  return VAR_12;
 if (FUNC_4(VAR_9, &VAR_20,
       VAR_7) < 0)
  VAR_20 = 0;
 VAR_20 &= 7;

 if ((!!VAR_19) != !!(VAR_16 & VAR_6))




  FUNC_3(VAR_20, 0);






 VAR_14 = FUNC_6(VAR_11->ichg_eoc, VAR_19);
 if (VAR_14 > 0x278)
  VAR_14 = 0x278;
 if (VAR_14 < 0x200)
  VAR_14 = 0x200;
 VAR_14 = (VAR_14 >> 3) & 0xf;
 VAR_18 = VAR_14 << 4;





 VAR_14 = FUNC_6(VAR_11->ichg_lo, VAR_19);
 if (VAR_14 > 0x2F0)
  VAR_14 = 0x2F0;
 if (VAR_14 < 0x200)
  VAR_14 = 0x200;
 VAR_14 = (VAR_14 >> 4) & 0xf;
 VAR_18 |= VAR_14;


 VAR_12 = FUNC_2(VAR_4, &VAR_17);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_17 != VAR_18) {
  VAR_12 = FUNC_5(VAR_8, 0xF4,
       VAR_3);
  if (VAR_12 < 0)
   return VAR_12;
  FUNC_5(VAR_8,
     VAR_18, VAR_4);
 }


 VAR_14 = FUNC_6(VAR_11->ichg_hi, VAR_19);
 if (VAR_14 > 0x3E0)
  VAR_14 = 0x3E0;
 if (VAR_14 < 0x200)
  VAR_14 = 0x200;
 VAR_18 = (VAR_14 >> 5) & 0xF;
 VAR_18 <<= 4;
 VAR_12 = FUNC_2(VAR_5, &VAR_17);
 if (VAR_12 < 0)
  return VAR_12;
 if ((VAR_17 & 0xF0) != VAR_18) {
  VAR_18 |= (VAR_17 & 0x0F);
  VAR_12 = FUNC_5(VAR_8, 0xE7,
       VAR_3);
  if (VAR_12 < 0)
   return VAR_12;
  FUNC_5(VAR_8,
     VAR_18, VAR_5);
 }





 VAR_14 = FUNC_6(VAR_13, VAR_19);

 if (VAR_14 > 0x3ff)
  VAR_14 = 0x3ff;
 VAR_12 = FUNC_2(VAR_1, &VAR_17);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_15 = VAR_17;
 VAR_12 = FUNC_2(VAR_2, &VAR_17);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_15 |= VAR_17 << 8;
 if (VAR_14 != VAR_17) {


  VAR_12 = FUNC_5(VAR_8, 0xE7,
       VAR_3);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_12 = FUNC_5(VAR_8,
       (VAR_14 & 0x100) ? 3 : 2,
       VAR_2);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_5(VAR_8, 0xE7,
       VAR_3);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_12 = FUNC_5(VAR_8,
       VAR_14 & 0xff,
       VAR_1);
 }
 if ((!!VAR_19) != !!(VAR_16 & VAR_6)) {

  VAR_16 ^= VAR_6;
  FUNC_5(VAR_8,
     VAR_16, VAR_0);
  FUNC_3(0, VAR_20);
 }
 return 0;
}
