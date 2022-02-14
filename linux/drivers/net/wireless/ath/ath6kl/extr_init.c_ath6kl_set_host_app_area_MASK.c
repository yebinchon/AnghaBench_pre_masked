
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct host_app_area {int wmi_protocol_ver; } ;
struct ath6kl {int target_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ath6kl*,int ,int *) ;
 scalar_t__ FUNC_3 (struct ath6kl*,int ,int *,int) ;
 int FUNC_4 (struct ath6kl*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_3)
{
 u32 VAR_4, VAR_5;
 struct host_app_area VAR_6;



 VAR_4 = FUNC_4(VAR_3, FUNC_0(VAR_2));
 VAR_4 = FUNC_1(VAR_3->target_type, VAR_4);

 if (FUNC_2(VAR_3, VAR_4, &VAR_5))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->target_type, VAR_5);
 VAR_6.wmi_protocol_ver = FUNC_5(VAR_1);
 if (FUNC_3(VAR_3, VAR_4, (u8 *) &VAR_6,
         sizeof(struct host_app_area)))
  return -VAR_0;

 return 0;
}
