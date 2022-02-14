
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_index ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(int VAR_3)
{
 static int VAR_4 = 1;

 if (VAR_4)
  VAR_4 = 0;
 else
  VAR_2->get_index(VAR_2);
 VAR_0 = 0;
 VAR_1 = VAR_3;
}
