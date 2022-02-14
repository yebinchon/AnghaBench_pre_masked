
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int contexts_lock; int contexts_idr; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* afu_reset ) (struct cxl_afu*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cxl_afu*) ;
 struct cxl_afu* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct cxl_afu *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;


 FUNC_1(&VAR_6->contexts_lock);
 if (!FUNC_0(&VAR_6->contexts_idr)) {
  VAR_7 = -VAR_0;
  goto err;
 }

 if ((VAR_7 = VAR_1->afu_reset(VAR_6)))
  goto err;

 VAR_7 = VAR_5;
err:
 FUNC_2(&VAR_6->contexts_lock);
 return VAR_7;
}
