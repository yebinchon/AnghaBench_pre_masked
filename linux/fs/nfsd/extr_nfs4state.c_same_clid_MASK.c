
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cl_boot; scalar_t__ cl_id; } ;
typedef TYPE_1__ clientid_t ;



__attribute__((used)) static int
FUNC_0(clientid_t *VAR_0, clientid_t *VAR_1)
{
 return (VAR_0->cl_boot == VAR_1->cl_boot) && (VAR_0->cl_id == VAR_1->cl_id);
}
