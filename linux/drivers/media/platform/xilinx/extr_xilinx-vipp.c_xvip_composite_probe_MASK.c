
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_composite_device {int * dev; int notifier; int dmas; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct xvip_composite_device* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct platform_device*,struct xvip_composite_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xvip_composite_device*) ;
 int FUNC_6 (struct xvip_composite_device*) ;
 int FUNC_7 (struct xvip_composite_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct xvip_composite_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = &VAR_2->dev;
 FUNC_0(&VAR_3->dmas);
 FUNC_4(&VAR_3->notifier);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 < 0)
  goto error;

 FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_3->dev, "device registered\n");

 return 0;

error:
 FUNC_5(VAR_3);
 return VAR_4;
}
