
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ipw_priv {int dummy; } ;
struct clx2_queue {int n_bd; int low_mark; int high_mark; int dma_addr; void* reg_w; void* reg_r; scalar_t__ last_used; scalar_t__ first_empty; } ;


 int FUNC_0 (struct ipw_priv*,int) ;
 int FUNC_1 (struct ipw_priv*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_0, struct clx2_queue *VAR_1,
      int VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 VAR_1->n_bd = VAR_2;

 VAR_1->low_mark = VAR_1->n_bd / 4;
 if (VAR_1->low_mark < 4)
  VAR_1->low_mark = 4;

 VAR_1->high_mark = VAR_1->n_bd / 8;
 if (VAR_1->high_mark < 2)
  VAR_1->high_mark = 2;

 VAR_1->first_empty = VAR_1->last_used = 0;
 VAR_1->reg_r = VAR_3;
 VAR_1->reg_w = VAR_4;

 FUNC_1(VAR_0, VAR_5, VAR_1->dma_addr);
 FUNC_1(VAR_0, VAR_6, VAR_2);
 FUNC_1(VAR_0, VAR_3, 0);
 FUNC_1(VAR_0, VAR_4, 0);

 FUNC_0(VAR_0, 0x90);
}
