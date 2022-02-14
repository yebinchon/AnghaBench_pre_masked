
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_leaf_bh; int dl_hinfo; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,char const*,int,int *) ;
 int FUNC_6 (struct ocfs2_super*,struct inode*,struct buffer_head*,unsigned int,struct ocfs2_dir_lookup_result*,struct buffer_head**) ;
 int FUNC_7 (struct inode*,char const*,int,struct buffer_head**) ;
 int FUNC_8 (struct inode*,struct buffer_head*,char const*,int,struct buffer_head**,unsigned int*) ;
 int FUNC_9 (struct inode*,struct buffer_head*,char const*,int,struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*) ;
 int FUNC_11 (unsigned long long,int) ;

int FUNC_12(struct ocfs2_super *VAR_3,
     struct inode *VAR_4,
     struct buffer_head *VAR_5,
     const char *VAR_6,
     int VAR_7,
     struct ocfs2_dir_lookup_result *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = 1;
 struct buffer_head *VAR_11 = ((void*)0);

 FUNC_11(
  (unsigned long long)FUNC_1(VAR_4)->ip_blkno, VAR_7);

 if (!VAR_7) {
  VAR_9 = -VAR_0;
  FUNC_3(VAR_9);
  goto out;
 }
 if (FUNC_10(VAR_3))
  FUNC_5(VAR_4, VAR_6, VAR_7, &VAR_8->dl_hinfo);

 if (FUNC_4(VAR_4)) {
  VAR_9 = FUNC_9(VAR_4, VAR_5,
            VAR_6, VAR_7, VAR_8);
  if (VAR_9)
   FUNC_3(VAR_9);
  goto out;
 }

 if (FUNC_1(VAR_4)->ip_dyn_features & VAR_2) {
  VAR_9 = FUNC_8(VAR_4, VAR_5, VAR_6,
           VAR_7, &VAR_11, &VAR_10);
 } else
  VAR_9 = FUNC_7(VAR_4, VAR_6, VAR_7, &VAR_11);

 if (VAR_9 && VAR_9 != -VAR_1) {
  FUNC_3(VAR_9);
  goto out;
 }

 if (VAR_9 == -VAR_1) {



  FUNC_0(VAR_11);

  VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_10,
           VAR_8, &VAR_11);
  if (VAR_9) {
   if (VAR_9 != -VAR_1)
    FUNC_3(VAR_9);
   goto out;
  }

  FUNC_0(!VAR_11);
 }

 VAR_8->dl_leaf_bh = VAR_11;
 VAR_11 = ((void*)0);
out:
 FUNC_2(VAR_11);
 return VAR_9;
}
