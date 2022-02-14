
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; } ;
struct cxl_afu {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct cxl_afu *VAR_1)
{
 VAR_1->dev.class = VAR_0;

 return FUNC_0(&VAR_1->dev);
}
