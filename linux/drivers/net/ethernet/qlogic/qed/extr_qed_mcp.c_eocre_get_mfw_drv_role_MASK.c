
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_drv_role { ____Placeholder_qed_drv_role } qed_drv_role ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static int FUNC_1(struct qed_hwfn *VAR_3,
      enum qed_drv_role VAR_4,
      u8 *VAR_5)
{
 switch (VAR_4) {
 case 128:
  *VAR_5 = VAR_1;
  break;
 case 129:
  *VAR_5 = VAR_0;
  break;
 default:
  FUNC_0(VAR_3, "Unexpected driver role %d\n", VAR_4);
  return -VAR_2;
 }

 return 0;
}
