
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {scalar_t__ reg_pm_ctrl3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtsx_pcr*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtsx_pcr *VAR_4, u8 VAR_5)
{

 FUNC_0(VAR_4, VAR_0 + 1, 0xFF, 0);
 FUNC_0(VAR_4, VAR_0 + 2, 0xFF, 0);
 FUNC_0(VAR_4, VAR_0 + 3, 0x01, 0);

 if (VAR_5 == VAR_3)
  FUNC_0(VAR_4, VAR_4->reg_pm_ctrl3,
   VAR_1, VAR_1);

 FUNC_0(VAR_4, VAR_2, 0x03, 0x03);
}
