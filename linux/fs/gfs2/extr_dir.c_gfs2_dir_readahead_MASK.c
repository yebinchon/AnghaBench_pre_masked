
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct inode {int dummy; } ;
struct gfs2_inode {int * i_hash_cache; struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct file_ra_state {unsigned int start; } ;
struct buffer_head {int b_end_io; } ;
typedef int pgoff_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int VAR_5 ;
 struct buffer_head* FUNC_4 (struct gfs2_glock*,scalar_t__,int) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int,struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_6, unsigned VAR_7, u32 VAR_8,
          struct file_ra_state *VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_6);
 struct gfs2_glock *VAR_11 = VAR_10->i_gl;
 struct buffer_head *VAR_12;
 u64 VAR_13 = 0, VAR_14;
 unsigned VAR_15;


 if (VAR_8 + VAR_0 < VAR_9->start)
  return;

 VAR_9->start = FUNC_5((pgoff_t)VAR_8, VAR_9->start);
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (VAR_9->start >= VAR_7)
   break;

  VAR_14 = VAR_13;
  VAR_13 = FUNC_1(VAR_10->i_hash_cache[VAR_9->start]);
  VAR_9->start++;
  if (VAR_13 == VAR_14)
   continue;

  VAR_12 = FUNC_4(VAR_11, VAR_13, 1);
  if (FUNC_7(VAR_12)) {
   if (FUNC_3(VAR_12)) {
    FUNC_8(VAR_12);
    FUNC_2(VAR_12);
    continue;
   }
   VAR_12->b_end_io = VAR_5;
   FUNC_6(VAR_2,
      VAR_4 | VAR_1 | VAR_3,
      VAR_12);
   continue;
  }
  FUNC_2(VAR_12);
 }
}
