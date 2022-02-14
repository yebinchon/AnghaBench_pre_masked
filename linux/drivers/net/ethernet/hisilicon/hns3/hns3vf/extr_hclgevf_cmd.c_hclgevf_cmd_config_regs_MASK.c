
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclgevf_hw {int dummy; } ;
struct hclgevf_dev {struct hclgevf_hw hw; } ;
struct hclgevf_cmq_ring {scalar_t__ flag; int desc_dma_addr; int desc_num; struct hclgevf_dev* dev; } ;


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
 int FUNC_0 (struct hclgevf_hw*,int ) ;
 int FUNC_1 (struct hclgevf_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hclgevf_cmq_ring *VAR_13)
{
 struct hclgevf_dev *VAR_14 = VAR_13->dev;
 struct hclgevf_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16;

 if (VAR_13->flag == VAR_12) {
  VAR_16 = (u32)VAR_13->desc_dma_addr;
  FUNC_1(VAR_15, VAR_7, VAR_16);
  VAR_16 = (u32)((VAR_13->desc_dma_addr >> 31) >> 1);
  FUNC_1(VAR_15, VAR_6, VAR_16);

  VAR_16 = FUNC_0(VAR_15, VAR_8);
  VAR_16 &= VAR_11;
  VAR_16 |= (VAR_13->desc_num >> VAR_0);
  FUNC_1(VAR_15, VAR_8, VAR_16);

  FUNC_1(VAR_15, VAR_9, 0);
  FUNC_1(VAR_15, VAR_10, 0);
 } else {
  VAR_16 = (u32)VAR_13->desc_dma_addr;
  FUNC_1(VAR_15, VAR_2, VAR_16);
  VAR_16 = (u32)((VAR_13->desc_dma_addr >> 31) >> 1);
  FUNC_1(VAR_15, VAR_1, VAR_16);

  VAR_16 = (VAR_13->desc_num >> VAR_0);
  FUNC_1(VAR_15, VAR_3, VAR_16);

  FUNC_1(VAR_15, VAR_4, 0);
  FUNC_1(VAR_15, VAR_5, 0);
 }
}
