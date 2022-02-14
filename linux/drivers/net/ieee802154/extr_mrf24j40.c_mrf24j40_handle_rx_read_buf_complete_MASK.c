
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mrf24j40 {int * rx_lqi_buf; int hw; int rx_fifo_buf; int * rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct mrf24j40*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int,int,int *,int ,int ) ;
 int FUNC_7 (struct mrf24j40*) ;
 int FUNC_8 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_4)
{
 struct mrf24j40 *VAR_5 = VAR_4;
 u8 VAR_6 = VAR_5->rx_buf[2];
 u8 VAR_7[VAR_3];
 struct sk_buff *VAR_8;

 FUNC_3(VAR_7, VAR_5->rx_fifo_buf, VAR_6);
 FUNC_4(VAR_5);

 VAR_8 = FUNC_0(VAR_1);
 if (!VAR_8) {
  FUNC_1(FUNC_7(VAR_5), "failed to allocate skb\n");
  return;
 }

 FUNC_8(VAR_8, VAR_7, VAR_6);
 FUNC_2(VAR_5->hw, VAR_8, 0);







}
