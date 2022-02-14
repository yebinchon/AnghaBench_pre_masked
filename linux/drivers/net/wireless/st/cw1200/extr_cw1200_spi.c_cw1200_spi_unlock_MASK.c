
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbus_priv {int wq; int lock; scalar_t__ claimed; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hwbus_priv *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_0->claimed = 0;
 FUNC_1(&VAR_0->lock, VAR_1);
 FUNC_2(&VAR_0->wq);

 return;
}
