
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct se_hba {struct config_group hba_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (struct se_hba*) ;
 struct config_group* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct se_hba*) ;
 int VAR_2 ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 struct se_hba* FUNC_4 (char*,unsigned long,int ) ;
 int FUNC_5 (char*,int ,unsigned long*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char*,char*) ;
 int VAR_3 ;
 int FUNC_11 () ;

__attribute__((used)) static struct config_group *FUNC_12(
 struct config_group *VAR_4,
 const char *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;
 struct se_hba *VAR_9;
 char VAR_10[VAR_2];
 unsigned long VAR_11 = 0;
 int VAR_12;

 FUNC_6(VAR_10, 0, VAR_2);
 if (FUNC_9(VAR_5) >= VAR_2) {
  FUNC_7("Passed *name strlen(): %d exceeds"
   " TARGET_CORE_NAME_MAX_LEN: %d\n", (int)FUNC_9(VAR_5),
   VAR_2);
  return FUNC_1(-VAR_1);
 }
 FUNC_8(VAR_10, VAR_2, "%s", VAR_5);

 VAR_7 = FUNC_10(VAR_10, "_");
 if (!VAR_7) {
  FUNC_7("Unable to locate \"_\" for $SUBSYSTEM_PLUGIN_$HOST_ID\n");
  return FUNC_1(-VAR_0);
 }
 VAR_6 = VAR_10;




 VAR_8 = FUNC_10(VAR_7+1, "_");
 if (VAR_8) {
  *VAR_8 = '\0';
  VAR_8++;
  VAR_7 = VAR_8;
 } else {
  *VAR_7 = '\0';
  VAR_7++;
 }

 VAR_12 = FUNC_5(VAR_7, 0, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_7("kstrtoul() returned %d for"
    " plugin_dep_id\n", VAR_12);
  return FUNC_1(VAR_12);
 }



 FUNC_11();

 VAR_9 = FUNC_4(VAR_6, VAR_11, 0);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 FUNC_3(&VAR_9->hba_group, VAR_5,
   &VAR_3);

 return &VAR_9->hba_group;
}
