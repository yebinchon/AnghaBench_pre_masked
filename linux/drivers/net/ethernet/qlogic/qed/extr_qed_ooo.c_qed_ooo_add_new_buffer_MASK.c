
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ooo_isle {int buffers_list; } ;
struct qed_ooo_info {int dummy; } ;
struct qed_ooo_buffer {int list_entry; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct qed_ooo_isle* FUNC_3 (struct qed_hwfn*,struct qed_ooo_info*,int ,scalar_t__) ;

void FUNC_4(struct qed_hwfn *VAR_1,
       struct qed_ooo_info *VAR_2,
       u32 VAR_3,
       u8 VAR_4,
       struct qed_ooo_buffer *VAR_5, u8 VAR_6)
{
 struct qed_ooo_isle *VAR_7 = ((void*)0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_0(VAR_1,
     "Isle %d is not found(cid %d)\n", VAR_4, VAR_3);
  return;
 }

 if (VAR_6 == VAR_0)
  FUNC_1(&VAR_5->list_entry, &VAR_7->buffers_list);
 else
  FUNC_2(&VAR_5->list_entry, &VAR_7->buffers_list);
}
