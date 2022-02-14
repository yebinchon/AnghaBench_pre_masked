
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_set {int dummy; } ;
struct ctl_table_header {struct ctl_table* ctl_table_arg; } ;
struct ctl_table {struct ctl_table* child; scalar_t__ procname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ctl_table_header* FUNC_0 (struct ctl_table_set*,char const*,struct ctl_table*) ;
 char* FUNC_1 (char const*,char*,scalar_t__) ;
 struct ctl_table* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct ctl_table*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, char *VAR_4,
 struct ctl_table_header ***VAR_5, struct ctl_table_set *VAR_6,
 struct ctl_table *VAR_7)
{
 struct ctl_table *VAR_8 = ((void*)0);
 struct ctl_table *VAR_9, *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = -VAR_1;

 for (VAR_9 = VAR_7; VAR_9->procname; VAR_9++) {
  if (VAR_9->child)
   VAR_12++;
  else
   VAR_11++;
 }

 VAR_10 = VAR_7;

 if (VAR_12 && VAR_11) {
  struct ctl_table *VAR_14;
  VAR_10 = FUNC_2(VAR_11 + 1, sizeof(struct ctl_table),
    VAR_2);
  if (!VAR_10)
   goto out;

  VAR_8 = VAR_10;
  for (VAR_14 = VAR_10, VAR_9 = VAR_7; VAR_9->procname; VAR_9++) {
   if (VAR_9->child)
    continue;
   *VAR_14 = *VAR_9;
   VAR_14++;
  }
 }


 if (VAR_11 || !VAR_12) {
  struct ctl_table_header *VAR_15;
  VAR_15 = FUNC_0(VAR_6, VAR_3, VAR_10);
  if (!VAR_15) {
   FUNC_3(VAR_8);
   goto out;
  }


  VAR_15->ctl_table_arg = VAR_8;
  **VAR_5 = VAR_15;
  (*VAR_5)++;
 }


 for (VAR_9 = VAR_7; VAR_9->procname; VAR_9++) {
  char *VAR_16;

  if (!VAR_9->child)
   continue;

  VAR_13 = -VAR_0;
  VAR_16 = FUNC_1(VAR_3, VAR_4, VAR_9->procname);
  if (!VAR_16)
   goto out;

  VAR_13 = FUNC_4(VAR_3, VAR_16, VAR_5,
        VAR_6, VAR_9->child);
  VAR_4[0] = '\0';
  if (VAR_13)
   goto out;
 }
 VAR_13 = 0;
out:

 return VAR_13;
}
