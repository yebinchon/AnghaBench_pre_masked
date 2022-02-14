
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_3;

 FUNC_5(&VAR_0.lock);
 VAR_0.root = FUNC_2("gb_loopback", ((void*)0));

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_4(&VAR_1);
 if (VAR_3)
  goto err_unregister;

 return 0;

err_unregister:
 FUNC_1(&VAR_2);
err:
 FUNC_3(VAR_0.root);
 return VAR_3;
}
