
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 char* FUNC_4 (struct dentry*,size_t*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct delayed_call*,int ,char*) ;

__attribute__((used)) static const char *FUNC_7(struct dentry *VAR_2,
         struct inode *VAR_3,
         struct delayed_call *VAR_4)
{
 size_t VAR_5;
 char *VAR_6;

 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_4(VAR_2, &VAR_5);
 if (FUNC_1(VAR_6))
  return VAR_6;
 FUNC_5(FUNC_2(VAR_2),
    FUNC_2(FUNC_3(VAR_2)));
 VAR_6[VAR_5] = '\0';
 FUNC_6(VAR_4, VAR_1, VAR_6);
 return VAR_6;
}
