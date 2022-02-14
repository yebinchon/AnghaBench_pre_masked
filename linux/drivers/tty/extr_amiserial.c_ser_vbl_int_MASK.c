
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_state {int IER; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct serial_state*) ;

__attribute__((used)) static irqreturn_t FUNC_1( int VAR_2, void *VAR_3)
{

 struct serial_state *VAR_4 = VAR_3;




 if(VAR_4->IER & VAR_1)
   FUNC_0(VAR_4);
 return VAR_0;
}
