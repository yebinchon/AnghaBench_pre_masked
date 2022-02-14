
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int sioaddr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool FUNC_7(void)
{




 bool VAR_5 = 1;

 FUNC_1(&VAR_4.lock);
 if (FUNC_3(VAR_4.sioaddr))
  goto exit_unlock;
 FUNC_6(VAR_4.sioaddr, VAR_2);

 VAR_5 = (FUNC_5(VAR_4.sioaddr, VAR_3) & FUNC_0(0))
  && (FUNC_5(VAR_4.sioaddr, VAR_1)
   & FUNC_0(VAR_0));

 FUNC_4(VAR_4.sioaddr);

exit_unlock:
 FUNC_2(&VAR_4.lock);
 return VAR_5;
}
