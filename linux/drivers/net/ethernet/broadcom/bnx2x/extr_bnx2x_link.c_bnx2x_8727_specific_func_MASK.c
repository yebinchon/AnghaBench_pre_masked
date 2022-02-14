
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; } ;
struct bnx2x {int dummy; } ;



 int FUNC_0 (int ,char*,int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct link_params*,struct bnx2x_phy*,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_8,
         struct link_params *VAR_9,
         u32 VAR_10)
{
 struct bnx2x *VAR_11 = VAR_9->bp;
 u16 VAR_12;
 switch (VAR_10) {
 case 130:
  FUNC_3(VAR_9, VAR_8, 0);
  break;
 case 129:
  if (!(VAR_8->flags & VAR_1))
   FUNC_3(VAR_9, VAR_8, 1);
  break;
 case 128:
  FUNC_2(VAR_11, VAR_8,
     VAR_2, VAR_4,
     (1<<2) | (1<<5));
  FUNC_2(VAR_11, VAR_8,
     VAR_2, VAR_5,
     0);
  FUNC_2(VAR_11, VAR_8,
     VAR_2, VAR_3, 0x0006);

  FUNC_1(VAR_11, VAR_8, VAR_2,
    VAR_6,
    &VAR_12);
  VAR_12 |= (1<<12);
  if (VAR_8->flags & VAR_0)
   VAR_12 |= (3<<5);



  if (!(VAR_8->flags & VAR_0))
   VAR_12 &= 0xff8f;
  FUNC_2(VAR_11, VAR_8,
     VAR_2, VAR_6,
     VAR_12);
  break;
 default:
  FUNC_0(VAR_7, "Function 0x%x not supported by 8727\n",
     VAR_10);
  return;
 }
}
