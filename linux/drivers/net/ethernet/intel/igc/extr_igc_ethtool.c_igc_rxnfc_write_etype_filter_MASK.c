
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int etype; } ;
struct igc_nfc_filter {int action; size_t etype_reg_index; TYPE_2__ filter; } ;
struct igc_hw {int dummy; } ;
struct igc_adapter {int* etype_bitmap; TYPE_1__* pdev; struct igc_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct igc_adapter *VAR_8,
     struct igc_nfc_filter *VAR_9)
{
 struct igc_hw *VAR_10 = &VAR_8->hw;
 u8 VAR_11;
 u32 VAR_12;
 u16 VAR_13;


 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  if (!VAR_8->etype_bitmap[VAR_11])
   break;
 }
 if (VAR_11 == VAR_7) {
  FUNC_1(&VAR_8->pdev->dev, "ethtool -N: etype filters are all used.\n");
  return -VAR_0;
 }

 VAR_8->etype_bitmap[VAR_11] = 1;

 VAR_12 = FUNC_3(FUNC_0(VAR_11));
 VAR_13 = FUNC_2(VAR_9->filter.etype & VAR_1);

 VAR_12 |= VAR_3;
 VAR_12 &= ~VAR_2;
 VAR_12 |= (VAR_13 & VAR_2);

 VAR_12 &= ~VAR_5;
 VAR_12 |= ((VAR_9->action << VAR_6)
  & VAR_5);
 VAR_12 |= VAR_4;

 FUNC_4(FUNC_0(VAR_11), VAR_12);

 VAR_9->etype_reg_index = VAR_11;

 return 0;
}
