
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int flash_mfg_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;

int FUNC_5(struct qlcnic_adapter *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u32 VAR_9;

 if (FUNC_1(VAR_6))
  return -VAR_0;

 FUNC_4(VAR_6, VAR_1,
         VAR_3);
 FUNC_4(VAR_6, VAR_2,
         VAR_5);
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_8);
 if (VAR_8 == -VAR_0) {
  FUNC_3(VAR_6);
  return VAR_8;
 }

 VAR_6->flash_mfg_id = (VAR_9 & 0xFF);
 FUNC_3(VAR_6);

 return 0;
}
