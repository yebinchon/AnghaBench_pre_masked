
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {long max_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (int,struct cred const*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 () ;
 long FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;

struct file *FUNC_9(int VAR_4, const struct cred *VAR_5)
{
 static long VAR_6;
 struct file *VAR_7;




 if (FUNC_5() >= VAR_2.max_files && !FUNC_3(VAR_0)) {




  if (FUNC_7(&VAR_3) >= VAR_2.max_files)
   goto over;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (!FUNC_1(VAR_7))
  FUNC_6(&VAR_3);

 return VAR_7;

over:

 if (FUNC_5() > VAR_6) {
  FUNC_8("VFS: file-max limit %lu reached\n", FUNC_4());
  VAR_6 = FUNC_5();
 }
 return FUNC_0(-VAR_1);
}
