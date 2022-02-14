
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {TYPE_1__* i_op; int i_mapping; int i_sb; } ;
struct fiemap_extent_info {int fi_flags; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int (* fiemap ) (struct inode*,struct fiemap_extent_info*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct inode*) ;
 struct cred* FUNC_2 (int ) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (struct inode*,struct fiemap_extent_info*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct fiemap_extent_info *VAR_3,
        u64 VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct inode *VAR_7 = FUNC_1(VAR_2);
 const struct cred *VAR_8;

 if (!VAR_7->i_op->fiemap)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2->i_sb);

 if (VAR_3->fi_flags & VAR_1)
  FUNC_0(VAR_7->i_mapping);

 VAR_6 = VAR_7->i_op->fiemap(VAR_7, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_8);

 return VAR_6;
}
