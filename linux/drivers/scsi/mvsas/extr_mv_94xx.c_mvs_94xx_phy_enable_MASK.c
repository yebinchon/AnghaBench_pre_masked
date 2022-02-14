
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct mvs_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvs_info*,int) ;
 int FUNC_2 (struct mvs_info*,int,int ) ;
 int FUNC_3 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_4(struct mvs_info *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u8 VAR_8 = 0;

 VAR_8 = VAR_5->pdev->revision;
 if (VAR_8 == VAR_2) {
  FUNC_2(VAR_5, VAR_6, VAR_1);
  FUNC_3(VAR_5, VAR_6, 0x8300ffc1);
 }
 if (VAR_8 == VAR_3) {
  FUNC_2(VAR_5, VAR_6, VAR_0);
  FUNC_3(VAR_5, VAR_6, 0x08001006);
  FUNC_2(VAR_5, VAR_6, VAR_1);
  FUNC_3(VAR_5, VAR_6, 0x0000705f);
 }

 FUNC_2(VAR_5, VAR_6, VAR_4);
 VAR_7 = FUNC_1(VAR_5, VAR_6);
 VAR_7 |= FUNC_0(0);
 FUNC_3(VAR_5, VAR_6, VAR_7 & 0xfd7fffff);
}
