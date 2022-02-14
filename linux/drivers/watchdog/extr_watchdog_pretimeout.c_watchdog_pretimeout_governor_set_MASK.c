
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int gov; } ;
struct governor_priv {int gov; } ;


 int VAR_0 ;
 struct governor_priv* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct watchdog_device *VAR_3,
         const char *VAR_4)
{
 struct governor_priv *VAR_5;

 FUNC_1(&VAR_1);

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5) {
  FUNC_2(&VAR_1);
  return -VAR_0;
 }

 FUNC_3(&VAR_2);
 VAR_3->gov = VAR_5->gov;
 FUNC_4(&VAR_2);

 FUNC_2(&VAR_1);

 return 0;
}
