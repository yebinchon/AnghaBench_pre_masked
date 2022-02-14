
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iattr*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct dentry *VAR_1, struct iattr *VAR_2)
{
 int VAR_3;
 FUNC_2(VAR_0, "__orangefs_setattr: called on %pd\n",
     VAR_1);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
         goto out;
 VAR_3 = FUNC_0(FUNC_1(VAR_1), VAR_2);
 FUNC_4(FUNC_1(VAR_1), 1);
out:
 FUNC_2(VAR_0, "orangefs_setattr: returning %d\n",
     VAR_3);
 return VAR_3;
}
