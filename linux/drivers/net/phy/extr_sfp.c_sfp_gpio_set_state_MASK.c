
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {scalar_t__* gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct sfp *VAR_5, unsigned int VAR_6)
{
 if (VAR_6 & VAR_2) {

  if (VAR_5->gpio[VAR_1])
   FUNC_1(VAR_5->gpio[VAR_1],
            VAR_6 & VAR_4);
  if (VAR_6 & VAR_3)
   FUNC_1(VAR_5->gpio[VAR_0],
            VAR_6 & VAR_3);
 } else {

  if (VAR_5->gpio[VAR_1])
   FUNC_0(VAR_5->gpio[VAR_1]);
  if (VAR_6 & VAR_3)
   FUNC_0(VAR_5->gpio[VAR_0]);
 }
}
