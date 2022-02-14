
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
struct igc_adapter {int eims_enable_mask; scalar_t__ msix_entries; struct igc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igc_adapter *VAR_9)
{
 struct igc_hw *VAR_10 = &VAR_9->hw;

 if (VAR_9->msix_entries) {
  u32 VAR_11 = VAR_7 | VAR_5 | VAR_6;
  u32 VAR_12 = FUNC_0(VAR_0);

  FUNC_1(VAR_0, VAR_12 | VAR_9->eims_enable_mask);
  VAR_12 = FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_12 | VAR_9->eims_enable_mask);
  FUNC_1(VAR_2, VAR_9->eims_enable_mask);
  FUNC_1(VAR_4, VAR_11);
 } else {
  FUNC_1(VAR_4, VAR_8 | VAR_6);
  FUNC_1(VAR_3, VAR_8 | VAR_6);
 }
}
