
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int grefs_per_grant_frame; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{
 return (VAR_1 * VAR_0->grefs_per_grant_frame + VAR_2 - 1) /
        VAR_2;
}
