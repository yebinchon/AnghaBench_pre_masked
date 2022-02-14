
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; } ;
struct file {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (int,struct cred const*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct cred const*) ;
 int FUNC_6 (struct path const*,struct file*) ;

struct file *FUNC_7(const struct path *VAR_0, int VAR_1,
    const struct cred *VAR_2)
{
 int VAR_3;
 struct file *VAR_4;

 FUNC_5(VAR_2);


 FUNC_0(!VAR_0->mnt);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!FUNC_2(VAR_4)) {
  VAR_3 = FUNC_6(VAR_0, VAR_4);
  if (VAR_3) {
   FUNC_4(VAR_4);
   VAR_4 = FUNC_1(VAR_3);
  }
 }
 return VAR_4;
}
