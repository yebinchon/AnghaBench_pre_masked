
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_icount {int dcd; int rng; int cts; int dsr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static void FUNC_0(struct async_icount *VAR_4,
      unsigned char VAR_5)
{

 if (VAR_5 & VAR_2)
  VAR_4->dsr++;
 if (VAR_5 & VAR_1)
  VAR_4->cts++;
 if (VAR_5 & VAR_3)
  VAR_4->rng++;
 if (VAR_5 & VAR_0)
  VAR_4->dcd++;
}
