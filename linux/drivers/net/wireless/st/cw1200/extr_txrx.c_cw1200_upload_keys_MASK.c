
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int key_map; int * keys; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cw1200_common*,int *) ;

int FUNC_2(struct cw1200_common *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 <= VAR_0; ++VAR_2)
  if (VAR_1->key_map & FUNC_0(VAR_2)) {
   VAR_3 = FUNC_1(VAR_1, &VAR_1->keys[VAR_2]);
   if (VAR_3 < 0)
    break;
  }
 return VAR_3;
}
