
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_tx_status {int valid; int success; int aggr; int ack_req; void* pktid; void* retry; void* rate; void* wcid; } ;
struct mt76x02_dev {int dummy; } ;


 void* FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,struct mt76x02_tx_status*) ;

bool FUNC_3(struct mt76x02_dev *VAR_10,
    struct mt76x02_tx_status *VAR_11)
{
 u32 VAR_12, VAR_13;

 VAR_13 = FUNC_1(VAR_10, VAR_3);
 VAR_12 = FUNC_1(VAR_10, VAR_0);

 VAR_11->valid = !!(VAR_12 & VAR_8);
 if (!VAR_11->valid)
  return 0;

 VAR_11->success = !!(VAR_12 & VAR_7);
 VAR_11->aggr = !!(VAR_12 & VAR_2);
 VAR_11->ack_req = !!(VAR_12 & VAR_1);
 VAR_11->wcid = FUNC_0(VAR_9, VAR_12);
 VAR_11->rate = FUNC_0(VAR_6, VAR_12);

 VAR_11->retry = FUNC_0(VAR_5, VAR_13);
 VAR_11->pktid = FUNC_0(VAR_4, VAR_13);

 FUNC_2(VAR_10, VAR_11);

 return 1;
}
