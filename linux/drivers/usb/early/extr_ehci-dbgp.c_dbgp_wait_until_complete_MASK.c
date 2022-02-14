
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 u32 VAR_4;
 int VAR_5 = VAR_2;

 do {
  VAR_4 = FUNC_2(&VAR_3->control);

  if (VAR_4 & VAR_0)
   break;
  FUNC_3(1);
 } while (--VAR_5 > 0);

 if (!VAR_5)
  return -VAR_2;





 FUNC_4(VAR_4 | VAR_0, &VAR_3->control);
 return (VAR_4 & VAR_1) ? -FUNC_0(VAR_4) : FUNC_1(VAR_4);
}
