
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

irq_handler_t FUNC_1(struct adapter *VAR_4)
{
 FUNC_0((VAR_4->flags &
        (VAR_1 | VAR_0)) == 0);
 if (VAR_4->flags & VAR_1)
  return VAR_3;
 else
  return VAR_2;
}
