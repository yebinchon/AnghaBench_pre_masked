
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct cxgbit_device {TYPE_1__ lldi; int flags; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;


 int VAR_0 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cxgbit_device*) ;
 int FUNC_2 (struct cxgbit_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, enum cxgb4_state VAR_2)
{
 struct cxgbit_device *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 128:
  FUNC_5(VAR_0, &VAR_3->flags);
  FUNC_4("cdev %s state UP.\n", FUNC_3(VAR_3->lldi.pdev));
  break;
 case 129:
  FUNC_0(VAR_0, &VAR_3->flags);
  FUNC_1(VAR_3);
  FUNC_4("cdev %s state RECOVERY.\n", FUNC_3(VAR_3->lldi.pdev));
  break;
 case 130:
  FUNC_4("cdev %s state DOWN.\n", FUNC_3(VAR_3->lldi.pdev));
  break;
 case 131:
  FUNC_0(VAR_0, &VAR_3->flags);
  FUNC_4("cdev %s state DETACH.\n", FUNC_3(VAR_3->lldi.pdev));
  FUNC_2(VAR_3);
  break;
 default:
  FUNC_4("cdev %s unknown state %d.\n",
   FUNC_3(VAR_3->lldi.pdev), VAR_2);
  break;
 }
 return 0;
}
