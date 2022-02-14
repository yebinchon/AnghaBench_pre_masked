
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int * gpio; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct sfp *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4] != VAR_0 || !VAR_3->gpio[VAR_4])
   continue;

  VAR_6 = FUNC_1(VAR_3->gpio[VAR_4]);
  if (VAR_6)
   VAR_5 |= FUNC_0(VAR_4);
 }

 return VAR_5;
}
