
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct brcmf_sdio_dev {int func2; TYPE_1__* cc_core; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_2 (struct brcmf_sdio_dev*,int ,int ,struct sk_buff*) ;

int FUNC_3(struct brcmf_sdio_dev *VAR_3, struct sk_buff *VAR_4)
{
 u32 VAR_5 = VAR_3->cc_core->base;
 int VAR_6 = 0;

 FUNC_0(VAR_2, "addr = 0x%x, size = %d\n", VAR_5, VAR_4->len);

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6)
  goto done;

 VAR_5 &= VAR_1;
 VAR_5 |= VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_3->func2, VAR_5, VAR_4);

done:
 return VAR_6;
}
