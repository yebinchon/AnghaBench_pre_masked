
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct mchp23k256_flash {TYPE_1__* caps; } ;
struct TYPE_2__ {int addr_width; } ;



__attribute__((used)) static void FUNC_0(struct mchp23k256_flash *VAR_0,
    unsigned int VAR_1, u8 *VAR_2)
{
 int VAR_3;






 for (VAR_3 = VAR_0->caps->addr_width; VAR_3 > 0; VAR_3--, VAR_1 >>= 8)
  VAR_2[VAR_3] = VAR_1;
}
