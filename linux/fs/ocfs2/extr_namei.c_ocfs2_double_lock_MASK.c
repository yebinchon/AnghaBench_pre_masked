
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {scalar_t__ ip_blkno; } ;
typedef struct buffer_head* inode ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct buffer_head**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct buffer_head**,struct buffer_head**,int,int ) ;
 int FUNC_5 (struct buffer_head**,int) ;
 int FUNC_6 (struct buffer_head**,struct buffer_head**) ;
 int FUNC_7 (unsigned long long,unsigned long long) ;
 int FUNC_8 (unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_4,
        struct buffer_head **VAR_5,
        struct inode *VAR_6,
        struct buffer_head **VAR_7,
        struct inode *VAR_8,
        int VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12;
 struct ocfs2_inode_info *VAR_13 = FUNC_0(VAR_6);
 struct ocfs2_inode_info *VAR_14 = FUNC_0(VAR_8);

 FUNC_7((unsigned long long)VAR_13->ip_blkno,
    (unsigned long long)VAR_14->ip_blkno);

 if (*VAR_5)
  *VAR_5 = ((void*)0);
 if (*VAR_7)
  *VAR_7 = ((void*)0);



 if (VAR_13->ip_blkno != VAR_14->ip_blkno) {
  VAR_11 = FUNC_3(VAR_4, VAR_14->ip_blkno,
    VAR_13->ip_blkno);
  if (VAR_11 < 0) {
   VAR_10 = VAR_11;
   goto bail;
  }

  VAR_12 = FUNC_3(VAR_4, VAR_13->ip_blkno,
    VAR_14->ip_blkno);
  if (VAR_12 < 0) {
   VAR_10 = VAR_12;
   goto bail;
  }

  if ((VAR_11 == 1) ||
    (VAR_13->ip_blkno < VAR_14->ip_blkno &&
    VAR_12 == 0)) {

   FUNC_6(VAR_7, VAR_5);
   FUNC_6(VAR_8, VAR_6);
  }

  VAR_10 = FUNC_4(VAR_8, VAR_7, 1,
    VAR_9 == 1 ? VAR_2 : VAR_1);
  if (VAR_10 < 0) {
   if (VAR_10 != -VAR_0)
    FUNC_2(VAR_10);
   goto bail;
  }
 }


 VAR_10 = FUNC_4(VAR_6, VAR_5, 1,
   VAR_9 == 1 ? VAR_3 : VAR_1);
 if (VAR_10 < 0) {




  if (VAR_13->ip_blkno != VAR_14->ip_blkno) {
   FUNC_5(VAR_8, 1);
   FUNC_1(*VAR_7);
   *VAR_7 = ((void*)0);
  }

  if (VAR_10 != -VAR_0)
   FUNC_2(VAR_10);
 }

 FUNC_8(
   (unsigned long long)VAR_13->ip_blkno,
   (unsigned long long)VAR_14->ip_blkno);

bail:
 if (VAR_10)
  FUNC_2(VAR_10);
 return VAR_10;
}
