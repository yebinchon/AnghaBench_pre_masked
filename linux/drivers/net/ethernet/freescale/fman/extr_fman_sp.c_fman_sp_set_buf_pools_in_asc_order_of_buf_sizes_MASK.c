
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct fman_ext_pools {int num_of_pools_used; TYPE_1__* ext_buf_pool; } ;
struct TYPE_2__ {scalar_t__ size; size_t id; } ;



void FUNC_0(struct fman_ext_pools
           *VAR_0,
           u8 *VAR_1,
           u16 *VAR_2)
{
 u16 VAR_3 = 0;
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;




 for (VAR_4 = 0; VAR_4 < VAR_0->num_of_pools_used; VAR_4++) {

  VAR_3 = VAR_0->ext_buf_pool[VAR_4].size;




  VAR_2[VAR_0->ext_buf_pool[VAR_4].id] = VAR_3;


  for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++) {

   if (VAR_5 == VAR_4)
    VAR_1[VAR_4] =
        VAR_0->ext_buf_pool[VAR_4].id;
   else {

    if (VAR_3 < VAR_2[VAR_1[VAR_5]]) {



     for (VAR_6 = VAR_4; VAR_6 > VAR_5; VAR_6--)
      VAR_1[VAR_6] =
          VAR_1[VAR_6 - 1];




     VAR_1[VAR_6] =
         VAR_0->ext_buf_pool[VAR_4].id;
     break;
    }
   }
  }
 }
}
