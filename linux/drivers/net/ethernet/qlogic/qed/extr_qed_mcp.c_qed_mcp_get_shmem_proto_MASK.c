
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct public_func {int config; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_1 ;



 int VAR_2 ;

 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qed_hwfn*,int*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_6,
   struct public_func *VAR_7,
   struct qed_ptt *VAR_8,
   enum qed_pci_personality *VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_7->config & VAR_2) {
 case 131:
  if (!FUNC_1(VAR_0))
   *VAR_9 = VAR_3;
  else if (FUNC_3(VAR_6, VAR_8, VAR_9))
   FUNC_2(VAR_6, VAR_9);
  break;
 case 129:
  *VAR_9 = VAR_5;
  break;
 case 130:
  *VAR_9 = VAR_4;
  break;
 case 128:
  FUNC_0(VAR_6, "RoCE personality is not a valid value!\n");

 default:
  VAR_10 = -VAR_1;
 }

 return VAR_10;
}
