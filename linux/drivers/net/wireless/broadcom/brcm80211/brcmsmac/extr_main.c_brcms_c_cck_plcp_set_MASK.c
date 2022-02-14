
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct brcms_c_info {TYPE_1__* hw; } ;
struct TYPE_2__ {int d11core; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_c_info *VAR_2, int VAR_3,
        uint VAR_4, u8 *VAR_5)
{
 u16 VAR_6 = 0;
 u8 VAR_7 = 0;

 switch (VAR_3) {
 case 130:
  VAR_6 = VAR_4 << 3;
  break;
 case 129:
  VAR_6 = VAR_4 << 2;
  break;
 case 128:
  VAR_6 = (VAR_4 << 4) / 11;
  if ((VAR_4 << 4) - (VAR_6 * 11) > 0)
   VAR_6++;
  break;
 case 131:
  VAR_6 = (VAR_4 << 3) / 11;
  if ((VAR_4 << 3) - (VAR_6 * 11) > 0) {
   VAR_6++;
   if ((VAR_6 * 11) - (VAR_4 << 3) >= 8)
    VAR_7 = VAR_0;
  }
  break;

 default:
  FUNC_0(VAR_2->hw->d11core,
     "brcms_c_cck_plcp_set: unsupported rate %d\n",
     VAR_3);
  VAR_3 = 130;
  VAR_6 = VAR_4 << 3;
  break;
 }

 VAR_5[0] = VAR_3 * 5;

 VAR_5[1] = (u8) (VAR_7 | VAR_1);

 VAR_5[2] = VAR_6 & 0xff;
 VAR_5[3] = (VAR_6 >> 8) & 0xff;

 VAR_5[4] = 0;
 VAR_5[5] = 0;
}
