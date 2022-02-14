
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_dev {int dummy; } ;
typedef enum qed_llh_prot_filter_type_t { ____Placeholder_qed_llh_prot_filter_type_t } qed_llh_prot_filter_type_t ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;
__attribute__((used)) static int
FUNC_1(struct qed_dev *VAR_1,
    enum qed_llh_prot_filter_type_t VAR_2,
    u16 VAR_3,
    u16 VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 *VAR_5 = 0;
 *VAR_6 = 0;

 switch (VAR_2) {
 case 134:
  *VAR_5 = VAR_3;
  break;
 case 131:
 case 128:
  *VAR_6 = VAR_3 << 16;
  break;
 case 133:
 case 130:
  *VAR_6 = VAR_4;
  break;
 case 132:
 case 129:
  *VAR_6 = (VAR_3 << 16) | VAR_4;
  break;
 default:
  FUNC_0(VAR_1,
     "Non valid LLH protocol filter type %d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
