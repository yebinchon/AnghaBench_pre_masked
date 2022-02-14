
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_sccb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct init_sccb*) ;
 int FUNC_1 (struct init_sccb*) ;

unsigned int FUNC_2(struct init_sccb *VAR_3)
{
 if (!(FUNC_1(VAR_3) & VAR_1))
  return 0;
 if (!(FUNC_0(VAR_3) & (VAR_0 | VAR_2)))
  return 0;
 return 1;
}
