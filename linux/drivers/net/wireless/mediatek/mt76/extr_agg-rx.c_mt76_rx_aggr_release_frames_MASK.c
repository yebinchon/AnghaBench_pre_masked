
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct mt76_rx_tid {int head; int size; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct mt76_rx_tid*,struct sk_buff_head*,int) ;

__attribute__((used)) static void
FUNC_2(struct mt76_rx_tid *VAR_0,
       struct sk_buff_head *VAR_1,
       u16 VAR_2)
{
 int VAR_3;

 while (FUNC_0(VAR_0->head, VAR_2)) {
  VAR_3 = VAR_0->head % VAR_0->size;
  FUNC_1(VAR_0, VAR_1, VAR_3);
 }
}
