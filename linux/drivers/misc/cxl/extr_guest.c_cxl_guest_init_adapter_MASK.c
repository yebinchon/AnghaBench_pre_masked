
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct cxl_guest {int dummy; } ;
struct TYPE_4__ {int release; int * parent; } ;
struct cxl {int psl_timebase_synced; TYPE_2__ dev; TYPE_1__* guest; scalar_t__ slices; } ;
struct TYPE_3__ {struct platform_device* pdev; } ;


 int VAR_0 ;
 struct cxl* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct cxl*) ;
 struct cxl* FUNC_2 () ;
 int FUNC_3 (struct cxl*) ;
 int FUNC_4 (struct cxl*) ;
 int FUNC_5 (struct cxl*,struct device_node*) ;
 int FUNC_6 (struct cxl*,struct device_node*) ;
 int FUNC_7 (struct cxl*) ;
 int FUNC_8 (struct cxl*) ;
 int FUNC_9 (int *,struct cxl*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct cxl*) ;
 TYPE_1__* FUNC_12 (int,int ) ;
 int FUNC_13 (struct cxl*) ;
 int VAR_2 ;

struct cxl *FUNC_14(struct device_node *VAR_3, struct platform_device *VAR_4)
{
 struct cxl *VAR_5;
 bool VAR_6 = 1;
 int VAR_7;

 if (!(VAR_5 = FUNC_2()))
  return FUNC_0(-VAR_0);

 if (!(VAR_5->guest = FUNC_12(sizeof(struct cxl_guest), VAR_1))) {
  FUNC_11(VAR_5);
  return FUNC_0(-VAR_0);
 }

 VAR_5->slices = 0;
 VAR_5->guest->pdev = VAR_4;
 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.release = VAR_2;
 FUNC_9(&VAR_4->dev, VAR_5);





 VAR_5->psl_timebase_synced = 1;

 if ((VAR_7 = FUNC_5(VAR_5, VAR_3)))
  goto err1;

 if ((VAR_7 = FUNC_6(VAR_5, VAR_3)))
  goto err1;

 if ((VAR_7 = FUNC_13(VAR_5)))
  goto err1;

 if ((VAR_7 = FUNC_3(VAR_5)))
  goto err1;





 if ((VAR_7 = FUNC_7(VAR_5)))
  goto err_put1;

 if ((VAR_7 = FUNC_8(VAR_5)))
  goto err_put1;


 FUNC_1(VAR_5);

 return VAR_5;

err_put1:
 FUNC_10(&VAR_5->dev);
 VAR_6 = 0;
 FUNC_4(VAR_5);
err1:
 if (VAR_6)
  FUNC_11(VAR_5);
 return FUNC_0(VAR_7);
}
