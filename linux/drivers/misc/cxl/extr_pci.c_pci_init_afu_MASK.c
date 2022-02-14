
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cxl_afu_native {int dummy; } ;
struct cxl_afu {size_t slice; struct cxl_afu* native; int dev; int spa_mutex; } ;
struct cxl {struct cxl_afu** afu; int adapter_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cxl_afu* FUNC_0 (struct cxl*,int) ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 int FUNC_4 (struct cxl_afu*) ;
 int FUNC_5 (struct cxl_afu*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cxl_afu*) ;
 struct cxl_afu* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cxl_afu*,struct cxl*,struct pci_dev*) ;
 int FUNC_13 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_14(struct cxl *VAR_2, int VAR_3, struct pci_dev *VAR_4)
{
 struct cxl_afu *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->native = FUNC_10(sizeof(struct cxl_afu_native), VAR_1);
 if (!VAR_5->native)
  goto err_free_afu;

 FUNC_11(&VAR_5->native->spa_mutex);

 VAR_6 = FUNC_7(&VAR_5->dev, "afu%i.%i", VAR_2->adapter_num, VAR_3);
 if (VAR_6)
  goto err_free_native;

 VAR_6 = FUNC_12(VAR_5, VAR_2, VAR_4);
 if (VAR_6)
  goto err_free_native;


 FUNC_1(VAR_5);





 if ((VAR_6 = FUNC_4(VAR_5)))
  goto err_put1;

 if ((VAR_6 = FUNC_5(VAR_5)))
  goto err_put1;

 VAR_2->afu[VAR_5->slice] = VAR_5;

 if ((VAR_6 = FUNC_3(VAR_5)))
  FUNC_6(&VAR_5->dev, "Can't register vPHB\n");

 return 0;

err_put1:
 FUNC_13(VAR_5);
 FUNC_2(VAR_5);
 FUNC_8(&VAR_5->dev);
 return VAR_6;

err_free_native:
 FUNC_9(VAR_5->native);
err_free_afu:
 FUNC_9(VAR_5);
 return VAR_6;

}
