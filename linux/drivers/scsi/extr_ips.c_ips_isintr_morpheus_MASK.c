
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ mem_ptr; } ;
typedef TYPE_1__ ips_ha_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_2)
{
 uint32_t VAR_3;

 FUNC_0("ips_isintr_morpheus", 2);

 VAR_3 = FUNC_1(VAR_2->mem_ptr + VAR_1);

 if (VAR_3 & VAR_0)
  return (1);
 else
  return (0);
}
