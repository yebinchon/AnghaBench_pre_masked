
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_hw {int max_dma_chnl; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alx_hw*) ;

__attribute__((used)) static int FUNC_1(struct alx_priv *VAR_3)
{
 struct alx_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = FUNC_0(VAR_4);

 if (VAR_5 > VAR_1)
  return -VAR_2;

 VAR_4->max_dma_chnl = VAR_5 >= VAR_0 ? 4 : 2;

 return 0;
}
