
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_generation; int i_sb; } ;
struct dentry {int dummy; } ;
typedef int namebuf ;
struct TYPE_2__ {int k_objectid; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode const*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct dentry* FUNC_9 (char*,struct dentry*,int ) ;
 struct dentry* FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int,char*,int,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,struct dentry*,int) ;

__attribute__((used)) static struct dentry *FUNC_15(const struct inode *VAR_2, int VAR_3)
{
 struct dentry *VAR_4, *VAR_5;
 char VAR_6[17];

 VAR_4 = FUNC_10(VAR_2->i_sb, VAR_3);
 if (FUNC_2(VAR_4))
  return VAR_4;

 FUNC_11(VAR_6, sizeof(VAR_6), "%X.%X",
   FUNC_8(FUNC_1(VAR_2)->k_objectid),
   VAR_2->i_generation);

 FUNC_6(FUNC_3(VAR_4), VAR_1);

 VAR_5 = FUNC_9(VAR_6, VAR_4, FUNC_12(VAR_6));
 if (!FUNC_2(VAR_5) && FUNC_4(VAR_5)) {
  int VAR_7 = -VAR_0;

  if (FUNC_13(VAR_3))
   VAR_7 = FUNC_14(FUNC_3(VAR_4), VAR_5, 0700);
  if (VAR_7) {
   FUNC_5(VAR_5);
   VAR_5 = FUNC_0(VAR_7);
  }
 }

 FUNC_7(FUNC_3(VAR_4));
 FUNC_5(VAR_4);
 return VAR_5;
}
