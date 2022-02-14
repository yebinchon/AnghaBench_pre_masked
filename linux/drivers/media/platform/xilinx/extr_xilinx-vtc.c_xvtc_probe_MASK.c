
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dev; } ;
struct xvtc_device {TYPE_1__ xvip; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xvtc_device* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct platform_device*,struct xvtc_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct xvtc_device*) ;
 int FUNC_5 (struct xvtc_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct xvtc_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->xvip.dev = &VAR_2->dev;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(&VAR_3->xvip);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_2, VAR_3);

 FUNC_3(&VAR_3->xvip);

 FUNC_5(VAR_3);

 return 0;
}
