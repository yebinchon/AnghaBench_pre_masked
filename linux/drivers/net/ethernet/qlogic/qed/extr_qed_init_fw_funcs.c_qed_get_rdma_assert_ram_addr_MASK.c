
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {int rel_pf_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(struct qed_hwfn *VAR_7, u8 VAR_8)
{
 switch (VAR_8) {
 case 0:
  return VAR_3 + VAR_2 +
      FUNC_2(VAR_7->rel_pf_id);
 case 1:
  return VAR_0 + VAR_2 +
      FUNC_0(VAR_7->rel_pf_id);
 case 2:
  return VAR_4 + VAR_2 +
      FUNC_3(VAR_7->rel_pf_id);
 case 3:
  return VAR_5 + VAR_2 +
      FUNC_4(VAR_7->rel_pf_id);
 case 4:
  return VAR_6 + VAR_2 +
      FUNC_5(VAR_7->rel_pf_id);
 case 5:
  return VAR_1 + VAR_2 +
      FUNC_1(VAR_7->rel_pf_id);

 default:
  return 0;
 }
}
