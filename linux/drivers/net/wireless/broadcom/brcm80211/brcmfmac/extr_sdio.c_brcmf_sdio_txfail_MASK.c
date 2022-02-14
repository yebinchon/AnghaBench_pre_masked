
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcmf_sdio_dev {int func2; } ;
struct TYPE_2__ {scalar_t__ f1regdata; int tx_sderrs; } ;
struct brcmf_sdio {TYPE_1__ sdcnt; struct brcmf_sdio_dev* sdiodev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_2 (struct brcmf_sdio_dev*,int ,int *) ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct brcmf_sdio *VAR_4)
{
 struct brcmf_sdio_dev *VAR_5 = VAR_4->sdiodev;
 u8 VAR_6, VAR_7, VAR_8;


 FUNC_0("sdio error, abort command and terminate frame\n");
 VAR_4->sdcnt.tx_sderrs++;

 FUNC_1(VAR_5, VAR_5->func2);
 FUNC_3(VAR_5, VAR_0, VAR_3, ((void*)0));
 VAR_4->sdcnt.f1regdata++;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_7 = FUNC_2(VAR_5, VAR_1, ((void*)0));
  VAR_8 = FUNC_2(VAR_5, VAR_2, ((void*)0));
  VAR_4->sdcnt.f1regdata += 2;
  if ((VAR_7 == 0) && (VAR_8 == 0))
   break;
 }
}
