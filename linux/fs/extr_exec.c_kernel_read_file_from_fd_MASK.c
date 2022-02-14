
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;
typedef int loff_t ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (int ,void**,int *,int ,int) ;

int FUNC_3(int VAR_1, void **VAR_2, loff_t *VAR_3, loff_t VAR_4,
        enum kernel_read_file_id VAR_5)
{
 struct fd VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = -VAR_0;

 if (!VAR_6.file)
  goto out;

 VAR_7 = FUNC_2(VAR_6.file, VAR_2, VAR_3, VAR_4, VAR_5);
out:
 FUNC_1(VAR_6);
 return VAR_7;
}
