
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct coda_file_info* private_data; } ;
struct coda_file_info {scalar_t__ cfi_magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

struct coda_file_info *FUNC_1(struct file *VAR_1)
{
 struct coda_file_info *VAR_2 = VAR_1->private_data;

 FUNC_0(!VAR_2 || VAR_2->cfi_magic != VAR_0);

 return VAR_2;

}
