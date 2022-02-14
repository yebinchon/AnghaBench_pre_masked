
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int id; scalar_t__ size; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(u64 VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (!(VAR_1 & VAR_0[VAR_2].id))
   continue;
  VAR_3 += VAR_0[VAR_2].size;
 }

 return VAR_3;
}
