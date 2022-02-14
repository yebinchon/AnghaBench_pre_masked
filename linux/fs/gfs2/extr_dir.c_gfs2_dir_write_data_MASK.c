
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {unsigned int sb_bsize; } ;
struct gfs2_sbd {unsigned int sd_jbsize; TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct TYPE_7__ {scalar_t__ i_size; int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_gl; TYPE_2__ i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,int ) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*,scalar_t__) ;
 int FUNC_6 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_7 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 int FUNC_9 (struct gfs2_inode*,char const*,unsigned int,unsigned int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 scalar_t__ FUNC_12 (struct gfs2_inode*) ;
 scalar_t__ FUNC_13 (struct gfs2_inode*) ;
 int FUNC_14 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 int FUNC_16 (struct gfs2_inode*,int *) ;
 int FUNC_17 (TYPE_2__*,scalar_t__) ;
 int FUNC_18 (scalar_t__,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_19(struct gfs2_inode *VAR_2, const char *VAR_3,
          u64 VAR_4, unsigned int VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_0(&VAR_2->i_inode);
 struct buffer_head *VAR_7;
 u64 VAR_8, VAR_9;
 u32 VAR_10 = 0;
 unsigned int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (!VAR_5)
  return 0;

 if (FUNC_12(VAR_2) && VAR_4 + VAR_5 <= FUNC_13(VAR_2))
  return FUNC_9(VAR_2, VAR_3, (unsigned int)VAR_4,
           VAR_5);

 if (FUNC_4(VAR_6, FUNC_11(VAR_2)))
  return -VAR_0;

 if (FUNC_12(VAR_2)) {
  VAR_13 = FUNC_16(VAR_2, ((void*)0));
  if (VAR_13)
   return VAR_13;
 }

 VAR_8 = VAR_4;
 VAR_11 = FUNC_3(VAR_8, VAR_6->sd_jbsize) + sizeof(struct gfs2_meta_header);

 while (VAR_12 < VAR_5) {
  unsigned int VAR_15;
  struct buffer_head *VAR_16;

  VAR_15 = VAR_5 - VAR_12;
  if (VAR_15 > VAR_6->sd_sb.sb_bsize - VAR_11)
   VAR_15 = VAR_6->sd_sb.sb_bsize - VAR_11;

  if (!VAR_10) {
   VAR_14 = 1;
   VAR_13 = FUNC_10(&VAR_2->i_inode, VAR_8, &VAR_14,
      &VAR_9, &VAR_10);
   if (VAR_13)
    goto fail;
   VAR_13 = -VAR_1;
   if (FUNC_5(VAR_6, VAR_9))
    goto fail;
  }

  if (VAR_15 == VAR_6->sd_jbsize || VAR_14)
   VAR_13 = FUNC_8(VAR_2, VAR_9, &VAR_16);
  else
   VAR_13 = FUNC_7(VAR_2, VAR_9, &VAR_16);

  if (VAR_13)
   goto fail;

  FUNC_15(VAR_2->i_gl, VAR_16);
  FUNC_18(VAR_16->b_data + VAR_11, VAR_3, VAR_15);
  FUNC_1(VAR_16);

  VAR_3 += VAR_15;
  VAR_12 += VAR_15;
  VAR_8++;
  VAR_9++;
  VAR_10--;

  VAR_11 = sizeof(struct gfs2_meta_header);
 }

out:
 VAR_13 = FUNC_14(VAR_2, &VAR_7);
 if (VAR_13)
  return VAR_13;

 if (VAR_2->i_inode.i_size < VAR_4 + VAR_12)
  FUNC_17(&VAR_2->i_inode, VAR_4 + VAR_12);
 VAR_2->i_inode.i_mtime = VAR_2->i_inode.i_ctime = FUNC_2(&VAR_2->i_inode);

 FUNC_15(VAR_2->i_gl, VAR_7);
 FUNC_6(VAR_2, VAR_7->b_data);
 FUNC_1(VAR_7);

 return VAR_12;
fail:
 if (VAR_12)
  goto out;
 return VAR_13;
}
