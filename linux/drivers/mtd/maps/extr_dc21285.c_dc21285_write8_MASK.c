
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct map_info {scalar_t__ virt; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 unsigned long* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_1, const map_word VAR_2, unsigned long VAR_3)
{
 if (FUNC_0())
  FUNC_1();
 *VAR_0 = VAR_3 & 3;
 VAR_3 &= ~3;
 *(uint8_t*)(VAR_1->virt + VAR_3) = VAR_2.x[0];
}
