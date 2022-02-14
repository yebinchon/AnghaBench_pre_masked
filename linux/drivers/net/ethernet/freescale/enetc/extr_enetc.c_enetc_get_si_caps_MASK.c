
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct enetc_hw {int dummy; } ;
struct enetc_si {int num_rx_rings; int num_tx_rings; int num_rss; int num_fs_entries; struct enetc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct enetc_hw*,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct enetc_si *VAR_6)
{
 struct enetc_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;


 VAR_8 = FUNC_2(VAR_7, VAR_1);
 VAR_6->num_rx_rings = (VAR_8 >> 16) & 0xff;
 VAR_6->num_tx_rings = VAR_8 & 0xff;

 VAR_8 = FUNC_2(VAR_7, VAR_4);
 VAR_6->num_fs_entries = FUNC_0(VAR_8);
 VAR_6->num_fs_entries = FUNC_3(VAR_6->num_fs_entries, VAR_0);

 VAR_6->num_rss = 0;
 VAR_8 = FUNC_2(VAR_7, VAR_2);
 if (VAR_8 & VAR_3) {
  VAR_8 = FUNC_2(VAR_7, VAR_5);
  VAR_6->num_rss = FUNC_1(VAR_8);
 }
}
