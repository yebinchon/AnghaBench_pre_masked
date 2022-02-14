
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int devt; } ;
struct cxl {TYPE_2__ dev; int adapter_num; TYPE_1__* guest; } ;
typedef int dev_t ;
struct TYPE_3__ {int cdev; } ;


 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,int) ;

int FUNC_8(struct cxl *VAR_2)
{
 dev_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(FUNC_1(FUNC_5()), FUNC_0(VAR_2));
 FUNC_4(&VAR_2->guest->cdev, &VAR_0);
 if ((VAR_4 = FUNC_3(&VAR_2->guest->cdev, VAR_3, 1))) {
  FUNC_6(&VAR_2->dev,
   "Unable to add chardev on adapter (card%i): %i\n",
   VAR_2->adapter_num, VAR_4);
  goto err;
 }
 VAR_2->dev.devt = VAR_3;
 FUNC_7(&VAR_1, 1);
err:
 return VAR_4;
}
