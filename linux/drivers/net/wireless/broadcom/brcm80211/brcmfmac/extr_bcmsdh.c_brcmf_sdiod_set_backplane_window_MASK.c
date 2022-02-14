
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_sdio_dev {int sbwad; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_sdio_dev*,scalar_t__,int,int*) ;

__attribute__((used)) static int FUNC_1(struct brcmf_sdio_dev *VAR_2,
         u32 VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_3 & VAR_1;
 int VAR_6 = 0, VAR_7;

 if (VAR_5 == VAR_2->sbwad)
  return 0;

 VAR_4 = VAR_5 >> 8;

 for (VAR_7 = 0 ; VAR_7 < 3 && !VAR_6 ; VAR_7++, VAR_4 >>= 8)
  FUNC_0(VAR_2, VAR_0 + VAR_7,
       VAR_4 & 0xff, &VAR_6);

 if (!VAR_6)
  VAR_2->sbwad = VAR_5;

 return VAR_6;
}
