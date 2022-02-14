
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int i_ino; } ;


 TYPE_2__* FUNC_0 (int ,struct buffer_head*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct buffer_head* FUNC_4 (int ,int ) ;
 struct inode* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 TYPE_1__* FUNC_8 (struct dentry*) ;
 struct dentry* FUNC_9 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct dentry *VAR_1)
{
 struct inode *VAR_2;
 struct buffer_head *VAR_3;

 VAR_3 = FUNC_4(VAR_1->d_sb, FUNC_8(VAR_1)->i_ino);
 if (!VAR_3)
  return FUNC_2(-VAR_0);

 VAR_2 = FUNC_5(VAR_1->d_sb,
      FUNC_6(FUNC_0(VAR_1->d_sb, VAR_3)->parent));
 FUNC_7(VAR_3);
 if (FUNC_3(VAR_2))
  return FUNC_1(VAR_2);

 return FUNC_9(VAR_2);
}
