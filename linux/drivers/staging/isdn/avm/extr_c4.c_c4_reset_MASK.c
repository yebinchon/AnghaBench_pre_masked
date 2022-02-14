
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mbase; } ;
typedef TYPE_1__ avmcard ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int,unsigned long) ;

__attribute__((used)) static void FUNC_5(avmcard *VAR_8)
{
 unsigned long VAR_9;

 FUNC_2(VAR_8->mbase + VAR_5, VAR_3);

 VAR_9 = VAR_7 + VAR_6 * 10;
 while (FUNC_1(VAR_8->mbase + VAR_5) != 0xffffffff) {
  if (!FUNC_4(VAR_7, VAR_9))
   return;
  FUNC_2(VAR_8->mbase + VAR_5, VAR_2);
  FUNC_3();
 }

 FUNC_0(VAR_8, VAR_4 + VAR_0, 0);
 FUNC_0(VAR_8, VAR_4 + VAR_1, 0);
}
