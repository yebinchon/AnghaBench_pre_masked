
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vub300_mmc_host {int vub_name; TYPE_3__* udev; TYPE_1__* mmc; } ;
struct sdio_func {int vendor; int device; } ;
struct TYPE_5__ {int vendor; int device; } ;
struct mmc_card {int sdio_funcs; int dev; struct sdio_func** sdio_func; TYPE_2__ cis; } ;
struct firmware {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct mmc_card* card; } ;


 int FUNC_0 (struct vub300_mmc_host*,struct firmware const*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,int ,int *) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct vub300_mmc_host *VAR_0)
{
 struct mmc_card *VAR_1 = VAR_0->mmc->card;
 int VAR_2 = VAR_1->sdio_funcs;
 const struct firmware *VAR_3 = ((void*)0);
 int VAR_4 = FUNC_4(VAR_0->vub_name, sizeof(VAR_0->vub_name),
    "vub_%04X%04X", VAR_1->cis.vendor, VAR_1->cis.device);
 int VAR_5 = 0;
 int VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct sdio_func *VAR_7 = VAR_1->sdio_func[VAR_5];
  VAR_4 += FUNC_4(VAR_0->vub_name + VAR_4,
         sizeof(VAR_0->vub_name) - VAR_4, "_%04X%04X",
         VAR_7->vendor, VAR_7->device);
 }
 FUNC_4(VAR_0->vub_name + VAR_4, sizeof(VAR_0->vub_name) - VAR_4, ".bin");
 FUNC_1(&VAR_0->udev->dev, "requesting offload firmware %s\n",
   VAR_0->vub_name);
 VAR_6 = FUNC_3(&VAR_3, VAR_0->vub_name, &VAR_1->dev);
 if (VAR_6 < 0) {
  FUNC_5(VAR_0->vub_name, "vub_default.bin",
   sizeof(VAR_0->vub_name));
  VAR_6 = FUNC_3(&VAR_3, VAR_0->vub_name, &VAR_1->dev);
  if (VAR_6 < 0) {
   FUNC_5(VAR_0->vub_name,
    "no SDIO offload firmware found",
    sizeof(VAR_0->vub_name));
  } else {
   FUNC_0(VAR_0, VAR_3);
   FUNC_2(VAR_3);
  }
 } else {
  FUNC_0(VAR_0, VAR_3);
  FUNC_2(VAR_3);
 }
}
