
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int abs_pf_id; void* num_funcs_on_engine; void* enabled_func_idx; void* rel_pf_id; struct qed_dev* cdev; } ;
struct qed_dev {int num_hwfns; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,void*,int,void*,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 scalar_t__ FUNC_2 (struct qed_dev*) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_4, struct qed_ptt *VAR_5)
{
 u8 VAR_6, VAR_7 = VAR_4->rel_pf_id;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 struct qed_dev *VAR_12 = VAR_4->cdev;

 VAR_6 = FUNC_1(VAR_12) ? VAR_1 : VAR_0;
 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_2);

 if (VAR_8 & 0x1) {
  if (FUNC_2(VAR_12)) {
   if (FUNC_3(VAR_4) && VAR_12->num_hwfns == 1) {
    VAR_6 = 0;
    VAR_10 = 0xaaaa;
   } else {
    VAR_6 = 1;
    VAR_10 = 0x5554;
   }
  } else {
   VAR_6 = 1;
   VAR_10 = 0xfffe;
  }


  VAR_9 = (VAR_8 ^ 0xffffffff) & VAR_10;
  while (VAR_9) {
   if (VAR_9 & 0x1)
    VAR_6++;
   VAR_9 >>= 0x1;
  }


  VAR_11 = (0x1 << VAR_4->abs_pf_id) - 1;
  VAR_9 = VAR_8 & VAR_10 & VAR_11;
  while (VAR_9) {
   if (VAR_9 & 0x1)
    VAR_7--;
   VAR_9 >>= 0x1;
  }
 }

 VAR_4->num_funcs_on_engine = VAR_6;
 VAR_4->enabled_func_idx = VAR_7;

 FUNC_0(VAR_4,
     VAR_3,
     "PF [rel_id %d, abs_id %d] occupies index %d within the %d enabled functions on the engine\n",
     VAR_4->rel_pf_id,
     VAR_4->abs_pf_id,
     VAR_4->enabled_func_idx, VAR_4->num_funcs_on_engine);
}
