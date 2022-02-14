
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_reg_set {int member_1; int member_2; int val; int reg; int const devad; int const member_0; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x_reg_set*) ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int) ;
 scalar_t__ FUNC_4 (struct bnx2x_phy*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_8,
    struct bnx2x_phy *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12, VAR_13;
 static struct bnx2x_reg_set VAR_14[] = {
  {133, 132, 0x0080},
  {133, 131, 0x0018},
  {133, 130, 0x0006},
  {133, 128,
   129},
  {134, 0xFFFB, 0xFFFD}
 };

 if (VAR_9->type == VAR_7) {

  FUNC_3(VAR_8, VAR_9,
     133,
     VAR_1,
     0x90);
  VAR_11 = 0x000f;
 } else {
  VAR_11 = 0x0000;
 }

 FUNC_3(VAR_8, VAR_9,
    133,
    VAR_0,
    VAR_11);


 FUNC_1(VAR_8, VAR_9,
   133,
   VAR_2, &VAR_10);
 VAR_10 &= 0xFE00;
 VAR_10 |= 0x0092;

 if (VAR_9->type == VAR_7)
  VAR_10 |= 2 << 12;

 FUNC_3(VAR_8, VAR_9,
    133,
    VAR_2, VAR_10);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_14); VAR_13++)
  FUNC_3(VAR_8, VAR_9, VAR_14[VAR_13].devad, VAR_14[VAR_13].reg,
     VAR_14[VAR_13].val);

 if (FUNC_4(VAR_9))
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_3;

 if (VAR_9->type == VAR_7)
  VAR_10 = VAR_6 |
        VAR_4;
 else
  VAR_10 = VAR_4;


 FUNC_2(VAR_8, VAR_9,
     133,
     VAR_12,
     VAR_10);
}
