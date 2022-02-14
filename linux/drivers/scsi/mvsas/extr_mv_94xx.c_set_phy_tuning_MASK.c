
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct phy_tuning {int trans_emp_en; int trans_emp_amp; int trans_amp; int trans_amp_adj; } ;
struct mvs_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int) ;
 int FUNC_2 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_5, int VAR_6,
      struct phy_tuning VAR_7)
{
 u32 VAR_8, VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11;
 if (VAR_5->pdev->revision == VAR_4)
  return;

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {

  switch (VAR_11) {
  case 0:
   VAR_9 = VAR_1;
   VAR_10 = VAR_0;
   break;
  case 1:
   VAR_9 = VAR_0;
   VAR_10 = VAR_2;
   break;
  case 2:
   VAR_9 = VAR_2;
   VAR_10 = VAR_3;
   break;
  }







  FUNC_1(VAR_5, VAR_6, VAR_9);
  VAR_8 = FUNC_0(VAR_5, VAR_6);
  VAR_8 &= ~(0xFBE << 16);
  VAR_8 |= (((VAR_7.trans_emp_en << 11) |
   (VAR_7.trans_emp_amp << 7) |
   (VAR_7.trans_amp << 1)) << 16);
  FUNC_2(VAR_5, VAR_6, VAR_8);


  FUNC_1(VAR_5, VAR_6, VAR_10);
  VAR_8 = FUNC_0(VAR_5, VAR_6);
  VAR_8 &= ~(0xC000);
  VAR_8 |= (VAR_7.trans_amp_adj << 14);
  FUNC_2(VAR_5, VAR_6, VAR_8);
 }
}
