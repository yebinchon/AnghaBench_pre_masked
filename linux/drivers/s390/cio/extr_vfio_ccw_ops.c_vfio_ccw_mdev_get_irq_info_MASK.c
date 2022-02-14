
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_irq_info {scalar_t__ index; int count; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct vfio_irq_info *VAR_3)
{
 if (VAR_3->index != VAR_1)
  return -VAR_0;

 VAR_3->count = 1;
 VAR_3->flags = VAR_2;

 return 0;
}
