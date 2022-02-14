
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct brcms_phy *VAR_4, int VAR_5, s16 VAR_6, s16 VAR_7)
{
 u16 VAR_8;
 u16 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 switch (VAR_5) {
 case 0:
  FUNC_1(VAR_4, VAR_6, VAR_7);
  break;
 case 2:
  VAR_8 = (VAR_6 & 0xff) << 8 | (VAR_7 & 0xff);
  FUNC_2(VAR_4, VAR_8);
  break;
 case 3:
  VAR_12 = FUNC_0(VAR_6, 0);
  VAR_10 = 8 + VAR_12;
  VAR_12 = FUNC_0(VAR_6, 1);
  VAR_9 = 8 - VAR_12;
  VAR_11 = (VAR_9 * 16 + VAR_10);
  FUNC_3(VAR_4, VAR_0, VAR_11);
  VAR_12 = FUNC_0(VAR_7, 0);
  VAR_10 = 8 + VAR_12;
  VAR_12 = FUNC_0(VAR_7, 1);
  VAR_9 = 8 - VAR_12;
  VAR_11 = (VAR_9 * 16 + VAR_10);
  FUNC_3(VAR_4, VAR_1, VAR_11);
  break;
 case 4:
  VAR_12 = FUNC_0(VAR_6, 0);
  VAR_10 = 8 + VAR_12;
  VAR_12 = FUNC_0(VAR_6, 1);
  VAR_9 = 8 - VAR_12;
  VAR_11 = (VAR_9 * 16 + VAR_10);
  FUNC_3(VAR_4, VAR_2, VAR_11);
  VAR_12 = FUNC_0(VAR_7, 0);
  VAR_10 = 8 + VAR_12;
  VAR_12 = FUNC_0(VAR_7, 1);
  VAR_9 = 8 - VAR_12;
  VAR_11 = (VAR_9 * 16 + VAR_10);
  FUNC_3(VAR_4, VAR_3, VAR_11);
  break;
 }
}
