
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int mcdi_max_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct efx_nic *VAR_5, unsigned int VAR_6, size_t VAR_7)
{
 if (VAR_5->type->mcdi_max_ver < 0 ||
      (VAR_5->type->mcdi_max_ver < 2 &&
       VAR_6 > VAR_4))
  return -VAR_0;

 if (VAR_7 > VAR_3 ||
     (VAR_5->type->mcdi_max_ver < 2 &&
      VAR_7 > VAR_2))
  return -VAR_1;

 return 0;
}
