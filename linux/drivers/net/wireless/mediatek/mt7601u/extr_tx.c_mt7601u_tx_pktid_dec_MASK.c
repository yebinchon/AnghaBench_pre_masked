
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76_tx_status {int pktid; int rate; int is_probe; int retry; } ;
struct mt7601u_dev {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct mt7601u_dev *VAR_0, struct mt76_tx_status *VAR_1)
{
 u8 VAR_2 = VAR_1->pktid;
 u8 VAR_3 = VAR_1->rate & 0x7;

 VAR_2 -= 1;

 if (VAR_2 > 7) {
  VAR_1->is_probe = 1;
  VAR_2 -= 8;


  if (!VAR_2 && VAR_3)
   VAR_2 = 7;
 }

 VAR_1->retry = VAR_2 - VAR_3;
}
