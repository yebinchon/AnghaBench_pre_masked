
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct ocfs2_super {int dummy; } ;
struct TYPE_2__ {int ffs_free_chunks; } ;
struct ocfs2_info_freefrag {unsigned int iff_chunksize; TYPE_1__ iff_ffs; int iff_req; } ;
struct ocfs2_group_desc {scalar_t__ bg_bitmap; int bg_bits; int bg_free_bits_count; int bg_next_group; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_chain_rec {int c_blkno; int c_free; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ocfs2_info_freefrag*,unsigned int) ;
 int FUNC_7 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_8 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_9 (unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_super *VAR_2,
       struct inode *VAR_3,
       struct ocfs2_dinode *VAR_4,
       struct ocfs2_chain_rec *VAR_5,
       struct ocfs2_info_freefrag *VAR_6,
       u32 VAR_7)
{
 int VAR_8 = 0, VAR_9;
 u64 VAR_10;

 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_group_desc *VAR_12 = ((void*)0);

 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15 = 0, VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19 = 0;

 if (!FUNC_2(VAR_5->c_free))
  goto bail;

 do {
  if (!VAR_12)
   VAR_10 = FUNC_3(VAR_5->c_blkno);
  else
   VAR_10 = FUNC_3(VAR_12->bg_next_group);

  if (VAR_11) {
   FUNC_0(VAR_11);
   VAR_11 = ((void*)0);
  }

  if (FUNC_5(&VAR_6->iff_req))
   VAR_8 = FUNC_8(VAR_3,
            VAR_4,
            VAR_10, &VAR_11);
  else
   VAR_8 = FUNC_7(VAR_2, VAR_10, 1, &VAR_11);

  if (VAR_8 < 0) {
   FUNC_4(VAR_1, "Can't read the group descriptor # "
        "%llu from device.", (unsigned long long)VAR_10);
   VAR_8 = -VAR_0;
   goto bail;
  }

  VAR_12 = (struct ocfs2_group_desc *)VAR_11->b_data;

  if (!FUNC_1(VAR_12->bg_free_bits_count))
   continue;

  VAR_13 = FUNC_1(VAR_12->bg_bits);
  VAR_15 = 0;

  for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {



   if ((VAR_15 + VAR_6->iff_chunksize) > VAR_13)
    VAR_14 = VAR_13 - VAR_15;
   else
    VAR_14 = VAR_6->iff_chunksize;

   VAR_18 = 0;
   for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    VAR_9 = FUNC_9(VAR_15,
      (unsigned long *)VAR_12->bg_bitmap);





    if (!VAR_9) {
     VAR_19++;
     VAR_18++;
    }

    if (VAR_9 && VAR_19) {
     FUNC_6(VAR_6,
             VAR_19);
     VAR_19 = 0;
    }

    VAR_15++;
   }

   if (VAR_18 == VAR_6->iff_chunksize)
    VAR_6->iff_ffs.ffs_free_chunks++;
  }




  if (VAR_19)
   FUNC_6(VAR_6, VAR_19);

 } while (FUNC_3(VAR_12->bg_next_group));

bail:
 FUNC_0(VAR_11);

 return VAR_8;
}
