
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int util_str; } ;
struct channel_path {int lock; TYPE_1__ desc_fmt3; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,size_t,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct channel_path* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3,
    loff_t VAR_4, size_t VAR_5)
{
 struct channel_path *VAR_6 = FUNC_4(FUNC_0(VAR_1));
 ssize_t VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_1(VAR_3, VAR_5, &VAR_4, VAR_6->desc_fmt3.util_str,
         sizeof(VAR_6->desc_fmt3.util_str));
 FUNC_3(&VAR_6->lock);

 return VAR_7;
}
