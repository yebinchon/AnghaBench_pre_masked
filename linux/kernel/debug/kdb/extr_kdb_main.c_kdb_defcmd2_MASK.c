
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defcmd_set {char** command; int count; int usable; int help; int usage; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct defcmd_set* VAR_4 ;
 int VAR_5 ;
 char** FUNC_0 (int,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**,char**,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_7, const char *VAR_8)
{
 struct defcmd_set *VAR_9 = VAR_4 + VAR_5 - 1;
 char **VAR_10 = VAR_9->command;
 if (FUNC_6(VAR_8, "endefcmd") == 0) {
  VAR_3 = 0;
  if (!VAR_9->count)
   VAR_9->usable = 0;
  if (VAR_9->usable)




   FUNC_2(VAR_9->name, VAR_6, VAR_9->usage,
        VAR_9->help, 0,
        VAR_1);
  return 0;
 }
 if (!VAR_9->usable)
  return VAR_2;
 VAR_9->command = FUNC_0(VAR_9->count + 1, sizeof(*(VAR_9->command)), VAR_0);
 if (!VAR_9->command) {
  FUNC_1("Could not allocate new kdb_defcmd table for %s\n",
      VAR_7);
  VAR_9->usable = 0;
  return VAR_2;
 }
 FUNC_5(VAR_9->command, VAR_10, VAR_9->count * sizeof(*(VAR_9->command)));
 VAR_9->command[VAR_9->count++] = FUNC_3(VAR_7, VAR_0);
 FUNC_4(VAR_10);
 return 0;
}
