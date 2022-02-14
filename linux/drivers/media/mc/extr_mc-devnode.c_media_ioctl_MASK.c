
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_devnode {TYPE_1__* fops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int ioctl; } ;


 long FUNC_0 (struct file*,unsigned int,unsigned long,int ) ;
 struct media_devnode* FUNC_1 (struct file*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 struct media_devnode *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->fops->ioctl);
}
