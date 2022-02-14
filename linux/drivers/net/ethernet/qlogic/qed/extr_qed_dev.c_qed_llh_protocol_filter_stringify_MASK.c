
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_dev {int dummy; } ;
typedef enum qed_llh_prot_filter_type_t { ____Placeholder_qed_llh_prot_filter_type_t } qed_llh_prot_filter_type_t ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;







 int FUNC_1 (int *,size_t,char*,int,...) ;

__attribute__((used)) static int
FUNC_2(struct qed_dev *VAR_1,
      enum qed_llh_prot_filter_type_t VAR_2,
      u16 VAR_3,
      u16 VAR_4, u8 *VAR_5, size_t VAR_6)
{
 switch (VAR_2) {
 case 134:
  FUNC_1(VAR_5, VAR_6, "Ethertype 0x%04x",
    VAR_3);
  break;
 case 131:
  FUNC_1(VAR_5, VAR_6, "TCP src port 0x%04x",
    VAR_3);
  break;
 case 128:
  FUNC_1(VAR_5, VAR_6, "UDP src port 0x%04x",
    VAR_3);
  break;
 case 133:
  FUNC_1(VAR_5, VAR_6, "TCP dst port 0x%04x", VAR_4);
  break;
 case 130:
  FUNC_1(VAR_5, VAR_6, "UDP dst port 0x%04x", VAR_4);
  break;
 case 132:
  FUNC_1(VAR_5, VAR_6, "TCP src/dst ports 0x%04x/0x%04x",
    VAR_3, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_5, VAR_6, "UDP src/dst ports 0x%04x/0x%04x",
    VAR_3, VAR_4);
  break;
 default:
  FUNC_0(VAR_1,
     "Non valid LLH protocol filter type %d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
