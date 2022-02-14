
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int * err_page; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{

 FUNC_1(&VAR_0.mutex);
 if (VAR_0.err_page) {
  FUNC_0(VAR_0.err_page);
  VAR_0.err_page = ((void*)0);
 }
 FUNC_2(&VAR_0.mutex);
}
