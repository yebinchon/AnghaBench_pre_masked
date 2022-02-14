
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int * dentry; int * mnt; } ;
struct nameidata {int flags; struct path path; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (char const*,struct nameidata*) ;
 int FUNC_6 (struct nameidata*) ;
 char* FUNC_7 (struct nameidata*,unsigned int) ;
 int FUNC_8 (struct nameidata*) ;
 char* FUNC_9 (struct nameidata*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct nameidata *VAR_3, unsigned VAR_4, struct path *VAR_5)
{
 const char *VAR_6 = FUNC_7(VAR_3, VAR_4);
 int VAR_7;

 if (FUNC_10(VAR_4 & VAR_2) && !FUNC_1(VAR_6)) {
  VAR_7 = FUNC_4(VAR_3);
  if (FUNC_10(VAR_7 < 0))
   VAR_6 = FUNC_0(VAR_7);
 }

 while (!(VAR_7 = FUNC_5(VAR_6, VAR_3))
  && ((VAR_7 = FUNC_6(VAR_3)) > 0)) {
  VAR_6 = FUNC_9(VAR_3);
 }
 if (!VAR_7)
  VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7 && VAR_3->flags & VAR_1)
  if (!FUNC_3(VAR_3->path.dentry))
   VAR_7 = -VAR_0;
 if (!VAR_7) {
  *VAR_5 = VAR_3->path;
  VAR_3->path.mnt = ((void*)0);
  VAR_3->path.dentry = ((void*)0);
 }
 FUNC_8(VAR_3);
 return VAR_7;
}
