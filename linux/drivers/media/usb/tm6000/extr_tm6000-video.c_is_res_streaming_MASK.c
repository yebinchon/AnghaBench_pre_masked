
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {int dummy; } ;
struct tm6000_core {struct tm6000_fh* resources; } ;



__attribute__((used)) static bool FUNC_0(struct tm6000_core *VAR_0, struct tm6000_fh *VAR_1)
{

 if (VAR_0->resources == VAR_1)
  return 1;

 return 0;
}
