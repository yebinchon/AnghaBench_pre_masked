
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_tty {int minor; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct gb_tty *VAR_2)
{
 int VAR_3 = VAR_2->minor;

 VAR_2->minor = 0;
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1, VAR_3);
 FUNC_2(&VAR_0);
}
