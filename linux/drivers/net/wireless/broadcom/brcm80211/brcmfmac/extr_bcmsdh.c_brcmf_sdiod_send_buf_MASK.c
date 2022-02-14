
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int data; } ;
struct brcmf_sdio_dev {int func2; TYPE_1__* cc_core; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_2 (struct brcmf_sdio_dev*,int ,int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;

int FUNC_6(struct brcmf_sdio_dev *VAR_3, u8 *VAR_4, uint VAR_5)
{
 struct sk_buff *VAR_6;
 u32 VAR_7 = VAR_3->cc_core->base;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5);

 if (!VAR_6) {
  FUNC_0("brcmu_pkt_buf_get_skb failed: len %d\n",
     VAR_5);
  return -VAR_0;
 }

 FUNC_5(VAR_6->data, VAR_4, VAR_5);

 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (VAR_8)
  goto out;

 VAR_7 &= VAR_2;
 VAR_7 |= VAR_1;

 VAR_8 = FUNC_2(VAR_3, VAR_3->func2, VAR_7, VAR_6);
out:
 FUNC_3(VAR_6);

 return VAR_8;
}
