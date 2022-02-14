
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {TYPE_1__* cfg; } ;
struct TYPE_2__ {int asd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct vpfe_device *VAR_1,
       int *VAR_2,
       int *VAR_3,
       int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->cfg->asd); VAR_5++) {
  if (VAR_4 < (VAR_6 + 1)) {
   *VAR_2 = VAR_5;
   *VAR_3 = VAR_4 - VAR_6;
   return 0;
  }
  VAR_6++;
 }
 return -VAR_0;
}
