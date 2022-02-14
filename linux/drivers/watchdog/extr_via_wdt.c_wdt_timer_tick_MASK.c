
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 if (FUNC_2(VAR_1, VAR_2) ||
    (!FUNC_3(&VAR_4))) {
  FUNC_4();
  FUNC_0(&VAR_3, VAR_1 + VAR_0);
 } else
  FUNC_1("I will reboot your machine !\n");
}
