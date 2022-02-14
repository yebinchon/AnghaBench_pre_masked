
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_reg_set {int member_2; int val; int const reg; int const devad; int member_1; int const member_0; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 size_t FUNC_0 (struct bnx2x_reg_set*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int VAR_0 ;


 int VAR_1 ;





 int const VAR_2 ;


 int VAR_3 ;

 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int const,size_t*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int const,int const,int) ;
 size_t FUNC_5 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_6 (struct link_params*,struct bnx2x_phy*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x_phy *VAR_8,
          struct link_params *VAR_9,
          struct link_vars *VAR_10)
{
 struct bnx2x *VAR_11 = VAR_9->bp;
 u16 VAR_12, VAR_13, VAR_14;
 static struct bnx2x_reg_set VAR_15[] = {

  {135, 128, 0x7},
  {135, 133,
   0x3f00},
  {137, 134, 0},
  {137, 130, 0x0},
  {135, 132, 0x1},
  {135, 131, 0xa},

  {136, 129, 0x2}
 };

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_15); VAR_13++)
  FUNC_4(VAR_11, VAR_8, VAR_15[VAR_13].devad, VAR_15[VAR_13].reg,
     VAR_15[VAR_13].val);

 VAR_14 = FUNC_5(VAR_8, VAR_9);

 FUNC_1(VAR_11, VAR_8, VAR_1,
     VAR_0, 0);

 FUNC_2(VAR_11, VAR_8, 135,
   VAR_6, &VAR_12);
 VAR_12 &= ~(0x0011 << VAR_14);
 FUNC_4(VAR_11, VAR_8, 135,
    VAR_6, VAR_12);

 FUNC_2(VAR_11, VAR_8, 135,
   VAR_7, &VAR_12);
 VAR_12 |= (0x0303 << (VAR_14 << 1));
 FUNC_4(VAR_11, VAR_8, 135,
    VAR_7, VAR_12);

 FUNC_6(VAR_9, VAR_8);

 FUNC_4(VAR_11, VAR_8, 136,
    130, 0x2040);

 FUNC_4(VAR_11, VAR_8, 136,
    VAR_2, 0xB);


 FUNC_4(VAR_11, VAR_8, 135,
    VAR_4, 0x30);


 FUNC_4(VAR_11, VAR_8, 135,
    VAR_5, 0x9);


 FUNC_3(VAR_11, VAR_8, 135,
     VAR_3, 0xF9);


 FUNC_4(VAR_11, VAR_8, 135,
    130, 0x4000);
 FUNC_4(VAR_11, VAR_8, 135,
    130, 0x0);

}
