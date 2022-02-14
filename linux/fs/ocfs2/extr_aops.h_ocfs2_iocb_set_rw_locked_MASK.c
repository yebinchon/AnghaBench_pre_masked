
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int private; } ;


 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static inline void FUNC_2(struct kiocb *VAR_0, int VAR_1)
{
 FUNC_1(0, (unsigned long *)&VAR_0->private);
 if (VAR_1)
  FUNC_1(1, (unsigned long *)&VAR_0->private);
 else
  FUNC_0(1, (unsigned long *)&VAR_0->private);
}
