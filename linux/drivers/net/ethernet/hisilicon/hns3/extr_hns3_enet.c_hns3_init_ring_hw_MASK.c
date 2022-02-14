
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns3_enet_ring {int desc_dma_addr; int desc_num; int buf_size; struct hnae3_queue* tqp; } ;
struct hnae3_queue {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct hns3_enet_ring*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hnae3_queue*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_ring *VAR_7)
{
 dma_addr_t VAR_8 = VAR_7->desc_dma_addr;
 struct hnae3_queue *VAR_9 = VAR_7->tqp;

 if (!FUNC_0(VAR_7)) {
  FUNC_2(VAR_9, VAR_1, (u32)VAR_8);
  FUNC_2(VAR_9, VAR_0,
          (u32)((VAR_8 >> 31) >> 1));

  FUNC_2(VAR_9, VAR_2,
          FUNC_1(VAR_7->buf_size));
  FUNC_2(VAR_9, VAR_3,
          VAR_7->desc_num / 8 - 1);

 } else {
  FUNC_2(VAR_9, VAR_5,
          (u32)VAR_8);
  FUNC_2(VAR_9, VAR_4,
          (u32)((VAR_8 >> 31) >> 1));

  FUNC_2(VAR_9, VAR_6,
          VAR_7->desc_num / 8 - 1);
 }
}
