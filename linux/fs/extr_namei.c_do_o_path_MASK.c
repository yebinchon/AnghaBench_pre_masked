
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct nameidata {int name; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nameidata*,unsigned int,struct path*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct nameidata *VAR_0, unsigned VAR_1, struct file *VAR_2)
{
 struct path VAR_3;
 int VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_0->name, VAR_3.dentry, 0);
  VAR_4 = FUNC_3(&VAR_3, VAR_2);
  FUNC_2(&VAR_3);
 }
 return VAR_4;
}
