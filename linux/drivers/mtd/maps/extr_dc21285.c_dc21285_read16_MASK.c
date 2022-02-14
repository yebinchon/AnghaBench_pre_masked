
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct map_info {scalar_t__ virt; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;



__attribute__((used)) static map_word FUNC_0(struct map_info *VAR_0, unsigned long VAR_1)
{
 map_word VAR_2;
 VAR_2.x[0] = *(uint16_t*)(VAR_0->virt + VAR_1);
 return VAR_2;
}
