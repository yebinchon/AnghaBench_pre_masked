
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtproc_info {int tx_lock; int svq; int sleepers; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct virtproc_info *VAR_0)
{

 FUNC_1(&VAR_0->tx_lock);


 if (FUNC_0(&VAR_0->sleepers))

  FUNC_3(VAR_0->svq);

 FUNC_2(&VAR_0->tx_lock);
}
