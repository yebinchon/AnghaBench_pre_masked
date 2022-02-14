
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_device {int dummy; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;






 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (char*,struct cxgbi_device*,...) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, enum cxgb4_state VAR_1)
{
 struct cxgbi_device *VAR_2 = VAR_0;

 switch (VAR_1) {
 case 128:
  FUNC_1("cdev 0x%p, UP.\n", VAR_2);
  break;
 case 129:
  FUNC_1("cdev 0x%p, RECOVERY.\n", VAR_2);

  break;
 case 130:
  FUNC_1("cdev 0x%p, DOWN.\n", VAR_2);
  break;
 case 131:
  FUNC_1("cdev 0x%p, DETACH.\n", VAR_2);
  FUNC_0(VAR_2);
  break;
 default:
  FUNC_1("cdev 0x%p, unknown state %d.\n", VAR_2, VAR_1);
  break;
 }
 return 0;
}
