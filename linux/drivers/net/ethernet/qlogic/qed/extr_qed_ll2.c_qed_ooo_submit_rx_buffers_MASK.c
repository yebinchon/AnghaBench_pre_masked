
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ooo_buffer {int rx_buffer_phys_addr; } ;
struct qed_ll2_info {int my_id; } ;
struct qed_hwfn {int p_ooo_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,int ,int ,struct qed_ooo_buffer*,int) ;
 struct qed_ooo_buffer* FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_ooo_buffer*) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_0,
     struct qed_ll2_info *VAR_1)
{
 struct qed_ooo_buffer *VAR_2;
 int VAR_3;

 while ((VAR_2 = FUNC_1(VAR_0,
         VAR_0->p_ooo_info))) {
  VAR_3 = FUNC_0(VAR_0,
         VAR_1->my_id,
         VAR_2->rx_buffer_phys_addr,
         0, VAR_2, 1);
  if (VAR_3) {
   FUNC_2(VAR_0,
      VAR_0->p_ooo_info, VAR_2);
   break;
  }
 }
}
