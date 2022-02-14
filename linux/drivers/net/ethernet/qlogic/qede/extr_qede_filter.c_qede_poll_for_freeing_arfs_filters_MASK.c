
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct TYPE_2__ {int filter_count; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qede_dev*,int) ;

void FUNC_3(struct qede_dev *VAR_1)
{
 int VAR_2 = VAR_0;

 while (VAR_2) {
  FUNC_2(VAR_1, 0);

  if (!VAR_1->arfs->filter_count)
   break;

  FUNC_1(100);
  VAR_2--;
 }

 if (!VAR_2) {
  FUNC_0(VAR_1, "Timeout in polling for arfs filter free\n");


  FUNC_2(VAR_1, 1);
 }
}
