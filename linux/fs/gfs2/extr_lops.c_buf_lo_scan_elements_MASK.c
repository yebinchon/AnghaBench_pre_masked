
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {scalar_t__ rd_addr; int rd_gl; TYPE_1__* rd_bits; } ;
struct gfs2_meta_header {scalar_t__ mh_type; } ;
struct gfs2_log_descriptor {int ld_type; int ld_data1; } ;
struct gfs2_jdesc {int jd_replayed_blocks; int jd_found_blocks; int jd_inode; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ bi_bh; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct gfs2_sbd*,char*,int,...) ;
 struct gfs2_rgrpd* FUNC_9 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (struct gfs2_sbd*,struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct gfs2_glock*,scalar_t__) ;
 int FUNC_13 (struct gfs2_jdesc*,int *) ;
 int FUNC_14 (struct gfs2_jdesc*,int ,struct buffer_head**) ;
 scalar_t__ FUNC_15 (struct gfs2_jdesc*,scalar_t__,int ) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_18(struct gfs2_jdesc *VAR_3, u32 VAR_4,
    struct gfs2_log_descriptor *VAR_5, __be64 *VAR_6,
    int VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_3->jd_inode);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_3->jd_inode);
 struct gfs2_glock *VAR_10 = VAR_8->i_gl;
 unsigned int VAR_11 = FUNC_2(VAR_5->ld_data1);
 struct buffer_head *VAR_12, *VAR_13;
 u64 VAR_14;
 int VAR_15 = 0;

 if (VAR_7 != 1 || FUNC_2(VAR_5->ld_type) != VAR_1)
  return 0;

 FUNC_13(VAR_3, &VAR_4);

 for (; VAR_11; FUNC_13(VAR_3, &VAR_4), VAR_11--) {
  VAR_14 = FUNC_3(*VAR_6++);

  VAR_3->jd_found_blocks++;

  if (FUNC_15(VAR_3, VAR_14, VAR_4))
   continue;

  VAR_15 = FUNC_14(VAR_3, VAR_4, &VAR_12);
  if (VAR_15)
   return VAR_15;

  VAR_13 = FUNC_12(VAR_10, VAR_14);
  FUNC_17(VAR_13->b_data, VAR_12->b_data, VAR_12->b_size);

  if (FUNC_11(VAR_9, VAR_13))
   VAR_15 = -VAR_0;
  else {
   struct gfs2_meta_header *VAR_16 =
    (struct gfs2_meta_header *)VAR_13->b_data;

   if (VAR_16->mh_type == FUNC_7(VAR_2)) {
    struct gfs2_rgrpd *VAR_17;

    VAR_17 = FUNC_9(VAR_9, VAR_14, 0);
    if (VAR_17 && VAR_17->rd_addr == VAR_14 &&
        VAR_17->rd_bits && VAR_17->rd_bits->bi_bh) {
     FUNC_8(VAR_9, "Replaying 0x%llx but we "
      "already have a bh!\n",
      (unsigned long long)VAR_14);
     FUNC_8(VAR_9, "busy:%d, pinned:%d\n",
      FUNC_5(VAR_17->rd_bits->bi_bh) ? 1 : 0,
      FUNC_6(VAR_17->rd_bits->bi_bh));
     FUNC_10(((void*)0), VAR_17->rd_gl, 1);
    }
   }
   FUNC_16(VAR_13);
  }
  FUNC_4(VAR_12);
  FUNC_4(VAR_13);

  if (VAR_15)
   break;

  VAR_3->jd_replayed_blocks++;
 }

 return VAR_15;
}
