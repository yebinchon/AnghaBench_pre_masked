
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int dev; } ;
struct netfront_info {int dummy; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct netfront_info* FUNC_1 (int *) ;
 int FUNC_2 (struct netfront_info*) ;

__attribute__((used)) static int FUNC_3(struct xenbus_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(&VAR_0->dev, "%s\n", VAR_0->nodename);

 FUNC_2(VAR_1);
 return 0;
}
