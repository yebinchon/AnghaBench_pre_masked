
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_desc {int dummy; } ;
struct hclge_cmq_ring {int desc_num; int * desc; int desc_dma_addr; } ;


 int FUNC_0 (struct hclge_cmq_ring*) ;
 int FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hclge_cmq_ring *VAR_0)
{
 int VAR_1 = VAR_0->desc_num * sizeof(struct hclge_desc);

 if (VAR_0->desc) {
  FUNC_1(FUNC_0(VAR_0), VAR_1,
      VAR_0->desc, VAR_0->desc_dma_addr);
  VAR_0->desc = ((void*)0);
 }
}
