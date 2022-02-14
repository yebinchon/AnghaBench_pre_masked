
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int * dentry; int * mnt; } ;
struct nameidata {struct path path; } ;


 int FUNC_0 (struct path*) ;
 int FUNC_1 (char const*,struct nameidata*) ;
 int FUNC_2 (struct nameidata*) ;
 char* FUNC_3 (struct nameidata*,unsigned int) ;
 int FUNC_4 (struct nameidata*) ;
 char* FUNC_5 (struct nameidata*) ;

__attribute__((used)) static int
FUNC_6(struct nameidata *VAR_0, unsigned VAR_1, struct path *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_0, VAR_1);
 int VAR_4;

 while (!(VAR_4 = FUNC_1(VAR_3, VAR_0)) &&
  (VAR_4 = FUNC_2(VAR_0)) > 0) {
  VAR_3 = FUNC_5(VAR_0);
 }
 if (!VAR_4) {
  *VAR_2 = VAR_0->path;
  VAR_0->path.mnt = ((void*)0);
  VAR_0->path.dentry = ((void*)0);
  FUNC_0(VAR_2);
 }
 FUNC_4(VAR_0);
 return VAR_4;
}
