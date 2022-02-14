
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct cred {int dummy; } ;


 struct cred* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,int) ;
 int FUNC_2 (struct cred const*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0)
{
 const struct cred *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->d_sb);
 VAR_2 = FUNC_1(VAR_0, 0);
 FUNC_2(VAR_1);

 return VAR_2;
}
