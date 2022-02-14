
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum fsl_diu_monitor_port { ____Placeholder_fsl_diu_monitor_port } fsl_diu_monitor_port ;
struct TYPE_2__ {int (* valid_monitor_port ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum fsl_diu_monitor_port FUNC_3(const char *VAR_4)
{
 enum fsl_diu_monitor_port VAR_5 = VAR_1;
 unsigned long VAR_6;

 if (VAR_4) {
  if (!FUNC_0(VAR_4, 10, &VAR_6) && (VAR_6 <= 2))
   VAR_5 = (enum fsl_diu_monitor_port) VAR_6;
  else if (FUNC_1(VAR_4, "lvds", 4) == 0)
   VAR_5 = VAR_2;
  else if (FUNC_1(VAR_4, "dlvds", 5) == 0)
   VAR_5 = VAR_0;
 }

 if (VAR_3.valid_monitor_port)
  VAR_5 = VAR_3.valid_monitor_port(VAR_5);

 return VAR_5;
}
