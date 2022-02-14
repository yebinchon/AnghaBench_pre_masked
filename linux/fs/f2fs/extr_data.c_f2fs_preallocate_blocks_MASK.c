
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; scalar_t__ ki_pos; int ki_hint; int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_map_blocks {scalar_t__ m_lblk; scalar_t__ m_len; int m_may_create; int m_seg_type; int * m_next_extent; int * m_next_pgofs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct inode*,struct kiocb*,struct iov_iter*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*,struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct f2fs_map_blocks*,int,int) ;
 int FUNC_8 (int ) ;
 struct inode* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct iov_iter*) ;
 scalar_t__ FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,int ) ;

int FUNC_13(struct kiocb *VAR_6, struct iov_iter *VAR_7)
{
 struct inode *VAR_8 = FUNC_9(VAR_6->ki_filp);
 struct f2fs_map_blocks VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 bool VAR_12 = VAR_6->ki_flags & VAR_4;


 if (VAR_12) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_12 && FUNC_3(VAR_8, VAR_6, VAR_7))
  return 0;

 if (FUNC_11(VAR_8, VAR_3))
  return 0;

 VAR_9.m_lblk = FUNC_0(VAR_6->ki_pos);
 VAR_9.m_len = FUNC_1(VAR_6->ki_pos + FUNC_10(VAR_7));
 if (VAR_9.m_len > VAR_9.m_lblk)
  VAR_9.m_len -= VAR_9.m_lblk;
 else
  VAR_9.m_len = 0;

 VAR_9.m_next_pgofs = ((void*)0);
 VAR_9.m_next_extent = ((void*)0);
 VAR_9.m_seg_type = VAR_5;
 VAR_9.m_may_create = 1;

 if (VAR_12) {
  VAR_9.m_seg_type = FUNC_8(VAR_6->ki_hint);
  VAR_10 = FUNC_5(VAR_8, VAR_6, VAR_7) ?
     VAR_1 :
     VAR_2;
  goto map_blocks;
 }
 if (VAR_6->ki_pos + FUNC_10(VAR_7) > FUNC_2(VAR_8)) {
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11)
   return VAR_11;
 }
 if (FUNC_6(VAR_8))
  return VAR_11;

 VAR_10 = VAR_1;

map_blocks:
 VAR_11 = FUNC_7(VAR_8, &VAR_9, 1, VAR_10);
 if (VAR_9.m_len > 0 && VAR_11 == -VAR_0) {
  if (!VAR_12)
   FUNC_12(VAR_8, VAR_3);
  VAR_11 = 0;
 }
 return VAR_11;
}
