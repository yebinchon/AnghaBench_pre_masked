
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reserved2; int reserved1; int reserved0; } ;
union ion_ioctl_arg {TYPE_1__ query; } ;


 int VAR_0 ;


__attribute__((used)) static int FUNC_0(unsigned int VAR_1, union ion_ioctl_arg *VAR_2)
{
 switch (VAR_1) {
 case 128:
  if (VAR_2->query.reserved0 ||
      VAR_2->query.reserved1 ||
      VAR_2->query.reserved2)
   return -VAR_0;
  break;
 default:
  break;
 }

 return 0;
}
