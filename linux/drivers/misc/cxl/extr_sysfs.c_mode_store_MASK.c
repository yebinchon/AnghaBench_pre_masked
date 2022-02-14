
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int current_mode; int contexts_lock; scalar_t__ num_procs; int contexts_idr; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* afu_deactivate_mode ) (struct cxl_afu*,int) ;int (* afu_activate_mode ) (struct cxl_afu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (struct cxl_afu*,int) ;
 int FUNC_5 (struct cxl_afu*,int) ;
 struct cxl_afu* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5, struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct cxl_afu *VAR_9 = FUNC_6(VAR_5);
 int VAR_10, VAR_11 = -1;
 int VAR_12 = -VAR_2;


 FUNC_1(&VAR_9->contexts_lock);
 if (!FUNC_0(&VAR_9->contexts_idr))
  goto err;

 if (!FUNC_3(VAR_7, "dedicated_process", 17))
  VAR_11 = VAR_0;
 if (!FUNC_3(VAR_7, "afu_directed", 12))
  VAR_11 = VAR_1;
 if (!FUNC_3(VAR_7, "none", 4))
  VAR_11 = 0;

 if (VAR_11 == -1) {
  VAR_12 = -VAR_3;
  goto err;
 }





 VAR_10 = VAR_9->current_mode;
 VAR_9->current_mode = 0;
 VAR_9->num_procs = 0;

 FUNC_2(&VAR_9->contexts_lock);

 if ((VAR_12 = VAR_4->afu_deactivate_mode(VAR_9, VAR_10)))
  return VAR_12;
 if ((VAR_12 = VAR_4->afu_activate_mode(VAR_9, VAR_11)))
  return VAR_12;

 return VAR_8;
err:
 FUNC_2(&VAR_9->contexts_lock);
 return VAR_12;
}
