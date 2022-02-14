
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {unsigned int state; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sfp*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sfp *VAR_2)
{
 unsigned int VAR_3 = VAR_2->state;

 if (VAR_3 & VAR_0)
  return;

 FUNC_0(VAR_2, VAR_3 | VAR_0);

 FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_3);
}
