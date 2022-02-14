
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct whci_card {struct umc_dev** devs; TYPE_3__* pci; scalar_t__ uwbbase; } ;
struct TYPE_4__ {int start; int end; TYPE_2__* parent; int flags; int name; } ;
struct umc_dev {int bar; int irq; TYPE_1__ resource; int dev; int cap_id; int version; } ;
struct TYPE_6__ {int irq; TYPE_2__* resource; int dev; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct umc_dev*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int) ;
 struct umc_dev* FUNC_10 (int *,int) ;
 int FUNC_11 (struct umc_dev*) ;
 int FUNC_12 (struct whci_card*,int ) ;

__attribute__((used)) static int FUNC_13(struct whci_card *VAR_1, int VAR_2)
{
 struct umc_dev *VAR_3;
 u64 VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_10(&VAR_1->pci->dev, VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_8(VAR_1->uwbbase + FUNC_0(VAR_2));

 VAR_5 = FUNC_1(VAR_4) << 1;

 VAR_4 = FUNC_12(VAR_1, VAR_4);


 VAR_3->version = FUNC_5(VAR_4);
 VAR_3->cap_id = VAR_2 == 0 ? 0 : FUNC_2(VAR_4);
 VAR_3->bar = VAR_5;
 VAR_3->resource.start = FUNC_9(VAR_1->pci, VAR_5)
  + FUNC_3(VAR_4);
 VAR_3->resource.end = VAR_3->resource.start
  + (VAR_2 == 0 ? 0x20 : FUNC_4(VAR_4)) - 1;
 VAR_3->resource.name = FUNC_6(&VAR_3->dev);
 VAR_3->resource.flags = VAR_1->pci->resource[VAR_5].flags;
 VAR_3->resource.parent = &VAR_1->pci->resource[VAR_5];
 VAR_3->irq = VAR_1->pci->irq;

 VAR_6 = FUNC_11(VAR_3);
 if (VAR_6 < 0)
  goto error;
 VAR_1->devs[VAR_2] = VAR_3;
 return 0;

error:
 FUNC_7(VAR_3);
 return VAR_6;
}
