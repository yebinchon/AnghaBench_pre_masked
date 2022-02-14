
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbus_priv {int claimed; int wq; int lock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct hwbus_priv *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_3, VAR_2);

 FUNC_2();

 FUNC_1(&VAR_4->wq, &VAR_3);
 FUNC_6(&VAR_4->lock, VAR_5);
 while (1) {
  FUNC_5(VAR_1);
  if (!VAR_4->claimed)
   break;
  FUNC_7(&VAR_4->lock, VAR_5);
  FUNC_4();
  FUNC_6(&VAR_4->lock, VAR_5);
 }
 FUNC_5(VAR_0);
 VAR_4->claimed = 1;
 FUNC_7(&VAR_4->lock, VAR_5);
 FUNC_3(&VAR_4->wq, &VAR_3);

 return;
}
