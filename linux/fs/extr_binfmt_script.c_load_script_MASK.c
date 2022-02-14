
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {char* buf; int interp_flags; char const* interp; struct file* file; int argc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (char const*,struct linux_binprm*) ;
 int FUNC_4 (int,char const**,struct linux_binprm*) ;
 int FUNC_5 (struct file*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 struct file* FUNC_8 (char const*) ;
 int FUNC_9 (struct linux_binprm*) ;
 int FUNC_10 (struct linux_binprm*) ;
 int FUNC_11 (struct linux_binprm*) ;
 char* FUNC_12 (char*,int,char) ;

__attribute__((used)) static int FUNC_13(struct linux_binprm *VAR_3)
{
 const char *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7;
 struct file *VAR_8;
 int VAR_9;


 if ((VAR_3->buf[0] != '#') || (VAR_3->buf[1] != '!'))
  return -VAR_2;







 if (VAR_3->interp_flags & VAR_0)
  return -VAR_1;


 FUNC_2(VAR_3->file);
 FUNC_5(VAR_3->file);
 VAR_3->file = ((void*)0);
 VAR_7 = VAR_3->buf + sizeof(VAR_3->buf) - 1;
 VAR_6 = FUNC_12(VAR_3->buf, sizeof(VAR_3->buf), '\n');
 if (!VAR_6) {
  VAR_6 = FUNC_6(VAR_3->buf + 2, VAR_7);
  if (!VAR_6)
   return -VAR_2;




  if (!FUNC_7(VAR_6, VAR_7))
   return -VAR_2;
  VAR_6 = VAR_7;
 }

 *VAR_6 = '\0';
 while (VAR_6 > VAR_3->buf) {
  VAR_6--;
  if ((*VAR_6 == ' ') || (*VAR_6 == '\t'))
   *VAR_6 = '\0';
  else
   break;
 }
 for (VAR_6 = VAR_3->buf+2; (*VAR_6 == ' ') || (*VAR_6 == '\t'); VAR_6++);
 if (*VAR_6 == '\0')
  return -VAR_2;
 VAR_5 = VAR_6;
 VAR_4 = ((void*)0);
 for ( ; *VAR_6 && (*VAR_6 != ' ') && (*VAR_6 != '\t'); VAR_6++)
                ;
 while ((*VAR_6 == ' ') || (*VAR_6 == '\t'))
  *VAR_6++ = '\0';
 if (*VAR_6)
  VAR_4 = VAR_6;
 VAR_9 = FUNC_10(VAR_3);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_4(1, &VAR_3->interp, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_3->argc++;
 if (VAR_4) {
  VAR_9 = FUNC_4(1, &VAR_4, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_3->argc++;
 }
 VAR_9 = FUNC_4(1, &VAR_5, VAR_3);
 if (VAR_9)
  return VAR_9;
 VAR_3->argc++;
 VAR_9 = FUNC_3(VAR_5, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;




 VAR_8 = FUNC_8(VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_3->file = VAR_8;
 VAR_9 = FUNC_9(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 return FUNC_11(VAR_3);
}
