
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_txstatus {int frame_count; int rts_count; int supp_reason; int pm_indicated; int intermediate; int for_ampdu; int acked; int phy_stat; void* seq; void* cookie; } ;
struct b43legacy_hwtxstatus {int count; int flags; int phy_stat; int seq; int cookie; } ;


 int FUNC_0 (struct b43legacy_wldev*,struct b43legacy_txstatus*) ;
 void* FUNC_1 (int ) ;

void FUNC_2(struct b43legacy_wldev *VAR_0,
     const struct b43legacy_hwtxstatus *VAR_1)
{
 struct b43legacy_txstatus VAR_2;
 u8 VAR_3;

 VAR_2.cookie = FUNC_1(VAR_1->cookie);
 VAR_2.seq = FUNC_1(VAR_1->seq);
 VAR_2.phy_stat = VAR_1->phy_stat;
 VAR_3 = VAR_1->count;
 VAR_2.frame_count = (VAR_3 >> 4);
 VAR_2.rts_count = (VAR_3 & 0x0F);
 VAR_3 = VAR_1->flags << 1;
 VAR_2.supp_reason = ((VAR_3 & 0x1C) >> 2);
 VAR_2.pm_indicated = !!(VAR_3 & 0x80);
 VAR_2.intermediate = !!(VAR_3 & 0x40);
 VAR_2.for_ampdu = !!(VAR_3 & 0x20);
 VAR_2.acked = !!(VAR_3 & 0x02);

 FUNC_0(VAR_0, &VAR_2);
}
