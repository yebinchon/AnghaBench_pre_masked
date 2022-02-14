
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct fs_context {int dummy; } ;
struct file_system_type {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct fs_context*) ;
 int FUNC_2 (struct fs_context*,struct path*,int) ;
 struct fs_context* FUNC_3 (struct file_system_type*,int) ;
 struct file_system_type* FUNC_4 (char const*) ;
 int FUNC_5 (struct fs_context*) ;
 int FUNC_6 (struct fs_context*,void*) ;
 int FUNC_7 (struct file_system_type*) ;
 int FUNC_8 (struct fs_context*) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct fs_context*) ;
 int FUNC_12 (struct fs_context*,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_13(struct path *VAR_4, const char *VAR_5, int VAR_6,
   int VAR_7, const char *VAR_8, void *VAR_9)
{
 struct file_system_type *VAR_10;
 struct fs_context *VAR_11;
 const char *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 if (!VAR_5)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_5);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_10->fs_flags & VAR_3) {
  VAR_12 = FUNC_9(VAR_5, '.');
  if (VAR_12) {
   VAR_12++;
   if (!*VAR_12) {
    FUNC_7(VAR_10);
    return -VAR_0;
   }
  }
 }

 VAR_11 = FUNC_3(VAR_10, VAR_6);
 FUNC_7(VAR_10);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 if (VAR_12)
  VAR_13 = FUNC_12(VAR_11, "subtype",
       VAR_12, FUNC_10(VAR_12));
 if (!VAR_13 && VAR_8)
  VAR_13 = FUNC_12(VAR_11, "source", VAR_8, FUNC_10(VAR_8));
 if (!VAR_13)
  VAR_13 = FUNC_6(VAR_11, VAR_9);
 if (!VAR_13 && !FUNC_5(VAR_11))
  VAR_13 = -VAR_2;
 if (!VAR_13)
  VAR_13 = FUNC_11(VAR_11);
 if (!VAR_13)
  VAR_13 = FUNC_2(VAR_11, VAR_4, VAR_7);

 FUNC_8(VAR_11);
 return VAR_13;
}
