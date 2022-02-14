
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rel_pf_id; struct qed_dev* cdev; } ;
struct qed_dev {int num_ports_in_engine; int ppfid_bitmap; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_1,
       struct qed_ptt *VAR_2)
{
 struct qed_dev *VAR_3 = VAR_1->cdev;
 u8 VAR_4;
 int VAR_5;


 if (FUNC_1(VAR_3))
  VAR_4 = VAR_1->rel_pf_id;
 else
  VAR_4 = VAR_1->rel_pf_id /
      VAR_3->num_ports_in_engine;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5 != 0 && VAR_5 != -VAR_0)
  return VAR_5;
 else if (VAR_5 == -VAR_0)
  VAR_3->ppfid_bitmap = 0x1 << VAR_4;

 if (!(VAR_3->ppfid_bitmap & (0x1 << VAR_4))) {
  FUNC_0(VAR_1,
   "Fix the PPFID bitmap to include the native PPFID [native_ppfid_idx %hhd, orig_bitmap 0x%hhx]\n",
   VAR_4, VAR_3->ppfid_bitmap);
  VAR_3->ppfid_bitmap = 0x1 << VAR_4;
 }

 return 0;
}
