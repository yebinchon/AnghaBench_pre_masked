
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * release; int parent; int * bus; } ;
struct tcm_loop_hba {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct tcm_loop_hba *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.parent = VAR_2;
 VAR_4->dev.release = &VAR_3;
 FUNC_0(&VAR_4->dev, "tcm_loop_adapter_%d", VAR_5);

 VAR_6 = FUNC_1(&VAR_4->dev);
 if (VAR_6) {
  FUNC_2("device_register() failed for tl_hba->dev: %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
