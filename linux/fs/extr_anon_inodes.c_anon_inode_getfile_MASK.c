
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {scalar_t__ owner; } ;
struct file {void* private_data; int i_mapping; int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct file* FUNC_2 (struct file*,int ,char const*,int,struct file_operations const*) ;
 struct file* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

struct file *FUNC_7(const char *VAR_6,
    const struct file_operations *VAR_7,
    void *VAR_8, int VAR_9)
{
 struct file *VAR_10;

 if (FUNC_1(VAR_4))
  return FUNC_0(-VAR_0);

 if (VAR_7->owner && !FUNC_6(VAR_7->owner))
  return FUNC_0(-VAR_1);





 FUNC_3(VAR_4);
 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6,
     VAR_9 & (VAR_2 | VAR_3), VAR_7);
 if (FUNC_1(VAR_10))
  goto err;

 VAR_10->f_mapping = VAR_4->i_mapping;

 VAR_10->private_data = VAR_8;

 return VAR_10;

err:
 FUNC_4(VAR_4);
 FUNC_5(VAR_7->owner);
 return VAR_10;
}
