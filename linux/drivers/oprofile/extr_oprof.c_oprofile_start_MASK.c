
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* start ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(void)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_4);

 if (!VAR_1)
  goto out;

 VAR_5 = 0;

 if (VAR_3)
  goto out;

 FUNC_2();

 if ((VAR_5 = VAR_2.start()))
  goto out;

 FUNC_3();

 VAR_3 = 1;
out:
 FUNC_1(&VAR_4);
 return VAR_5;
}
