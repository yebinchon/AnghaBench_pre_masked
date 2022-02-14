
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {int dummy; } ;
struct tm6000_core {int is_res_read; struct tm6000_fh* resources; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm6000_core*,int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct tm6000_core *VAR_1, struct tm6000_fh *VAR_2,
     bool VAR_3)
{

 if (VAR_1->resources == VAR_2 && VAR_1->is_res_read == VAR_3)
  return 1;


 if (VAR_1->resources)
  return 0;


 VAR_1->resources = VAR_2;
 VAR_1->is_res_read = VAR_3;
 FUNC_0(VAR_1, VAR_0, "res: get\n");
 return 1;
}
