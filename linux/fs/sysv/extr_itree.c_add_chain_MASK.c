
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sysv_zone_t ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {struct buffer_head* bh; int * p; int key; } ;
typedef TYPE_1__ Indirect ;



__attribute__((used)) static inline void FUNC_0(Indirect *VAR_0, struct buffer_head *VAR_1, sysv_zone_t *VAR_2)
{
 VAR_0->key = *(VAR_0->p = VAR_2);
 VAR_0->bh = VAR_1;
}
