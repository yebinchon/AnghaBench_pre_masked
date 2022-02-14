
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_8,
       struct qed_ptt *VAR_9,
       enum qed_pci_personality *VAR_10)
{
 u32 VAR_11 = 0, VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_9,
    VAR_0, 0, &VAR_11, &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_11 != VAR_2) {
  FUNC_1(VAR_8, VAR_3,
      "MFW lacks support for command; Returns %08x\n",
      VAR_11);
  return -VAR_1;
 }

 switch (VAR_12) {
 case 129:
  *VAR_10 = VAR_4;
  break;
 case 128:
  *VAR_10 = VAR_7;
  break;
 case 130:
  *VAR_10 = VAR_5;
  break;
 case 131:
  *VAR_10 = VAR_6;
  break;
 default:
  FUNC_0(VAR_8,
     "MFW answers GET_PF_RDMA_PROTOCOL but param is %08x\n",
     VAR_12);
  return -VAR_1;
 }

 FUNC_1(VAR_8,
     VAR_3,
     "According to capabilities, L2 personality is %08x [resp %08x param %08x]\n",
     (u32) *VAR_10, VAR_11, VAR_12);
 return 0;
}
