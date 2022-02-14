
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; } ;
struct TYPE_3__ {scalar_t__* highsize; } ;
struct TYPE_4__ {TYPE_1__ ht; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->vc_num;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_0[VAR_3]->ht.highsize[VAR_2] = 0;
}
