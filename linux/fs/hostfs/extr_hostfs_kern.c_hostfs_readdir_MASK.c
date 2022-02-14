
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dir_context {unsigned long long pos; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct dir_context*,char*,int,unsigned long long,unsigned int) ;
 void* FUNC_4 (char*,int*) ;
 char* FUNC_5 (void*,unsigned long long*,unsigned long long*,int*,unsigned int*) ;
 int FUNC_6 (void*,unsigned long long) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, struct dir_context *VAR_2)
{
 void *VAR_3;
 char *VAR_4;
 unsigned long long VAR_5, VAR_6;
 int VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_4 = FUNC_2(VAR_1->f_path.dentry);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_3 = FUNC_4(VAR_4, &VAR_7);
 FUNC_0(VAR_4);
 if (VAR_3 == ((void*)0))
  return -VAR_7;
 VAR_5 = VAR_2->pos;
 FUNC_6(VAR_3, VAR_5);
 while ((VAR_4 = FUNC_5(VAR_3, &VAR_5, &VAR_6, &VAR_8, &VAR_9)) != ((void*)0)) {
  if (!FUNC_3(VAR_2, VAR_4, VAR_8, VAR_6, VAR_9))
   break;
  VAR_2->pos = VAR_5;
 }
 FUNC_1(VAR_3);
 return 0;
}
