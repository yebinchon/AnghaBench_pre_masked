
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_4,
        struct link_params *VAR_5, u8 VAR_6)
{
 struct bnx2x *VAR_7 = VAR_5->bp;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10;

 if (!(VAR_4->flags & VAR_0))
  return;
 switch (VAR_6) {
 case 131:
 case 130:
  VAR_8 = 0;
  VAR_9 = 0x03;
  break;
 case 129:
  VAR_8 = 0;
  VAR_9 = 0x02;
  break;
 case 128:
  VAR_8 = 0x60;
  VAR_9 = 0x11;
  break;
 }
 FUNC_0(VAR_7, VAR_4,
   VAR_1,
   VAR_3,
   &VAR_10);
 VAR_10 &= 0xff8f;
 VAR_10 |= VAR_8;
 FUNC_1(VAR_7, VAR_4,
    VAR_1,
    VAR_3,
    VAR_10);
 FUNC_0(VAR_7, VAR_4,
   VAR_1,
   VAR_2,
   &VAR_10);
 VAR_10 &= 0xffe0;
 VAR_10 |= VAR_9;
 FUNC_1(VAR_7, VAR_4,
    VAR_1,
    VAR_2,
    VAR_10);
}
