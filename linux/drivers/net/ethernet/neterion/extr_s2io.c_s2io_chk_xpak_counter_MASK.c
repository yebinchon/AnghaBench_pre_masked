
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(u64 *VAR_1, u64 * VAR_2, u32 VAR_3,
      u16 VAR_4, u16 VAR_5)
{
 u64 VAR_6 = 0x3;
 u64 VAR_7;
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_6 = VAR_6 << 0x2;

 if (VAR_4 > 0) {
  *VAR_1 = *VAR_1 + 1;
  VAR_7 = *VAR_2 & VAR_6;
  VAR_7 = VAR_7 >> (VAR_3 * 0x2);
  VAR_7 = VAR_7 + 1;
  if (VAR_7 == 3) {
   switch (VAR_5) {
   case 1:
    FUNC_0(VAR_0,
       "Take Xframe NIC out of service.\n");
    FUNC_0(VAR_0,
"Excessive temperatures may result in premature transceiver failure.\n");
    break;
   case 2:
    FUNC_0(VAR_0,
       "Take Xframe NIC out of service.\n");
    FUNC_0(VAR_0,
"Excessive bias currents may indicate imminent laser diode failure.\n");
    break;
   case 3:
    FUNC_0(VAR_0,
       "Take Xframe NIC out of service.\n");
    FUNC_0(VAR_0,
"Excessive laser output power may saturate far-end receiver.\n");
    break;
   default:
    FUNC_0(VAR_0,
       "Incorrect XPAK Alarm type\n");
   }
   VAR_7 = 0x0;
  }
  VAR_7 = VAR_7 << (VAR_3 * 0x2);
  *VAR_2 = (*VAR_2 & (~VAR_6)) | (VAR_7);

 } else {
  *VAR_2 = *VAR_2 & (~VAR_6);
 }
}
