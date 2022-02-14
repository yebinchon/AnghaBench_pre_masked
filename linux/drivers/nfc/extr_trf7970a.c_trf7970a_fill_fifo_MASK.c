
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct trf7970a {int timeout_work; int dev; struct sk_buff* tx_skb; } ;
struct sk_buff {int len; } ;
typedef int prefix ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct trf7970a*,int ,unsigned int*) ;
 int FUNC_5 (struct trf7970a*,int) ;
 int FUNC_6 (struct trf7970a*,struct sk_buff*,unsigned int,unsigned int*,int) ;

__attribute__((used)) static void FUNC_7(struct trf7970a *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_6->tx_skb;
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11;

 VAR_9 = FUNC_4(VAR_6, VAR_3, &VAR_10);
 if (VAR_9) {
  FUNC_5(VAR_6, VAR_9);
  return;
 }

 FUNC_0(VAR_6->dev, "Filling FIFO - fifo_bytes: 0x%x\n", VAR_10);

 VAR_10 &= ~VAR_4;


 VAR_8 = VAR_2 - VAR_10;
 if (!VAR_8) {
  FUNC_3(&VAR_6->timeout_work,
   FUNC_2(VAR_5));
  return;
 }

 VAR_8 = FUNC_1(VAR_7->len, VAR_8);

 VAR_11 = VAR_0 | VAR_1;

 VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_8, &VAR_11, sizeof(VAR_11));
 if (VAR_9)
  FUNC_5(VAR_6, VAR_9);
}
