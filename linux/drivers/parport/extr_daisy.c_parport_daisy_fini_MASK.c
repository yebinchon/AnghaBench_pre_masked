
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct daisydev {struct daisydev* next; struct parport* port; } ;


 int FUNC_0 (struct daisydev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct daisydev* VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct parport *VAR_3)
{
 struct daisydev **VAR_4;

 FUNC_1(&VAR_2);
 VAR_4 = &VAR_1;
 while (*VAR_4) {
  struct daisydev *VAR_5 = *VAR_4;
  if (VAR_5->port != VAR_3) {
   VAR_4 = &VAR_5->next;
   continue;
  }
  *VAR_4 = VAR_5->next;
  FUNC_0(VAR_5);
 }




 if (!VAR_1) VAR_0 = 0;
 FUNC_2(&VAR_2);
 return;
}
