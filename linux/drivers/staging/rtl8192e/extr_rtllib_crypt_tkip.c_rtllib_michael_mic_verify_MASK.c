
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; int len; scalar_t__ dev; } ;
struct rtllib_tkip_data {int* rx_hdr; int rx_iv16_new; int rx_iv16; int rx_iv32_new; int rx_iv32; int dot11RSNAStatsTKIPLocalMICFailures; int * key; int rx_tfm_michael; int key_set; } ;
struct rtllib_hdr_4addr {int addr2; int frame_ctl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int*,int) ;
 scalar_t__ FUNC_3 (int ,int *,int*,int*,int,int *) ;
 int FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (scalar_t__,char*,int,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,struct rtllib_hdr_4addr*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_0, int VAR_1,
         int VAR_2, void *VAR_3)
{
 struct rtllib_tkip_data *VAR_4 = VAR_3;
 u8 VAR_5[8];
 struct rtllib_hdr_4addr *VAR_6;

 VAR_6 = (struct rtllib_hdr_4addr *) VAR_0->data;

 if (!VAR_4->key_set)
  return -1;

 FUNC_4(VAR_0, VAR_4->rx_hdr);
 if (FUNC_0(FUNC_1(VAR_6->frame_ctl)))
  VAR_4->rx_hdr[12] = *(VAR_0->data + VAR_2 - 2) & 0x07;

 if (FUNC_3(VAR_4->rx_tfm_michael, &VAR_4->key[24], VAR_4->rx_hdr,
   VAR_0->data + VAR_2, VAR_0->len - 8 - VAR_2, VAR_5))
  return -1;

 if (FUNC_2(VAR_5, VAR_0->data + VAR_0->len - 8, 8) != 0) {
  struct rtllib_hdr_4addr *VAR_7;

  VAR_7 = (struct rtllib_hdr_4addr *) VAR_0->data;
  FUNC_5(VAR_0->dev,
      "Michael MIC verification failed for MSDU from %pM keyidx=%d\n",
      VAR_7->addr2, VAR_1);
  FUNC_5(VAR_0->dev, "%d\n",
      FUNC_2(VAR_5, VAR_0->data + VAR_0->len - 8, 8) != 0);
  if (VAR_0->dev) {
   FUNC_6("skb->dev != NULL\n");
   FUNC_7(VAR_0->dev, VAR_7, VAR_1);
  }
  VAR_4->dot11RSNAStatsTKIPLocalMICFailures++;
  return -1;
 }




 VAR_4->rx_iv32 = VAR_4->rx_iv32_new;
 VAR_4->rx_iv16 = VAR_4->rx_iv16_new;

 FUNC_8(VAR_0, VAR_0->len - 8);

 return 0;
}
