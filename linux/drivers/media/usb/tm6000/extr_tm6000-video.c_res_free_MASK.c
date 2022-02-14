
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {int dummy; } ;
struct tm6000_core {struct tm6000_fh* resources; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm6000_core*,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct tm6000_core *VAR_1, struct tm6000_fh *VAR_2)
{

 if (VAR_1->resources != VAR_2)
  return;

 VAR_1->resources = ((void*)0);
 FUNC_0(VAR_1, VAR_0, "res: put\n");
}
