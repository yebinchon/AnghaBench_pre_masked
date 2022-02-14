
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct TYPE_2__ {unsigned int sb_bsize; unsigned long sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_inode {int i_gl; struct inode i_inode; } ;
struct buffer_head {int b_size; struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct page*,unsigned int,int ) ;
 struct page* FUNC_6 (struct address_space*,unsigned long,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*,unsigned long,struct buffer_head*,int) ;
 scalar_t__ FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (int ,struct buffer_head*) ;
 void* FUNC_12 (struct page*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ,int,int,struct buffer_head**) ;
 int FUNC_15 (void*,void*,unsigned int) ;
 struct buffer_head* FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct page*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_23(struct gfs2_inode *VAR_7, unsigned long VAR_8,
      unsigned VAR_9, void *VAR_10, unsigned VAR_11)
{
 struct inode *VAR_12 = &VAR_7->i_inode;
 struct gfs2_sbd *VAR_13 = FUNC_0(VAR_12);
 struct address_space *VAR_14 = VAR_12->i_mapping;
 struct page *VAR_15;
 struct buffer_head *VAR_16;
 void *VAR_17;
 u64 VAR_18;
 unsigned VAR_19 = VAR_13->sd_sb.sb_bsize, VAR_20 = 0, VAR_21 = 0;
 unsigned VAR_22 = VAR_11, VAR_23 = VAR_9;
 int VAR_24 = 0;

 VAR_18 = VAR_8 << (VAR_3 - VAR_13->sd_sb.sb_bsize_shift);
 VAR_21 = VAR_9 % VAR_19;

 VAR_15 = FUNC_6(VAR_14, VAR_8, VAR_2);
 if (!VAR_15)
  return -VAR_1;
 if (!FUNC_17(VAR_15))
  FUNC_5(VAR_15, VAR_19, 0);

 VAR_16 = FUNC_16(VAR_15);
 while (!VAR_24) {

  if (VAR_23 >= ((VAR_20 * VAR_19) + VAR_19)) {
   VAR_16 = VAR_16->b_this_page;
   VAR_20++;
   VAR_18++;
   continue;
  }
  if (!FUNC_2(VAR_16)) {
   FUNC_8(VAR_12, VAR_18, VAR_16, 1);
   if (!FUNC_2(VAR_16))
    goto unlock_out;

   if (FUNC_3(VAR_16))
    FUNC_22(VAR_15, VAR_20 * VAR_19, VAR_16->b_size);
  }
  if (FUNC_1(VAR_15))
   FUNC_19(VAR_16);
  if (!FUNC_4(VAR_16)) {
   FUNC_14(VAR_5, VAR_4 | VAR_6, 1, &VAR_16);
   FUNC_21(VAR_16);
   if (!FUNC_4(VAR_16))
    goto unlock_out;
  }
  if (FUNC_9(VAR_7))
   FUNC_11(VAR_7->i_gl, VAR_16);
  else
   FUNC_10(VAR_7);


  if (VAR_22 > (VAR_19 - VAR_21)) {
   VAR_23 += (VAR_19 - VAR_21);
   VAR_22 -= (VAR_19 - VAR_21);
   VAR_21 = VAR_23 % VAR_19;
   continue;
  }
  VAR_24 = 1;
 }


 VAR_17 = FUNC_12(VAR_15);
 FUNC_15(VAR_17 + VAR_9, VAR_10, VAR_11);
 FUNC_7(VAR_15);
 FUNC_13(VAR_17);
 FUNC_20(VAR_15);
 FUNC_18(VAR_15);

 return 0;

unlock_out:
 FUNC_20(VAR_15);
 FUNC_18(VAR_15);
 return -VAR_0;
}
