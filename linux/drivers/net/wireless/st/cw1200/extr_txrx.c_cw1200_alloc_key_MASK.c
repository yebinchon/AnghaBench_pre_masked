
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {TYPE_1__* keys; int key_map; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct cw1200_common *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(~VAR_1->key_map) - 1;
 if (VAR_2 < 0 || VAR_2 > VAR_0)
  return -1;

 VAR_1->key_map |= FUNC_0(VAR_2);
 VAR_1->keys[VAR_2].index = VAR_2;
 return VAR_2;
}
