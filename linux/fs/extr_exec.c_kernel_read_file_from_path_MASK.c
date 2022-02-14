
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,void**,int *,int ,int) ;

int FUNC_5(const char *VAR_2, void **VAR_3, loff_t *VAR_4,
          loff_t VAR_5, enum kernel_read_file_id VAR_6)
{
 struct file *VAR_7;
 int VAR_8;

 if (!VAR_2 || !*VAR_2)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_1, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_4(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_7);
 return VAR_8;
}
