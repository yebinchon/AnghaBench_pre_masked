
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt7601u_rxwi {int freq_off; } ;
struct mt7601u_dev {int avg_rssi; int bcn_phy_mode; int bcn_freq_off; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct mt7601u_dev *VAR_1, struct mt7601u_rxwi *VAR_2,
     u16 VAR_3, int VAR_4)
{
 VAR_1->bcn_freq_off = VAR_2->freq_off;
 VAR_1->bcn_phy_mode = FUNC_0(VAR_0, VAR_3);
 FUNC_1(&VAR_1->avg_rssi, -VAR_4);
}
