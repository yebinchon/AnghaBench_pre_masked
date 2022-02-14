
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct procdata {int log_name; scalar_t__ log; } ;
struct TYPE_3__ {int * proclog; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int FUNC_0 (struct procdata*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(hysdn_card *VAR_1)
{
 struct procdata *VAR_2;

 if ((VAR_2 = (struct procdata *) VAR_1->proclog) != ((void*)0)) {
  if (VAR_2->log)
   FUNC_1(VAR_2->log_name, VAR_0);
  FUNC_0(VAR_2);
  VAR_1->proclog = ((void*)0);
 }
}
