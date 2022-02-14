
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int desc_num; int * desc; scalar_t__ desc_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct hnae_ring*) ;
 int FUNC_5 (struct hnae_ring*) ;

__attribute__((used)) static int FUNC_6(struct hnae_ring *VAR_2)
{
 int VAR_3 = VAR_2->desc_num * sizeof(VAR_2->desc[0]);

 VAR_2->desc = FUNC_3(VAR_3, VAR_1);
 if (!VAR_2->desc)
  return -VAR_0;

 VAR_2->desc_dma_addr = FUNC_0(FUNC_4(VAR_2),
  VAR_2->desc, VAR_3, FUNC_5(VAR_2));
 if (FUNC_1(FUNC_4(VAR_2), VAR_2->desc_dma_addr)) {
  VAR_2->desc_dma_addr = 0;
  FUNC_2(VAR_2->desc);
  VAR_2->desc = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
