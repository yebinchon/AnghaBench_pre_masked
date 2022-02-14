
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct inode {int i_ino; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*,int ,struct dentry*,int ,int,int) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (struct v9fs_session_info*,int ) ;
 struct v9fs_session_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct dentry*,int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_2, struct dentry *VAR_3, umode_t VAR_4, dev_t VAR_5)
{
 struct v9fs_session_info *VAR_6 = FUNC_7(VAR_2);
 int VAR_7;
 char VAR_8[2 + VAR_1 + 1 + VAR_1 + 1];
 u32 VAR_9;

 FUNC_4(VAR_0, " %lu,%pd mode: %hx MAJOR: %u MINOR: %u\n",
   VAR_2->i_ino, VAR_3, VAR_4,
   FUNC_0(VAR_5), FUNC_1(VAR_5));


 if (FUNC_2(VAR_4))
  FUNC_5(VAR_8, "b %u %u", FUNC_0(VAR_5), FUNC_1(VAR_5));
 else if (FUNC_3(VAR_4))
  FUNC_5(VAR_8, "c %u %u", FUNC_0(VAR_5), FUNC_1(VAR_5));
 else
  *VAR_8 = 0;

 VAR_9 = FUNC_6(VAR_6, VAR_4);
 VAR_7 = FUNC_8(VAR_2, VAR_3, VAR_9, VAR_8);

 return VAR_7;
}
