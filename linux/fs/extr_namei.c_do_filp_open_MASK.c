
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_flags {int lookup_flags; } ;
struct nameidata {int dummy; } ;
struct filename {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct file* FUNC_1 (struct nameidata*,struct open_flags const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nameidata*,int,struct filename*) ;
 scalar_t__ FUNC_4 (int) ;

struct file *FUNC_5(int VAR_4, struct filename *VAR_5,
  const struct open_flags *VAR_6)
{
 struct nameidata VAR_7;
 int VAR_8 = VAR_6->lookup_flags;
 struct file *VAR_9;

 FUNC_3(&VAR_7, VAR_4, VAR_5);
 VAR_9 = FUNC_1(&VAR_7, VAR_6, VAR_8 | VAR_2);
 if (FUNC_4(VAR_9 == FUNC_0(-VAR_0)))
  VAR_9 = FUNC_1(&VAR_7, VAR_6, VAR_8);
 if (FUNC_4(VAR_9 == FUNC_0(-VAR_1)))
  VAR_9 = FUNC_1(&VAR_7, VAR_6, VAR_8 | VAR_3);
 FUNC_2();
 return VAR_9;
}
