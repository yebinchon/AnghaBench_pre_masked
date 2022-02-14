
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int drv; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int *,int *,int *,int ) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static struct subchannel *FUNC_2(struct subchannel *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_0.drv,
     VAR_2 ? &VAR_2->dev : ((void*)0), ((void*)0),
     VAR_1);
 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
