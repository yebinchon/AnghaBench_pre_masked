
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; } ;
struct TYPE_3__ {scalar_t__* bgcount; scalar_t__* highsize; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4[8];
 int VAR_5 = VAR_1->vc_num;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_4[VAR_2] = VAR_2;

 for (VAR_2 = 0; VAR_2 < 7; VAR_2++)
  for (VAR_3 = VAR_2 + 1; VAR_3 < 8; VAR_3++)
   if (VAR_0[VAR_5]->ht.bgcount[VAR_4[VAR_2]] >
       VAR_0[VAR_5]->ht.bgcount[VAR_4[VAR_3]])
    FUNC_0(VAR_4[VAR_2], VAR_4[VAR_3]);

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_0[VAR_5]->ht.bgcount[VAR_4[VAR_2]] != 0)
   if (VAR_0[VAR_5]->ht.highsize[VAR_4[VAR_2]] > 0)
    return VAR_4[VAR_2];
 return -1;
}
