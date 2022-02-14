
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_log_descriptor {int ld_type; int ld_data1; } ;
struct gfs2_jdesc {int jd_replayed_blocks; int jd_found_blocks; int jd_inode; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;
typedef int __be64 ;
typedef int __be32 ;


 struct gfs2_inode* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 struct buffer_head* FUNC_5 (struct gfs2_glock*,scalar_t__) ;
 int FUNC_6 (struct gfs2_jdesc*,int *) ;
 int FUNC_7 (struct gfs2_jdesc*,int ,struct buffer_head**) ;
 scalar_t__ FUNC_8 (struct gfs2_jdesc*,scalar_t__,int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct gfs2_jdesc *VAR_2, u32 VAR_3,
        struct gfs2_log_descriptor *VAR_4,
        __be64 *VAR_5, int VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_2->jd_inode);
 struct gfs2_glock *VAR_8 = VAR_7->i_gl;
 unsigned int VAR_9 = FUNC_1(VAR_4->ld_data1);
 struct buffer_head *VAR_10, *VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;

 if (VAR_6 != 1 || FUNC_1(VAR_4->ld_type) != VAR_0)
  return 0;

 FUNC_6(VAR_2, &VAR_3);
 for (; VAR_9; FUNC_6(VAR_2, &VAR_3), VAR_9--) {
  VAR_12 = FUNC_2(*VAR_5++);
  VAR_13 = FUNC_2(*VAR_5++);

  VAR_2->jd_found_blocks++;

  if (FUNC_8(VAR_2, VAR_12, VAR_3))
   continue;

  VAR_14 = FUNC_7(VAR_2, VAR_3, &VAR_10);
  if (VAR_14)
   return VAR_14;

  VAR_11 = FUNC_5(VAR_8, VAR_12);
  FUNC_10(VAR_11->b_data, VAR_10->b_data, VAR_10->b_size);


  if (VAR_13) {
   __be32 *VAR_15 = (__be32 *)VAR_11->b_data;
   *VAR_15 = FUNC_4(VAR_1);
  }
  FUNC_9(VAR_11);

  FUNC_3(VAR_10);
  FUNC_3(VAR_11);

  VAR_2->jd_replayed_blocks++;
 }

 return VAR_14;
}
