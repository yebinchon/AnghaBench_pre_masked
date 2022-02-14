
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct sk_buff {int data; } ;
struct brcmf_sdio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct brcmf_sdio_dev*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(struct brcmf_sdio_dev *VAR_1, u8 *VAR_2, uint VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4) {
  FUNC_0("brcmu_pkt_buf_get_skb failed: len %d\n",
     VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (!VAR_5)
  FUNC_4(VAR_2, VAR_4->data, VAR_3);

 FUNC_2(VAR_4);
 return VAR_5;
}
