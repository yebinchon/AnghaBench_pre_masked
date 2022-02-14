
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_4,
           struct link_params *VAR_5, u8 VAR_6)
{
 struct bnx2x *VAR_7 = VAR_5->bp;
 u16 VAR_8;

 FUNC_2(VAR_7, VAR_4,
  VAR_0,
  VAR_1);
 FUNC_1(VAR_7, VAR_4,
  VAR_0,
  &VAR_8);
 VAR_8 &= 0xff00;

 FUNC_0(VAR_3, "54618x set link led (mode=%x)\n", VAR_6);
 switch (VAR_6) {
 case 131:
 case 130:
  VAR_8 |= 0x00ee;
  break;
 case 128:
  VAR_8 |= 0x0001;
  break;
 case 129:
  VAR_8 |= 0x00ff;
  break;
 default:
  break;
 }
 FUNC_2(VAR_7, VAR_4,
  VAR_0,
  VAR_2 | VAR_8);
 return;
}
