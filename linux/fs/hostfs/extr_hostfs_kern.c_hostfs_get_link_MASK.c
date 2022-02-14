
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (struct delayed_call*,int ,char*) ;

__attribute__((used)) static const char *FUNC_7(struct dentry *VAR_6,
       struct inode *VAR_7,
       struct delayed_call *VAR_8)
{
 char *VAR_9;
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_9 = FUNC_5(VAR_4, VAR_3);
 if (VAR_9) {
  char *VAR_10 = FUNC_2(VAR_6);
  int VAR_11 = -VAR_2;
  if (VAR_10) {
   VAR_11 = FUNC_3(VAR_10, VAR_9, VAR_4);
   if (VAR_11 == VAR_4)
    VAR_11 = -VAR_0;
   FUNC_1(VAR_10);
  }
  if (VAR_11 < 0) {
   FUNC_4(VAR_9);
   return FUNC_0(VAR_11);
  }
 } else {
  return FUNC_0(-VAR_2);
 }

 FUNC_6(VAR_8, VAR_5, VAR_9);
 return VAR_9;
}
