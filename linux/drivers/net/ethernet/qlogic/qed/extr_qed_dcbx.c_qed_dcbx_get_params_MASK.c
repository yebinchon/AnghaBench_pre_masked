
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
struct qed_dcbx_get {int dummy; } ;
typedef enum qed_mib_read_type { ____Placeholder_qed_mib_read_type } qed_mib_read_type ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;





 int FUNC_1 (struct qed_hwfn*,struct qed_dcbx_get*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_dcbx_get*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_dcbx_get*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_dcbx_get*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_dcbx_get*) ;

__attribute__((used)) static int
FUNC_6(struct qed_hwfn *VAR_1, struct qed_dcbx_get *VAR_2,
      enum qed_mib_read_type VAR_3)
{
 switch (VAR_3) {
 case 128:
  FUNC_5(VAR_1, VAR_2);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_2);
  break;
 case 130:
  FUNC_3(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_4(VAR_1, VAR_2);
  break;
 case 132:
  FUNC_1(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_1, "MIB read err, unknown mib type %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
