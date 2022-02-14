
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int sioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3.lock);
 VAR_4 = FUNC_3(VAR_3.sioaddr);
 if (VAR_4)
  goto exit_unlock;
 FUNC_5(VAR_3.sioaddr, VAR_2);

 FUNC_2(VAR_3.sioaddr, VAR_1,
   VAR_0);

 FUNC_4(VAR_3.sioaddr);

exit_unlock:
 FUNC_1(&VAR_3.lock);

 return VAR_4;
}
