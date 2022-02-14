
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {scalar_t__ ip_blkno; } ;
struct inode {scalar_t__ i_ino; } ;
struct buffer_head {scalar_t__ i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct inode**,int,int ) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*,struct inode*) ;
 int FUNC_9 (unsigned long long,unsigned long long) ;
 int FUNC_10 (unsigned long long,unsigned long long) ;
 int FUNC_11 (struct inode*,struct inode*) ;

int FUNC_12(struct inode *VAR_3,
         struct buffer_head **VAR_4,
         struct inode *VAR_5,
         struct buffer_head **VAR_6)
{
 struct inode *VAR_7 = VAR_3;
 struct inode *VAR_8 = VAR_5;
 struct ocfs2_inode_info *VAR_9;
 struct ocfs2_inode_info *VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 bool VAR_13 = (VAR_3 == VAR_5);
 bool VAR_14 = (VAR_7->i_ino > VAR_8->i_ino);
 int VAR_15;


 FUNC_2(VAR_3, VAR_5);
 if (VAR_14)
  FUNC_8(VAR_7, VAR_8);

 VAR_15 = FUNC_6(VAR_7, 1);
 if (VAR_15) {
  FUNC_3(VAR_15);
  goto out_i1;
 }
 if (!VAR_13) {
  VAR_15 = FUNC_6(VAR_8, 1);
  if (VAR_15) {
   FUNC_3(VAR_15);
   goto out_i2;
  }
 }


 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_0(VAR_8);

 FUNC_9((unsigned long long)VAR_9->ip_blkno,
    (unsigned long long)VAR_10->ip_blkno);


 if (VAR_9->ip_blkno > VAR_10->ip_blkno)
  FUNC_3(-VAR_1);


 VAR_15 = FUNC_4(VAR_7, &VAR_11, 1,
      VAR_2);
 if (VAR_15 < 0) {
  if (VAR_15 != -VAR_0)
   FUNC_3(VAR_15);
  goto out_rw2;
 }


 if (!VAR_13) {
  VAR_15 = FUNC_4(VAR_8, &VAR_12, 1,
       VAR_2);
  if (VAR_15 < 0) {
   if (VAR_15 != -VAR_0)
    FUNC_3(VAR_15);
   goto out_cl1;
  }
 } else {
  VAR_12 = VAR_11;
 }





 if (VAR_14)
  FUNC_8(VAR_11, VAR_12);
 *VAR_4 = VAR_11;
 *VAR_6 = VAR_12;

 FUNC_10(
   (unsigned long long)VAR_9->ip_blkno,
   (unsigned long long)VAR_10->ip_blkno);

 return 0;

out_cl1:
 FUNC_5(VAR_7, 1);
 FUNC_1(VAR_11);
out_rw2:
 FUNC_7(VAR_8, 1);
out_i2:
 FUNC_7(VAR_7, 1);
out_i1:
 FUNC_11(VAR_3, VAR_5);
 return VAR_15;
}
