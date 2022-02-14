
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct rxts {int ns; int msgtype; int hash; scalar_t__ tmo; int seqid; } ;
struct phy_rxts {int sec_lo; int sec_hi; int ns_lo; int ns_hi; int msgtype; int seqid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct phy_rxts *VAR_2, struct rxts *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2->sec_lo;
 VAR_4 |= VAR_2->sec_hi << 16;

 VAR_3->ns = VAR_2->ns_lo;
 VAR_3->ns |= (VAR_2->ns_hi & 0x3fff) << 16;
 VAR_3->ns += ((u64)VAR_4) * 1000000000ULL;
 VAR_3->seqid = VAR_2->seqid;
 VAR_3->msgtype = (VAR_2->msgtype >> 12) & 0xf;
 VAR_3->hash = VAR_2->msgtype & 0x0fff;
 VAR_3->tmo = VAR_1 + VAR_0;
}
