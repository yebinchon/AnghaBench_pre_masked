
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int modes_supported; int dev; } ;
struct TYPE_2__ {int (* afu_activate_mode ) (struct cxl_afu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cxl_afu*,int) ;
 int FUNC_2 (struct cxl_afu*,int) ;

int FUNC_3(struct cxl_afu *VAR_3)
{
 if (VAR_3->modes_supported & VAR_1)
  return VAR_2->afu_activate_mode(VAR_3, VAR_1);

 if (VAR_3->modes_supported & VAR_0)
  return VAR_2->afu_activate_mode(VAR_3, VAR_0);

 FUNC_0(&VAR_3->dev, "No supported programming modes available\n");

 return 0;
}
