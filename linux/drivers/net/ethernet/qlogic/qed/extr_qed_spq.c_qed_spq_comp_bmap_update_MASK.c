
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_spq {int chain; int comp_bitmap_idx; int p_comp_bitmap; } ;
struct qed_hwfn {struct qed_spq* p_spq; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_1, __le16 VAR_2)
{
 u16 VAR_3 = FUNC_2(VAR_2) % VAR_0;
 struct qed_spq *VAR_4 = VAR_1->p_spq;

 FUNC_1(VAR_3, VAR_4->p_comp_bitmap);
 while (FUNC_4(VAR_4->comp_bitmap_idx,
   VAR_4->p_comp_bitmap)) {
  FUNC_0(VAR_4->comp_bitmap_idx,
       VAR_4->p_comp_bitmap);
  VAR_4->comp_bitmap_idx++;
  FUNC_3(&VAR_4->chain);
 }
}
