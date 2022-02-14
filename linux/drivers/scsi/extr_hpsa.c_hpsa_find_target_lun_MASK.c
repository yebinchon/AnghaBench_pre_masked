
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int ndevices; TYPE_1__** dev; } ;
struct TYPE_2__ {int bus; int target; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_2,
 unsigned char VAR_3[], int VAR_4, int *VAR_5, int *VAR_6)
{



 int VAR_7, VAR_8 = 0;
 FUNC_0(VAR_1, VAR_0);

 FUNC_2(VAR_1, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_2->ndevices; VAR_7++) {
  if (VAR_2->dev[VAR_7]->bus == VAR_4 && VAR_2->dev[VAR_7]->target != -1)
   FUNC_1(VAR_2->dev[VAR_7]->target, VAR_1);
 }

 VAR_7 = FUNC_3(VAR_1, VAR_0);
 if (VAR_7 < VAR_0) {

  *VAR_5 = VAR_7;
  *VAR_6 = 0;
  VAR_8 = 1;
 }
 return !VAR_8;
}
