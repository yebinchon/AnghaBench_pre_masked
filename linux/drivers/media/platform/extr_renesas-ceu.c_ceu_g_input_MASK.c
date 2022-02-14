
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct ceu_device {unsigned int sd_index; } ;


 struct ceu_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct ceu_device *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->sd_index;

 return 0;
}
