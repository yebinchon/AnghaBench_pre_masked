
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 struct platform_device* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_9)
{
 int VAR_10;

 VAR_7 = VAR_2;
 VAR_8 = VAR_3;

 VAR_5 = VAR_9;


 VAR_10 = FUNC_1();
 if (VAR_10 < 0)
  return VAR_10;





 VAR_10 = FUNC_3(&VAR_5->dev, FUNC_0(32));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(&VAR_9->dev.kobj, &VAR_4);
 if (VAR_10)
  return VAR_10;

 FUNC_4(&VAR_6);

 FUNC_2(&VAR_9->dev, "%s (version %s)\n",
   VAR_0, VAR_1);

 return 0;
}
