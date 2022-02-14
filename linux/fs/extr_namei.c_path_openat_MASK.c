
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_flags {int open_flag; } ;
struct nameidata {int flags; } ;
struct file {int f_flags; int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct file* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 struct file* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct nameidata*,struct file*,struct open_flags const*) ;
 int FUNC_6 (struct nameidata*,unsigned int,struct file*) ;
 int FUNC_7 (struct nameidata*,unsigned int,struct open_flags const*,struct file*) ;
 int FUNC_8 (struct file*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char const*,struct nameidata*) ;
 char* FUNC_11 (struct nameidata*,unsigned int) ;
 int FUNC_12 (struct nameidata*) ;
 char* FUNC_13 (struct nameidata*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct file *FUNC_15(struct nameidata *VAR_11,
   const struct open_flags *VAR_12, unsigned VAR_13)
{
 struct file *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(VAR_12->open_flag, FUNC_4());
 if (FUNC_1(VAR_14))
  return VAR_14;

 if (FUNC_14(VAR_14->f_flags & VAR_10)) {
  VAR_15 = FUNC_7(VAR_11, VAR_13, VAR_12, VAR_14);
 } else if (FUNC_14(VAR_14->f_flags & VAR_9)) {
  VAR_15 = FUNC_6(VAR_11, VAR_13, VAR_14);
 } else {
  const char *VAR_16 = FUNC_11(VAR_11, VAR_13);
  while (!(VAR_15 = FUNC_10(VAR_16, VAR_11)) &&
   (VAR_15 = FUNC_5(VAR_11, VAR_14, VAR_12)) > 0) {
   VAR_11->flags &= ~(VAR_7|VAR_5|VAR_6);
   VAR_16 = FUNC_13(VAR_11);
  }
  FUNC_12(VAR_11);
 }
 if (FUNC_9(!VAR_15)) {
  if (FUNC_9(VAR_14->f_mode & VAR_4))
   return VAR_14;
  FUNC_2(1);
  VAR_15 = -VAR_1;
 }
 FUNC_8(VAR_14);
 if (VAR_15 == -VAR_2) {
  if (VAR_13 & VAR_8)
   VAR_15 = -VAR_0;
  else
   VAR_15 = -VAR_3;
 }
 return FUNC_0(VAR_15);
}
