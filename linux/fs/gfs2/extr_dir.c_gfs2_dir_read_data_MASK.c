
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; int sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (struct gfs2_inode*,int *,unsigned int) ;
 int FUNC_6 (int *,scalar_t__,int*,scalar_t__*,int*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 struct buffer_head* FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (int ,scalar_t__,int ,int ,struct buffer_head**) ;
 int FUNC_11 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_12 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_3, __be64 *VAR_4,
         unsigned int VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_1(&VAR_3->i_inode);
 u64 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (FUNC_8(VAR_3))
  return FUNC_5(VAR_3, VAR_4, VAR_5);

 if (FUNC_4(VAR_6, FUNC_7(VAR_3)))
  return -VAR_1;

 VAR_7 = 0;
 VAR_10 = FUNC_3(VAR_7, VAR_6->sd_jbsize) + sizeof(struct gfs2_meta_header);

 while (VAR_11 < VAR_5) {
  unsigned int VAR_13;
  struct buffer_head *VAR_14;
  int VAR_15;

  VAR_13 = VAR_5 - VAR_11;
  if (VAR_13 > VAR_6->sd_sb.sb_bsize - VAR_10)
   VAR_13 = VAR_6->sd_sb.sb_bsize - VAR_10;

  if (!VAR_9) {
   VAR_15 = 0;
   VAR_12 = FUNC_6(&VAR_3->i_inode, VAR_7, &VAR_15,
      &VAR_8, &VAR_9);
   if (VAR_12 || !VAR_8)
    goto fail;
   FUNC_0(VAR_9 < 1);
   VAR_14 = FUNC_9(VAR_3->i_gl, VAR_8, VAR_9);
  } else {
   VAR_12 = FUNC_10(VAR_3->i_gl, VAR_8, VAR_0, 0, &VAR_14);
   if (VAR_12)
    goto fail;
  }
  VAR_12 = FUNC_11(VAR_6, VAR_14, VAR_2);
  if (VAR_12) {
   FUNC_2(VAR_14);
   goto fail;
  }
  VAR_8++;
  VAR_9--;
  FUNC_12(VAR_4, VAR_14->b_data + VAR_10, VAR_13);
  FUNC_2(VAR_14);
  VAR_4 += (VAR_13/sizeof(__be64));
  VAR_11 += VAR_13;
  VAR_7++;
  VAR_10 = sizeof(struct gfs2_meta_header);
 }

 return VAR_11;
fail:
 return (VAR_11) ? VAR_11 : VAR_12;
}
