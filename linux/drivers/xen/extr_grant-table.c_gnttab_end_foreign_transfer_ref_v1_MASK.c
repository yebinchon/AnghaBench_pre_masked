
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef size_t grant_ref_t ;
struct TYPE_4__ {TYPE_1__* v1; } ;
struct TYPE_3__ {int flags; unsigned long frame; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int,int ) ;

__attribute__((used)) static unsigned long FUNC_4(grant_ref_t VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5;
 u16 *VAR_6;

 VAR_6 = &VAR_2.v1[VAR_3].flags;





 while (!((VAR_5 = *VAR_6) & VAR_0)) {
  if (FUNC_3(VAR_6, VAR_5, 0) == VAR_5)
   return 0;
  FUNC_1();
 }


 while (!(VAR_5 & VAR_1)) {
  VAR_5 = *VAR_6;
  FUNC_1();
 }

 FUNC_2();
 VAR_4 = VAR_2.v1[VAR_3].frame;
 FUNC_0(VAR_4 == 0);

 return VAR_4;
}
