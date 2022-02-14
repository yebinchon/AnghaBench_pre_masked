
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lockstate; } ;


 unsigned int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1, VAR_5);
 VAR_4 = FUNC_0();
 VAR_4 |= (unsigned int)VAR_0->lockstate << 8;
 FUNC_3(&VAR_1, VAR_5);

 if (VAR_4 != VAR_2) {
  FUNC_1(VAR_2, VAR_4);
  VAR_2 = VAR_4;
 }
}
