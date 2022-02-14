
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,void*,int,int) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_0, u8 VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;
 struct qed_hwfn *VAR_5;

 VAR_4 = VAR_1 % VAR_0->num_hwfns;
 VAR_5 = &VAR_0->hwfns[VAR_4];

 VAR_3 = FUNC_1(VAR_5, VAR_2, 0, 0);
 if (VAR_3) {
  FUNC_0(VAR_0, "Failed to stop RXQ#%02x\n", VAR_1);
  return VAR_3;
 }

 return 0;
}
