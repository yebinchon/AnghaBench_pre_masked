
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 struct proc_dir_entry* FUNC_1 (struct proc_dir_entry*,char const*,unsigned int) ;
 struct proc_dir_entry VAR_1 ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, struct proc_dir_entry **VAR_3,
        const char **VAR_4)
{
 const char *VAR_5 = VAR_2, *VAR_6;
 struct proc_dir_entry *VAR_7;
 unsigned int VAR_8;

 VAR_7 = *VAR_3;
 if (!VAR_7)
  VAR_7 = &VAR_1;

 while (1) {
  VAR_6 = FUNC_2(VAR_5, '/');
  if (!VAR_6)
   break;

  VAR_8 = VAR_6 - VAR_5;
  VAR_7 = FUNC_1(VAR_7, VAR_5, VAR_8);
  if (!VAR_7) {
   FUNC_0(1, "name '%s'\n", VAR_2);
   return -VAR_0;
  }
  VAR_5 += VAR_8 + 1;
 }
 *VAR_4 = VAR_5;
 *VAR_3 = VAR_7;
 return 0;
}
