
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int coreid; } ;
struct ssb_device {struct device* dev; struct device* dma_dev; int irq; TYPE_1__ id; } ;
struct TYPE_13__ {scalar_t__ present; } ;
struct TYPE_12__ {scalar_t__ present; } ;
struct TYPE_14__ {TYPE_6__ sflash; TYPE_5__ pflash; } ;
struct ssb_bus {int nr_devices; int bustype; TYPE_7__ mipscore; TYPE_4__* host_sdio; TYPE_3__* host_pcmcia; TYPE_2__* host_pci; int busnumber; struct ssb_device* devices; } ;
struct device {int coherent_dma_mask; int * dma_mask; struct device* parent; int * bus; int release; } ;
struct __ssb_dev_wrapper {struct ssb_device* sdev; struct device dev; } ;
struct TYPE_11__ {struct device dev; } ;
struct TYPE_10__ {struct device dev; int irq; } ;
struct TYPE_9__ {struct device dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (struct device*) ;
 struct __ssb_dev_wrapper* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;
 int FUNC_7 (struct ssb_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct ssb_bus *VAR_6)
{
 struct ssb_device *VAR_7;
 struct device *VAR_8;
 struct __ssb_dev_wrapper *VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_6->nr_devices; VAR_10++) {
  VAR_7 = &(VAR_6->devices[VAR_10]);



  switch (VAR_7->id.coreid) {
  case 134:
  case 130:
  case 129:
  case 128:
  case 132:
  case 131:
  case 133:
   continue;
  }

  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   VAR_11 = -VAR_0;
   goto error;
  }
  VAR_8 = &VAR_9->dev;
  VAR_9->sdev = VAR_7;

  VAR_8->release = VAR_4;
  VAR_8->bus = &VAR_2;
  FUNC_1(VAR_8, "ssb%u:%d", VAR_6->busnumber, VAR_12);

  switch (VAR_6->bustype) {
  case 138:





   break;
  case 137:




   break;
  case 136:



   break;
  case 135:
   VAR_8->dma_mask = &VAR_8->coherent_dma_mask;
   VAR_7->dma_dev = VAR_8;
   break;
  }

  VAR_7->dev = VAR_8;
  VAR_11 = FUNC_2(VAR_8);
  if (VAR_11) {
   FUNC_5("Could not register %s\n", FUNC_0(VAR_8));


   VAR_7->dev = ((void*)0);
   FUNC_6(VAR_8);
   goto error;
  }
  VAR_12++;
 }
 return 0;
error:

 FUNC_7(VAR_6);
 return VAR_11;
}
