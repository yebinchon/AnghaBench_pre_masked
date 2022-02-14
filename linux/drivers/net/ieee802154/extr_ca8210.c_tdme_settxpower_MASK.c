
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pa_cfg_sfr {int bias_current_trim; int buffer_capacitor_trim; int boost; int paib; } ;
typedef int u8 ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,void*) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_3, void *VAR_4)
{
 u8 VAR_5;
 s8 VAR_6;
 u8 VAR_7;
 union pa_cfg_sfr VAR_8;


 VAR_7 = 0x3F & VAR_3;
 if (VAR_7 & 0x20)
  VAR_7 += 0xC0;
 VAR_6 = (s8)VAR_7;

 if (VAR_0) {
  if (VAR_6 > 0) {

   VAR_8.bias_current_trim = 3;
   VAR_8.buffer_capacitor_trim = 5;
   VAR_8.boost = 1;
  } else {

   VAR_8.bias_current_trim = 3;
   VAR_8.buffer_capacitor_trim = 7;
   VAR_8.boost = 0;
  }

  VAR_5 = FUNC_0(
   0,
   VAR_1,
   VAR_8.paib,
   VAR_4
  );
 } else {



  if (VAR_6 > 8) {
   VAR_8.paib = 0x3F;
  } else if (VAR_6 == 8) {
   VAR_8.paib = 0x32;
  } else if (VAR_6 == 7) {
   VAR_8.paib = 0x22;
  } else if (VAR_6 == 6) {
   VAR_8.paib = 0x18;
  } else if (VAR_6 == 5) {
   VAR_8.paib = 0x10;
  } else if (VAR_6 == 4) {
   VAR_8.paib = 0x0C;
  } else if (VAR_6 == 3) {
   VAR_8.paib = 0x08;
  } else if (VAR_6 == 2) {
   VAR_8.paib = 0x05;
  } else if (VAR_6 == 1) {
   VAR_8.paib = 0x03;
  } else if (VAR_6 == 0) {
   VAR_8.paib = 0x01;
  } else {
   VAR_8.paib = 0x00;
  }

  VAR_5 = FUNC_0(
   0,
   VAR_2,
   VAR_8.paib,
   VAR_4
  );
 }

 return VAR_5;
}
