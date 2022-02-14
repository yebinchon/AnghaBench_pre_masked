
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76_tx_status {int valid; int success; int aggr; int ack_req; void* rate; void* wcid; void* pktid; } ;
struct mt7601u_dev {int dummy; } ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mt7601u_dev*,int ) ;

struct mt76_tx_status FUNC_2(struct mt7601u_dev *VAR_8)
{
 struct mt76_tx_status VAR_9 = {};
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_0);
 VAR_9.valid = !!(VAR_10 & VAR_6);
 VAR_9.success = !!(VAR_10 & VAR_5);
 VAR_9.aggr = !!(VAR_10 & VAR_2);
 VAR_9.ack_req = !!(VAR_10 & VAR_1);
 VAR_9.pktid = FUNC_0(VAR_3, VAR_10);
 VAR_9.wcid = FUNC_0(VAR_7, VAR_10);
 VAR_9.rate = FUNC_0(VAR_4, VAR_10);

 return VAR_9;
}
