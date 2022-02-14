
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ts_common_info {int InactTimer; int SetupTimer; } ;
struct rtllib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rtllib_device *VAR_1,
      struct ts_common_info *VAR_2, u32 VAR_3)
{
 FUNC_0(&VAR_2->SetupTimer);
 FUNC_0(&VAR_2->InactTimer);

 if (VAR_3 != 0)
  FUNC_1(&VAR_2->InactTimer, VAR_0 +
     FUNC_2(VAR_3));
}
