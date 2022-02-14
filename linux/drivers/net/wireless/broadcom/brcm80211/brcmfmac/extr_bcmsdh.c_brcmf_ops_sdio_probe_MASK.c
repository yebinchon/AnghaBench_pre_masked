
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct sdio_func {int num; struct device dev; TYPE_1__* card; int device; int vendor; int class; } ;
struct sdio_device_id {int dummy; } ;
struct TYPE_5__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_sdio_dev {TYPE_3__* func1; struct device* dev; int proto_type; TYPE_2__ bus_priv; struct brcmf_sdio_dev* bus_if; struct sdio_func* func2; } ;
struct brcmf_bus {TYPE_3__* func1; struct device* dev; int proto_type; TYPE_2__ bus_priv; struct brcmf_bus* bus_if; struct sdio_func* func2; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_4__ {TYPE_3__** sdio_func; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ) ;
 int FUNC_4 (struct brcmf_sdio_dev*) ;
 int FUNC_5 (struct device*,struct brcmf_sdio_dev*) ;
 int FUNC_6 (struct brcmf_sdio_dev*) ;
 struct brcmf_sdio_dev* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct sdio_func *VAR_7,
    const struct sdio_device_id *VAR_8)
{
 int VAR_9;
 struct brcmf_sdio_dev *VAR_10;
 struct brcmf_bus *VAR_11;
 struct device *VAR_12;

 FUNC_0(VAR_6, "Enter\n");
 FUNC_0(VAR_6, "Class=%x\n", VAR_7->class);
 FUNC_0(VAR_6, "sdio vendor ID: 0x%04x\n", VAR_7->vendor);
 FUNC_0(VAR_6, "sdio device ID: 0x%04x\n", VAR_7->device);
 FUNC_0(VAR_6, "Function#: %d\n", VAR_7->num);

 VAR_12 = &VAR_7->dev;


 VAR_7->card->quirks |= VAR_5;


 FUNC_2(VAR_12, 0);


 if (VAR_7->num == 1)
  return 0;


 if (VAR_7->num != 2)
  return -VAR_2;

 VAR_11 = FUNC_7(sizeof(struct brcmf_bus), VAR_4);
 if (!VAR_11)
  return -VAR_3;
 VAR_10 = FUNC_7(sizeof(struct brcmf_sdio_dev), VAR_4);
 if (!VAR_10) {
  FUNC_6(VAR_11);
  return -VAR_3;
 }




 VAR_10->func1 = VAR_7->card->sdio_func[0];
 VAR_10->func2 = VAR_7;

 VAR_10->bus_if = VAR_11;
 VAR_11->bus_priv.sdio = VAR_10;
 VAR_11->proto_type = VAR_0;
 FUNC_5(&VAR_7->dev, VAR_11);
 FUNC_5(&VAR_10->func1->dev, VAR_11);
 VAR_10->dev = &VAR_10->func1->dev;

 FUNC_3(VAR_10, VAR_1);

 FUNC_0(VAR_6, "F2 found, calling brcmf_sdiod_probe...\n");
 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9) {
  FUNC_1("F2 error, probe failed %d...\n", VAR_9);
  goto fail;
 }

 FUNC_0(VAR_6, "F2 init completed...\n");
 return 0;

fail:
 FUNC_5(&VAR_7->dev, ((void*)0));
 FUNC_5(&VAR_10->func1->dev, ((void*)0));
 FUNC_6(VAR_10);
 FUNC_6(VAR_11);
 return VAR_9;
}
