
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* data; size_t dsize_bytes; } ;
struct sclp_sd_file {int data_mutex; TYPE_1__ data; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sclp_sd_file* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3,
    loff_t VAR_4, size_t VAR_5)
{
 struct sclp_sd_file *VAR_6 = FUNC_3(VAR_1);
 size_t VAR_7;
 char *VAR_8;

 FUNC_1(&VAR_6->data_mutex);

 VAR_8 = VAR_6->data.data;
 VAR_7 = VAR_6->data.dsize_bytes;
 if (!VAR_8 || VAR_4 >= VAR_7) {
  VAR_5 = 0;
 } else {
  if (VAR_4 + VAR_5 > VAR_7)
   VAR_5 = VAR_7 - VAR_4;
  FUNC_0(VAR_3, VAR_8 + VAR_4, VAR_5);
 }

 FUNC_2(&VAR_6->data_mutex);

 return VAR_5;
}
