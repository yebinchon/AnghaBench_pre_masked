
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_hw_s {struct aq_fw_ops const* aq_fw_ops; int fw_ver_actual; int chip_features; } ;
struct aq_fw_ops {int (* init ) (struct aq_hw_s*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aq_fw_ops VAR_4 ;
 struct aq_fw_ops VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct aq_hw_s*,int *) ;
 int FUNC_2 (struct aq_hw_s*,int *) ;
 int FUNC_3 (struct aq_hw_s*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct aq_hw_s*) ;

int FUNC_6(struct aq_hw_s *VAR_6, const struct aq_fw_ops **VAR_7)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_6,
        &VAR_6->chip_features);

 FUNC_1(VAR_6, &VAR_6->fw_ver_actual);

 if (FUNC_4(VAR_1,
       VAR_6->fw_ver_actual) == 0) {
  *VAR_7 = &VAR_4;
 } else if (FUNC_4(VAR_2,
       VAR_6->fw_ver_actual) == 0) {
  *VAR_7 = &VAR_5;
 } else if (FUNC_4(VAR_3,
       VAR_6->fw_ver_actual) == 0) {
  *VAR_7 = &VAR_5;
 } else {
  FUNC_0("Bad FW version detected: %x\n",
     VAR_6->fw_ver_actual);
  return -VAR_0;
 }
 VAR_6->aq_fw_ops = *VAR_7;
 VAR_8 = VAR_6->aq_fw_ops->init(VAR_6);
 return VAR_8;
}
