
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int dummy; } ;
struct hnae_desc_cb {int dma; int length; int priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (struct hnae_ring*) ;

__attribute__((used)) static int FUNC_4(struct hnae_ring *VAR_1, struct hnae_desc_cb *VAR_2)
{
 VAR_2->dma = FUNC_0(FUNC_2(VAR_1), VAR_2->priv, 0,
          VAR_2->length, FUNC_3(VAR_1));

 if (FUNC_1(FUNC_2(VAR_1), VAR_2->dma))
  return -VAR_0;

 return 0;
}
