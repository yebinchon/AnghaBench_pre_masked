
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int,int ) ;
 struct pid_namespace* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct delayed_call*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,struct pid_namespace*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static const char *FUNC_7(struct dentry *VAR_7,
          struct inode *VAR_8,
          struct delayed_call *VAR_9)
{
 struct pid_namespace *VAR_10 = FUNC_2(VAR_8);
 pid_t VAR_11 = FUNC_5(VAR_5, VAR_10);
 char *VAR_12;

 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_1(10 + 1, VAR_7 ? VAR_4 : VAR_3);
 if (FUNC_6(!VAR_12))
  return VAR_7 ? FUNC_0(-VAR_2) : FUNC_0(-VAR_0);
 FUNC_4(VAR_12, "%u", VAR_11);
 FUNC_3(VAR_9, VAR_6, VAR_12);
 return VAR_12;
}
