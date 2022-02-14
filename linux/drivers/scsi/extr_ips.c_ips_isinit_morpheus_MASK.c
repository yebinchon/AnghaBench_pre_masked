
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ mem_ptr; } ;
typedef TYPE_1__ ips_ha_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;

 FUNC_0("ips_is_init_morpheus", 1);

 if (FUNC_2(VAR_2))
     FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_2->mem_ptr + VAR_1);
 VAR_4 = FUNC_3(VAR_2->mem_ptr + VAR_0);

 if (VAR_3 == 0)
  return (0);
 else if (VAR_4 & 0x3)
  return (0);
 else
  return (1);
}
