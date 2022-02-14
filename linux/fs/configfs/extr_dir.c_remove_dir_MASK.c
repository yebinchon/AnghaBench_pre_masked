
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*,struct dentry*,int ) ;
 int FUNC_7 (int ,struct dentry*) ;

__attribute__((used)) static void FUNC_8(struct dentry * VAR_0)
{
 struct dentry * VAR_1 = FUNC_4(VAR_0->d_parent);

 FUNC_0(VAR_0);

 if (FUNC_3(VAR_0))
  FUNC_7(FUNC_2(VAR_1),VAR_0);

 FUNC_6(" o %pd removing done (%d)\n", VAR_0, FUNC_1(VAR_0));

 FUNC_5(VAR_1);
}
