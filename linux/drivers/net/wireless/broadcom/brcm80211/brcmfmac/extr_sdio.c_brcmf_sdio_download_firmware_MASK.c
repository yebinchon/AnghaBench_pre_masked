
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct firmware {int data; } ;
struct brcmf_sdio {TYPE_1__* sdiodev; int ci; } ;
struct TYPE_2__ {int func1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct brcmf_sdio*,int ,int) ;
 int FUNC_5 (struct brcmf_sdio*,struct firmware const*) ;
 int FUNC_6 (struct brcmf_sdio*,void*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct brcmf_sdio *VAR_3,
     const struct firmware *VAR_4,
     void *VAR_5, u32 VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 FUNC_9(VAR_3->sdiodev->func1);
 FUNC_4(VAR_3, VAR_0, 0);

 VAR_8 = FUNC_7(VAR_4->data);
 FUNC_1(VAR_2, "firmware rstvec: %x\n", VAR_8);

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 FUNC_8(VAR_4);
 if (VAR_7) {
  FUNC_2("dongle image file download failed\n");
  FUNC_3(VAR_5);
  goto err;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_5, VAR_6);
 FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_2("dongle nvram file download failed\n");
  goto err;
 }


 if (!FUNC_0(VAR_3->ci, VAR_8)) {
  FUNC_2("error getting out of ARM core reset\n");
  goto err;
 }

err:
 FUNC_4(VAR_3, VAR_1, 0);
 FUNC_10(VAR_3->sdiodev->func1);
 return VAR_7;
}
