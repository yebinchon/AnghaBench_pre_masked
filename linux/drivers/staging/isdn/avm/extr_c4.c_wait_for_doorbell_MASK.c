
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mbase; } ;
typedef TYPE_1__ avmcard ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(avmcard *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_1 + VAR_3;
 while (FUNC_0(VAR_2->mbase + VAR_0) != 0xffffffff) {
  if (!FUNC_2(VAR_1, VAR_4))
   return -1;
  FUNC_1();
 }
 return 0;
}
