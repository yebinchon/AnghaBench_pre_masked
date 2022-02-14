
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int vbus; int chgstatus; int work; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 TYPE_1__* VAR_4 ;

int FUNC_4(unsigned VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_4)
  return -VAR_0;


 FUNC_1(VAR_6);
 if (VAR_5 >= 500)
  VAR_5 = 500;
 else if (VAR_5 >= 100)
  VAR_5 = 100;
 else
  VAR_5 = 0;
 VAR_4->vbus = VAR_5;
 if ((VAR_4->chgstatus & VAR_2)
   && FUNC_3(
    VAR_1, &VAR_4->flags)) {

  FUNC_2(VAR_3, &VAR_4->work,
       0);
 }
 FUNC_0(VAR_6);

 return 0;
}
