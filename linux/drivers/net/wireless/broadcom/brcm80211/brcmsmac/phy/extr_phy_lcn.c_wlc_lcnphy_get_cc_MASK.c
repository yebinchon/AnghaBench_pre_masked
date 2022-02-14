
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lcnphy_unsign16_struct {int re; int im; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int*,int*,int*,int*) ;
 int FUNC_1 (struct brcms_phy*,int*,int*) ;
 int FUNC_2 (struct brcms_phy*) ;

__attribute__((used)) static struct lcnphy_unsign16_struct
FUNC_3(struct brcms_phy *VAR_0, int VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4;
 u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct lcnphy_unsign16_struct VAR_11;
 VAR_11.re = 0;
 VAR_11.im = 0;
 switch (VAR_1) {
 case 0:
  FUNC_1(VAR_0, &VAR_2, &VAR_3);
  VAR_11.re = VAR_2;
  VAR_11.im = VAR_3;
  break;
 case 2:
  VAR_4 = FUNC_2(VAR_0);
  VAR_5 = (((VAR_4 & 0xff00) << 16) >> 24);
  VAR_6 = (((VAR_4 & 0x00ff) << 24) >> 24);
  VAR_11.re = (u16) VAR_5;
  VAR_11.im = (u16) VAR_6;
  break;
 case 3:
  FUNC_0(VAR_0, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  VAR_11.re = (u16) VAR_7;
  VAR_11.im = (u16) VAR_8;
  break;
 case 4:
  FUNC_0(VAR_0, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  VAR_11.re = (u16) VAR_9;
  VAR_11.im = (u16) VAR_10;
  break;
 }
 return VAR_11;
}
