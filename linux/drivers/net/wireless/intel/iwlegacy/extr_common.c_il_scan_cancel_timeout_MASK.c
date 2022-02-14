
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int status; int mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*) ;
 unsigned long VAR_1 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int
FUNC_7(struct il_priv *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_1 + FUNC_3(VAR_3);

 FUNC_2(&VAR_2->mutex);

 FUNC_0("Scan cancel timeout\n");

 FUNC_1(VAR_2);

 while (FUNC_6(VAR_1, VAR_4)) {
  if (!FUNC_5(VAR_0, &VAR_2->status))
   break;
  FUNC_4(20);
 }

 return FUNC_5(VAR_0, &VAR_2->status);
}
