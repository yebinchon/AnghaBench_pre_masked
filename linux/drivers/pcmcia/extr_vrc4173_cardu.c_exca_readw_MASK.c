
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
typedef TYPE_1__ vrc4173_socket_t ;
typedef int uint16_t ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline uint16_t FUNC_1(vrc4173_socket_t *VAR_1, uint16_t VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_1->base + VAR_0 + VAR_2);
 VAR_3 |= (u16)FUNC_0(VAR_1->base + VAR_0 + VAR_2 + 1) << 8;

 return VAR_3;
}
