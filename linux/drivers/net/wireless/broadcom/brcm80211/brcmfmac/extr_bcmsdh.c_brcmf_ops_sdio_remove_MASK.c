
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdio_func {int num; int dev; int device; int vendor; } ;
struct TYPE_4__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_sdio_dev {TYPE_3__* func2; TYPE_2__* func1; TYPE_1__ bus_priv; } ;
struct brcmf_bus {TYPE_3__* func2; TYPE_2__* func1; TYPE_1__ bus_priv; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_sdio_dev*) ;
 int FUNC_2 (struct brcmf_sdio_dev*) ;
 struct brcmf_sdio_dev* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct brcmf_sdio_dev*) ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_1)
{
 struct brcmf_bus *VAR_2;
 struct brcmf_sdio_dev *VAR_3;

 FUNC_0(VAR_0, "Enter\n");
 FUNC_0(VAR_0, "sdio vendor ID: 0x%04x\n", VAR_1->vendor);
 FUNC_0(VAR_0, "sdio device ID: 0x%04x\n", VAR_1->device);
 FUNC_0(VAR_0, "Function: %d\n", VAR_1->num);

 VAR_2 = FUNC_3(&VAR_1->dev);
 if (VAR_2) {
  VAR_3 = VAR_2->bus_priv.sdio;


  FUNC_1(VAR_3);

  if (VAR_1->num != 1)
   return;


  FUNC_2(VAR_3);

  FUNC_4(&VAR_3->func1->dev, ((void*)0));
  FUNC_4(&VAR_3->func2->dev, ((void*)0));

  FUNC_5(VAR_2);
  FUNC_5(VAR_3);
 }

 FUNC_0(VAR_0, "Exit\n");
}
