
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_xattr_value_root {int xr_list; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_xattr_value_root*,int*,int*) ;
 int FUNC_3 (int ,int,struct ocfs2_alloc_context**) ;
 int FUNC_4 (struct inode*,int ,int *,int *,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1,
     struct ocfs2_xattr_value_root *VAR_2,
     struct ocfs2_caching_info *VAR_3,
     struct buffer_head *VAR_4,
     struct ocfs2_alloc_context **VAR_5,
     int *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u32 VAR_9, VAR_10;
 unsigned int VAR_11;

 *VAR_6 = 0;
 VAR_7 = FUNC_4(VAR_1, 0, &VAR_9,
           &VAR_10,
           &VAR_2->xr_list,
           &VAR_11);
 if (VAR_7) {
  FUNC_1(VAR_7);
  goto out;
 }

 if (!(VAR_11 & VAR_0))
  goto out;

 VAR_7 = FUNC_2(VAR_1, VAR_3,
       VAR_4, VAR_2,
       &VAR_8, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_3(FUNC_0(VAR_1->i_sb),
      VAR_8, VAR_5);
 if (VAR_7)
  FUNC_1(VAR_7);

out:
 return VAR_7;
}
