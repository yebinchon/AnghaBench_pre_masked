
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclgevf_desc {int dummy; } ;
struct hclgevf_cmq_ring {int desc_num; int desc; int desc_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclgevf_cmq_ring*) ;
 int FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_cmq_ring *VAR_2)
{
 int VAR_3 = VAR_2->desc_num * sizeof(struct hclgevf_desc);

 VAR_2->desc = FUNC_1(FUNC_0(VAR_2), VAR_3,
     &VAR_2->desc_dma_addr, VAR_1);
 if (!VAR_2->desc)
  return -VAR_0;

 return 0;
}
