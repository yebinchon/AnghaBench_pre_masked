
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_hw {int dummy; } ;
struct hclge_dev {struct hclge_hw hw; } ;
struct hclge_cmq_ring {scalar_t__ ring_type; int desc_num; struct hclge_dev* dev; int desc_dma_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct hclge_hw*,int ) ;
 int FUNC_1 (struct hclge_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hclge_cmq_ring *VAR_13)
{
 dma_addr_t VAR_14 = VAR_13->desc_dma_addr;
 struct hclge_dev *VAR_15 = VAR_13->dev;
 struct hclge_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17;

 if (VAR_13->ring_type == VAR_12) {
  FUNC_1(VAR_16, VAR_7,
    FUNC_2(VAR_14));
  FUNC_1(VAR_16, VAR_6,
    FUNC_3(VAR_14));
  VAR_17 = FUNC_0(VAR_16, VAR_8);
  VAR_17 &= VAR_11;
  VAR_17 |= VAR_13->desc_num >> VAR_0;
  FUNC_1(VAR_16, VAR_8, VAR_17);
  FUNC_1(VAR_16, VAR_9, 0);
  FUNC_1(VAR_16, VAR_10, 0);
 } else {
  FUNC_1(VAR_16, VAR_2,
    FUNC_2(VAR_14));
  FUNC_1(VAR_16, VAR_1,
    FUNC_3(VAR_14));
  FUNC_1(VAR_16, VAR_3,
    VAR_13->desc_num >> VAR_0);
  FUNC_1(VAR_16, VAR_4, 0);
  FUNC_1(VAR_16, VAR_5, 0);
 }
}
