
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_host_info {int dev_info_list; } ;
struct sdebug_dev_info {void* lu_name; int dev_list; struct sdebug_host_info* sdbg_host; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sdebug_dev_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (void**) ;

__attribute__((used)) static struct sdebug_dev_info *FUNC_3(
   struct sdebug_host_info *VAR_3, gfp_t VAR_4)
{
 struct sdebug_dev_info *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_4);
 if (VAR_5) {
  if (VAR_1 == 1)
   FUNC_2(&VAR_5->lu_name);
  else if (VAR_1 == 2) {
   if (VAR_0)
    VAR_5->lu_name = VAR_2;
   else {
    FUNC_2(&VAR_2);
    VAR_0 = 1;
    VAR_5->lu_name = VAR_2;
   }
  }
  VAR_5->sdbg_host = VAR_3;
  FUNC_1(&VAR_5->dev_list, &VAR_3->dev_info_list);
 }
 return VAR_5;
}
