
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct delayed_call*,int ,char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static const char *FUNC_6(struct dentry *VAR_5,
           struct inode *VAR_6,
           struct delayed_call *VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_8 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 VAR_9 = FUNC_1(VAR_6, VAR_8);
 if (FUNC_5(VAR_9 < 0)) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }
 FUNC_4(VAR_7, VAR_4, VAR_8);
 return VAR_8;
}
