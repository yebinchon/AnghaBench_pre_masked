
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ideapad_private {struct dentry* debug; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,struct dentry*,struct ideapad_private*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ideapad_private *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_0("ideapad", ((void*)0));
 VAR_3->debug = VAR_4;

 FUNC_1("cfg", VAR_0, VAR_4, VAR_3, &VAR_1);
 FUNC_1("status", VAR_0, VAR_4, VAR_3, &VAR_2);
}
