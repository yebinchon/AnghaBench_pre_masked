
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_pcr {scalar_t__ reg_pm_ctrl3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rtsx_pcr *VAR_7, u8 VAR_8)
{

 FUNC_0(VAR_7, VAR_1 + 1, VAR_5, 0);
 FUNC_0(VAR_7, VAR_1 + 2, VAR_5, 0);
 FUNC_0(VAR_7, VAR_1 + 3,
    VAR_6, 0);

 if (VAR_8 == VAR_4)
  FUNC_0(VAR_7, VAR_7->reg_pm_ctrl3,
     VAR_2, VAR_2);

 FUNC_0(VAR_7, VAR_3, VAR_0, VAR_0);
}
