
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4, pm_message_t VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_1);





 if ((VAR_6 & VAR_0) != 0 && (VAR_6 & VAR_2) == 0) {
  FUNC_0("session active; suspend requires disconnect\n");
  FUNC_1(&VAR_3->gadget, 0);
 }

 return 0;
}
