
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_dvb; } ;
struct tm6000_core {int * dvb; TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tm6000_core*) ;

__attribute__((used)) static int FUNC_2(struct tm6000_core *VAR_0)
{
 if (!VAR_0)
  return 0;

 if (!VAR_0->caps.has_dvb)
  return 0;

 if (VAR_0->dvb) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->dvb);
  VAR_0->dvb = ((void*)0);
 }

 return 0;
}
