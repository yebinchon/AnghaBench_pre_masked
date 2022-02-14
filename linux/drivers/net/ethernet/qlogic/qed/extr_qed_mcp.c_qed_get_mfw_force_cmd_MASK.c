
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_load_req_force { ____Placeholder_qed_load_req_force } qed_load_req_force ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_3,

      enum qed_load_req_force VAR_4,
      u8 *VAR_5)
{
 switch (VAR_4) {
 case 129:
  *VAR_5 = VAR_1;
  break;
 case 128:
  *VAR_5 = VAR_2;
  break;
 case 130:
  *VAR_5 = VAR_0;
  break;
 }
}
