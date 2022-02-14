
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_sdio_dev {int func1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_1 (int ,int ,int*) ;

u32 FUNC_2(struct brcmf_sdio_dev *VAR_2, u32 VAR_3, int *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_3 &= VAR_1;
 VAR_3 |= VAR_0;

 VAR_5 = FUNC_1(VAR_2->func1, VAR_3, &VAR_6);

out:
 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_5;
}
