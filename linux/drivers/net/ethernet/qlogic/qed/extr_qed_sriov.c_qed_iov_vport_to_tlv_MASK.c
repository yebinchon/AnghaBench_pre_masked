
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_iov_vport_update_flag { ____Placeholder_qed_iov_vport_update_flag } qed_iov_vport_update_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static u16 FUNC_0(struct qed_hwfn *VAR_8,
    enum qed_iov_vport_update_flag VAR_9)
{
 switch (VAR_9) {
 case 133:
  return VAR_2;
 case 128:
  return VAR_7;
 case 129:
  return VAR_6;
 case 132:
  return VAR_3;
 case 134:
  return VAR_1;
 case 131:
  return VAR_4;
 case 135:
  return VAR_0;
 case 130:
  return VAR_5;
 default:
  return 0;
 }
}
