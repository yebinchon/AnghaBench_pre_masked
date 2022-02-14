
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct sdio_func {int dummy; } ;
struct brcmf_sdio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_1 (struct sdio_func*,int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct brcmf_sdio_dev *VAR_2,
        struct sdio_func *VAR_3, u32 VAR_4,
        struct sk_buff *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;


 VAR_6 = VAR_5->len + 3;
 VAR_6 &= (uint)~3;

 VAR_7 = FUNC_1(VAR_3, VAR_4, ((u8 *)(VAR_5->data)), VAR_6);

 if (VAR_7 == -VAR_1)
  FUNC_0(VAR_2, VAR_0);

 return VAR_7;
}
