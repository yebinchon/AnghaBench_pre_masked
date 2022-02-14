
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; scalar_t__ cb; } ;
struct mt76_rx_status {int* iv; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int*,int*,int) ;

void FUNC_3(struct sk_buff *VAR_1, u8 VAR_2)
{
 struct mt76_rx_status *VAR_3 = (struct mt76_rx_status *)VAR_1->cb;
 int VAR_4 = FUNC_1(VAR_1);
 u8 *VAR_5, *VAR_6 = VAR_3->iv;

 FUNC_0(VAR_1, 8);
 FUNC_2(VAR_1->data, VAR_1->data + 8, VAR_4);
 VAR_5 = VAR_1->data + VAR_4;

 VAR_5[0] = VAR_6[5];
 VAR_5[1] = VAR_6[4];
 VAR_5[2] = 0;
 VAR_5[3] = 0x20 | (VAR_2 << 6);
 VAR_5[4] = VAR_6[3];
 VAR_5[5] = VAR_6[2];
 VAR_5[6] = VAR_6[1];
 VAR_5[7] = VAR_6[0];

 VAR_3->flag &= ~VAR_0;
}
