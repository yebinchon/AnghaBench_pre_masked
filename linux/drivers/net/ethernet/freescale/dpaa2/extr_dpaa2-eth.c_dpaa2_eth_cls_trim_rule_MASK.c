
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int size; int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (void*,void*,int) ;

void FUNC_2(void *VAR_1, u64 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_6 = VAR_0[VAR_5].size;
  if (VAR_0[VAR_5].id & VAR_2) {
   FUNC_1(VAR_1 + VAR_4, VAR_1 + VAR_3, VAR_6);
   VAR_4 += VAR_6;
  }
  VAR_3 += VAR_6;
 }
}
