
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int release; int * class; int devt; } ;
struct telem_device_data {TYPE_1__ dev; int cdev; int available; int ec; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,scalar_t__,int ) ;
 int FUNC_9 (int *,int) ;
 struct telem_device_data* FUNC_10 (int,int ) ;
 int FUNC_11 (struct platform_device*,struct telem_device_data*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct telem_device_data *VAR_10;
 int VAR_11, VAR_12;


 VAR_12 = FUNC_8(&VAR_7, VAR_3-1, VAR_1);
 if (VAR_12 < 0) {
  VAR_11 = VAR_12;
  FUNC_4(&VAR_9->dev, "Failed to find minor number: %d", VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_9(&VAR_7, VAR_12);
  return -VAR_0;
 }


 VAR_10->ec = FUNC_5(&VAR_9->dev);
 FUNC_1(&VAR_10->available, 1);
 FUNC_11(VAR_9, VAR_10);


 VAR_10->dev.devt = FUNC_0(VAR_8, VAR_12);
 VAR_10->dev.class = &VAR_4;
 VAR_10->dev.release = VAR_5;
 FUNC_6(&VAR_10->dev, VAR_2, VAR_12);
 FUNC_7(&VAR_10->dev);

                                                              ;
 FUNC_3(&VAR_10->cdev, &VAR_6);
 VAR_11 = FUNC_2(&VAR_10->cdev, &VAR_10->dev);
 if (VAR_11) {
  FUNC_12(&VAR_10->dev);
  FUNC_9(&VAR_7, VAR_12);
  return VAR_11;
 }

 return 0;
}
