
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_1__* sh; int d11core; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcms_phy*,int ) ;

s8 FUNC_6(struct brcms_phy *VAR_5, bool VAR_6)
{
 u16 VAR_7;
 s32 VAR_8 = 0;
 bool VAR_9 = 0;

 if (VAR_6 == 1) {
  VAR_9 = (0 == (FUNC_1(VAR_5->d11core,
          FUNC_0(VAR_4)) &
     VAR_2));
  if (!VAR_9)
   FUNC_4(VAR_5->sh->physhim);
  FUNC_5(VAR_5, VAR_3);
 }

 VAR_7 = FUNC_2(VAR_5, 0x475) & 0x1FF;

 if (VAR_7 > 255)
  VAR_8 = (s32) (VAR_7 - 512);
 else
  VAR_8 = (s32) VAR_7;

 VAR_8 = (VAR_8 * VAR_1 +
   (VAR_0 >> 1)) / VAR_0;

 if (VAR_6 == 1) {
  if (!VAR_9)
   FUNC_3(VAR_5->sh->physhim);
 }
 return (s8) VAR_8;
}
