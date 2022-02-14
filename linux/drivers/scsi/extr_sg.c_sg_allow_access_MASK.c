
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_fd {TYPE_2__* parentdp; } ;
struct file {int f_mode; struct sg_fd* private_data; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, unsigned char *VAR_2)
{
 struct sg_fd *VAR_3 = VAR_1->private_data;

 if (VAR_3->parentdp->device->type == VAR_0)
  return 0;

 return FUNC_0(VAR_2, VAR_1->f_mode);
}
