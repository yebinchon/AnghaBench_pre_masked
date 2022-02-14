
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_4__ {int entity; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct adapter*,int) ;

u32 FUNC_3(struct adapter *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10;

 if (VAR_6 & VAR_1) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   VAR_8 = VAR_3[VAR_7].entity;
   VAR_9 += FUNC_2(VAR_5, VAR_8);
  }
 }

 if (VAR_6 & VAR_2) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
   VAR_8 = VAR_4[VAR_7].entity;
   VAR_9 += FUNC_2(VAR_5, VAR_8);
  }
 }


 VAR_10 = FUNC_1();
 if (VAR_10 && VAR_9 > VAR_0)
  VAR_9 = VAR_0;

 return VAR_9;
}
