
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (char*,int ) ;
 int VAR_1 ;
 struct dentry* VAR_2 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_1("uvcvideo", VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0, "Unable to create debugfs directory\n");
  return;
 }

 VAR_2 = VAR_3;
}
