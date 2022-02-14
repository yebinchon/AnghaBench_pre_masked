
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct file {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 () ;
 struct file* FUNC_3 (struct path*,int ,int ) ;
 int FUNC_4 (int,struct file*) ;
 int FUNC_5 (char const*,struct path*,int ,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(const char *VAR_3, dev_t VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_6(VAR_0);
 if (FUNC_7(VAR_6 >= 0)) {
  struct file *VAR_7;
  struct path VAR_8;

  VAR_5 = FUNC_5(VAR_3, &VAR_8, VAR_2, &VAR_4);
  if (VAR_5)
   goto out;

  VAR_7 = FUNC_3(&VAR_8, VAR_1, FUNC_2());
  FUNC_8(&VAR_8);
  if (FUNC_0(VAR_7)) {
   VAR_5 = FUNC_1(VAR_7);
   goto out;
  }

  FUNC_4(VAR_6, VAR_7);
 }

 return VAR_6;

out:
 FUNC_9(VAR_6);
 return VAR_5;
}
