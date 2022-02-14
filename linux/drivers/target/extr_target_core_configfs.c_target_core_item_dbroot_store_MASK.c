
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 TYPE_1__* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,int *) ;
 struct file* FUNC_4 (char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,char const*) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_12(struct config_item *VAR_7,
     const char *VAR_8, size_t VAR_9)
{
 ssize_t VAR_10;
 struct file *VAR_11;

 FUNC_6(&VAR_6);
 if (!FUNC_5(&VAR_5)) {
  FUNC_7(&VAR_6);
  FUNC_9("db_root: cannot be changed: target drivers registered");
  return -VAR_1;
 }

 if (VAR_9 > (VAR_0 - 1)) {
  FUNC_7(&VAR_6);
  FUNC_9("db_root: count %d exceeds DB_ROOT_LEN-1: %u\n",
         (int)VAR_9, VAR_0 - 1);
  return -VAR_1;
 }

 VAR_10 = FUNC_10(VAR_4, VAR_0, "%s", VAR_8);
 if (!VAR_10) {
  FUNC_7(&VAR_6);
  return -VAR_1;
 }
 if (VAR_4[VAR_10 - 1] == '\n')
  VAR_4[VAR_10 - 1] = '\0';


 VAR_11 = FUNC_4(VAR_4, VAR_2, 0);
 if (FUNC_0(VAR_11)) {
  FUNC_7(&VAR_6);
  FUNC_9("db_root: cannot open: %s\n", VAR_4);
  return -VAR_1;
 }
 if (!FUNC_1(FUNC_2(VAR_11)->i_mode)) {
  FUNC_3(VAR_11, ((void*)0));
  FUNC_7(&VAR_6);
  FUNC_9("db_root: not a directory: %s\n", VAR_4);
  return -VAR_1;
 }
 FUNC_3(VAR_11, ((void*)0));

 FUNC_11(VAR_3, VAR_4, VAR_10);

 FUNC_7(&VAR_6);

 FUNC_8("Target_Core_ConfigFS: db_root set to %s\n", VAR_3);

 return VAR_10;
}
