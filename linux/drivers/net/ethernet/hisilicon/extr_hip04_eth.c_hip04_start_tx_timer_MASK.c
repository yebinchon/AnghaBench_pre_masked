
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hip04_priv {int tx_coalesce_usecs; int tx_coalesce_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned long,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct hip04_priv *VAR_2)
{
 unsigned long VAR_3 = VAR_2->tx_coalesce_usecs * VAR_1 / 2;


 FUNC_0(&VAR_2->tx_coalesce_timer, FUNC_1(VAR_3),
          VAR_3, VAR_0);
}
