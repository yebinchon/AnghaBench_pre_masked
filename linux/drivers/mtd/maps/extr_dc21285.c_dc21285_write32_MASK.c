
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct map_info {scalar_t__ virt; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, const map_word VAR_1, unsigned long VAR_2)
{
 if (FUNC_0())
  FUNC_1();
 *(uint32_t*)(VAR_0->virt + VAR_2) = VAR_1.x[0];
}
