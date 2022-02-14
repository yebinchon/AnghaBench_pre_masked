
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_node {int * key_idx; } ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_0,
        struct ath_node *VAR_1,
        bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->key_idx); VAR_3++) {
  if (!VAR_1->key_idx[VAR_3])
   continue;
  FUNC_1(VAR_0, VAR_1->key_idx[VAR_3], VAR_2);
 }
}
