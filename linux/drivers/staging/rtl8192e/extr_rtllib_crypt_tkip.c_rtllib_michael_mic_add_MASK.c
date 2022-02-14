
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; int len; int dev; } ;
struct rtllib_tkip_data {int* tx_hdr; int * key; int tx_tfm_michael; } ;
struct rtllib_hdr_4addr {int frame_ctl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int*,int*,int,int *) ;
 int FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int * FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, int VAR_1, void *VAR_2)
{
 struct rtllib_tkip_data *VAR_3 = VAR_2;
 u8 *VAR_4;
 struct rtllib_hdr_4addr *VAR_5;

 VAR_5 = (struct rtllib_hdr_4addr *) VAR_0->data;

 if (FUNC_6(VAR_0) < 8 || VAR_0->len < VAR_1) {
  FUNC_4(VAR_0->dev,
      "Invalid packet for Michael MIC add (tailroom=%d hdr_len=%d skb->len=%d)\n",
      FUNC_6(VAR_0), VAR_1, VAR_0->len);
  return -1;
 }

 FUNC_3(VAR_0, VAR_3->tx_hdr);

 if (FUNC_0(FUNC_1(VAR_5->frame_ctl)))
  VAR_3->tx_hdr[12] = *(VAR_0->data + VAR_1 - 2) & 0x07;
 VAR_4 = FUNC_5(VAR_0, 8);
 if (FUNC_2(VAR_3->tx_tfm_michael, &VAR_3->key[16], VAR_3->tx_hdr,
     VAR_0->data + VAR_1, VAR_0->len - 8 - VAR_1, VAR_4))
  return -1;

 return 0;
}
