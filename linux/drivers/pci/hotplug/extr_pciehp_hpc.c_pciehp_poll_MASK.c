
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int pending_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct controller*) ;
 int FUNC_3 (int ,struct controller*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4)
{
 struct controller *VAR_5 = VAR_4;

 FUNC_4(10 * VAR_0);

 while (!FUNC_1()) {

  while (FUNC_2(VAR_1, VAR_5) == VAR_2 ||
         FUNC_0(&VAR_5->pending_events))
   FUNC_3(VAR_1, VAR_5);

  if (VAR_3 <= 0 || VAR_3 > 60)
   VAR_3 = 2;

  FUNC_4(VAR_3 * VAR_0);
 }

 return 0;
}
