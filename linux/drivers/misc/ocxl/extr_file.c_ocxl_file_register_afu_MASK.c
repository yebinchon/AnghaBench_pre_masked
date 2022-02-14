
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_6__ {int parent; } ;
struct ocxl_fn {TYPE_1__ dev; } ;
struct TYPE_8__ {int release; int class; int devt; TYPE_1__* parent; } ;
struct ocxl_file_info {TYPE_3__ dev; struct ocxl_afu* afu; } ;
struct TYPE_7__ {int idx; int name; } ;
struct ocxl_afu {TYPE_2__ config; struct ocxl_fn* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocxl_file_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct ocxl_file_info*) ;
 int VAR_2 ;
 int FUNC_8 (struct ocxl_file_info*) ;
 struct ocxl_file_info* FUNC_9 (int,int ) ;
 int FUNC_10 (struct ocxl_afu*) ;
 int FUNC_11 (struct ocxl_afu*) ;
 int FUNC_12 (struct ocxl_afu*,struct ocxl_file_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (struct ocxl_file_info*) ;
 int FUNC_14 (struct ocxl_file_info*) ;
 int FUNC_15 (struct ocxl_file_info*) ;
 struct pci_dev* FUNC_16 (int ) ;

int FUNC_17(struct ocxl_afu *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct ocxl_file_info *VAR_8;
 struct ocxl_fn *VAR_9 = VAR_5->fn;
 struct pci_dev *VAR_10 = FUNC_16(VAR_9->dev.parent);

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_8);
 if (VAR_6 < 0) {
  FUNC_8(VAR_8);
  return VAR_6;
 }

 VAR_8->dev.parent = &VAR_9->dev;
 VAR_8->dev.devt = FUNC_1(FUNC_0(VAR_4), VAR_6);
 VAR_8->dev.class = VAR_3;
 VAR_8->dev.release = VAR_2;

 VAR_8->afu = VAR_5;
 FUNC_10(VAR_5);

 VAR_7 = FUNC_4(&VAR_8->dev, "%s.%s.%hhu",
  VAR_5->config.name, FUNC_3(&VAR_10->dev), VAR_5->config.idx);
 if (VAR_7)
  goto err_put;

 VAR_7 = FUNC_5(&VAR_8->dev);
 if (VAR_7)
  goto err_put;

 VAR_7 = FUNC_14(VAR_8);
 if (VAR_7)
  goto err_unregister;

 VAR_7 = FUNC_13(VAR_8);
 if (VAR_7)
  goto err_unregister;

 FUNC_12(VAR_5, VAR_8);

 return 0;

err_unregister:
 FUNC_15(VAR_8);
 FUNC_6(&VAR_8->dev);
err_put:
 FUNC_11(VAR_5);
 FUNC_7(VAR_8);
 FUNC_8(VAR_8);
 return VAR_7;
}
