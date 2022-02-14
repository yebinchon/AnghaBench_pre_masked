
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,int *) ;
 struct file* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct file *VAR_5;

 FUNC_7(VAR_4, VAR_0, VAR_1);
 VAR_5 = FUNC_4(VAR_4, VAR_2, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_6("db_root: cannot open: %s\n", VAR_4);
  return;
 }
 if (!FUNC_1(FUNC_2(VAR_5)->i_mode)) {
  FUNC_3(VAR_5, ((void*)0));
  FUNC_6("db_root: not a valid directory: %s\n", VAR_4);
  return;
 }
 FUNC_3(VAR_5, ((void*)0));

 FUNC_8(VAR_3, VAR_4, VAR_0);
 FUNC_5("Target_Core_ConfigFS: db_root set to %s\n", VAR_3);
}
