
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {size_t* rss_indir_tbl; struct ixgbe_hw hw; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct ixgbe_hw*,int ,size_t) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_3 (struct ixgbe_adapter*) ;

void FUNC_4(struct ixgbe_adapter *VAR_1)
{
 u32 VAR_2, VAR_3 = FUNC_3(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_1->hw;
 u32 VAR_5 = 0;
 u32 VAR_6;
 u8 *VAR_7 = VAR_1->rss_indir_tbl;







 if (VAR_1->hw.mac.type == VAR_0)
  VAR_6 = 0x11;
 else
  VAR_6 = 0x1;


 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_5 |= VAR_6 * VAR_7[VAR_2] << (VAR_2 & 0x3) * 8;
  if ((VAR_2 & 3) == 3) {
   if (VAR_2 < 128)
    FUNC_2(VAR_4, FUNC_1(VAR_2 >> 2), VAR_5);
   else
    FUNC_2(VAR_4, FUNC_0((VAR_2 >> 2) - 32),
      VAR_5);
   VAR_5 = 0;
  }
 }
}
