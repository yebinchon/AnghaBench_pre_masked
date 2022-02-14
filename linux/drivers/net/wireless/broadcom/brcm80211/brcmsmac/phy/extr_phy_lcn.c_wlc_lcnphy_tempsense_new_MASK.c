
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_1__* sh; int d11core; } ;
typedef int s16 ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct brcms_phy*,int ) ;

s16 FUNC_8(struct brcms_phy *VAR_3, bool VAR_4)
{
 u16 VAR_5, VAR_6;
 s16 VAR_7 = 0;
 bool VAR_8 = 0;

 if (VAR_4 == 1) {
  VAR_8 = (0 == (FUNC_1(VAR_3->d11core,
          FUNC_0(VAR_2)) &
     VAR_0));
  if (!VAR_8)
   FUNC_6(VAR_3->sh->physhim);
  FUNC_7(VAR_3, VAR_1);
 }
 VAR_5 = FUNC_3(VAR_3, 0x476) & 0x1FF;
 VAR_6 = FUNC_3(VAR_3, 0x477) & 0x1FF;

 if (VAR_5 > 255)
  VAR_7 = (s16) (VAR_5 - 512);
 else
  VAR_7 = (s16) VAR_5;

 if (VAR_6 > 255)
  VAR_7 += (s16) (VAR_6 - 512);
 else
  VAR_7 += (s16) VAR_6;

 VAR_7 /= 2;

 if (VAR_4 == 1) {

  FUNC_2(VAR_3, 0x448, (0x1 << 14), (1) << 14);

  FUNC_4(100);
  FUNC_2(VAR_3, 0x448, (0x1 << 14), (0) << 14);

  if (!VAR_8)
   FUNC_5(VAR_3->sh->physhim);
 }
 return VAR_7;
}
