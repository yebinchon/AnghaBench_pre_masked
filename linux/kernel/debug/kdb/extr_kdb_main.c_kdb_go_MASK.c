
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,char const**,int*,unsigned long*,long*,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(int VAR_7, const char **VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;
 long VAR_12;

 if (FUNC_4() != VAR_6) {
  FUNC_1("go must execute on the entry cpu, "
      "please use \"cpu %d\" and then execute go\n",
      VAR_6);
  return VAR_2;
 }
 if (VAR_7 == 1) {
  VAR_11 = 1;
  VAR_10 = FUNC_3(VAR_7, VAR_8, &VAR_11,
         &VAR_9, &VAR_12, ((void*)0));
  if (VAR_10)
   return VAR_10;
 } else if (VAR_7) {
  return VAR_1;
 }

 VAR_10 = VAR_3;
 if (FUNC_0(VAR_0)) {
  FUNC_1("Catastrophic error detected\n");
  FUNC_1("kdb_continue_catastrophic=%d, ",
   VAR_4);
  if (VAR_4 == 0 && VAR_5++ == 0) {
   FUNC_1("type go a second time if you really want "
       "to continue\n");
   return 0;
  }
  if (VAR_4 == 2) {
   FUNC_1("forcing reboot\n");
   FUNC_2(0, ((void*)0));
  }
  FUNC_1("attempting to continue\n");
 }
 return VAR_10;
}
