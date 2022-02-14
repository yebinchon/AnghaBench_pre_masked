
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_fcp_device {int list; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcar_fcp_device* FUNC_0 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platform_device*,struct rcar_fcp_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct rcar_fcp_device *VAR_5;

 VAR_5 = FUNC_0(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;

 FUNC_5(&VAR_4->dev);

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_5->list, &VAR_2);
 FUNC_3(&VAR_3);

 FUNC_4(VAR_4, VAR_5);

 return 0;
}
