
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_resource_entry {scalar_t__ res_handle; } ;
struct TYPE_2__ {scalar_t__ res_handle; } ;
struct ipr_cmnd {TYPE_1__ ioarcb; } ;



__attribute__((used)) static int FUNC_0(struct ipr_cmnd *VAR_0, void *VAR_1)
{
 struct ipr_resource_entry *VAR_2 = VAR_1;

 if (VAR_2 && VAR_0->ioarcb.res_handle == VAR_2->res_handle)
  return 1;
 return 0;
}
