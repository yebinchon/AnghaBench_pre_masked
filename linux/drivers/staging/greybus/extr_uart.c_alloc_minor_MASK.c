
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_tty {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct gb_tty*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct gb_tty *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2);
 VAR_5 = FUNC_0(&VAR_3, VAR_4, 0, VAR_0, VAR_1);
 FUNC_2(&VAR_2);
 if (VAR_5 >= 0)
  VAR_4->minor = VAR_5;
 return VAR_5;
}
