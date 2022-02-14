
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_info_freefrag_stats {int dummy; } ;
struct TYPE_8__ {unsigned int ffs_min; void* ffs_clusters; int ffs_free_chunks_real; int ffs_avg; void* ffs_free_clusters; } ;
struct ocfs2_info_freefrag {int iff_chunksize; TYPE_4__ iff_ffs; int iff_req; } ;
struct TYPE_6__ {int i_used; int i_total; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct ocfs2_chain_list {struct ocfs2_chain_rec* cl_recs; int cl_next_free_rec; int cl_cpg; } ;
struct TYPE_5__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_rec {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct ocfs2_super*,struct inode*,struct ocfs2_dinode*,struct ocfs2_chain_rec*,struct ocfs2_info_freefrag*,int) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct ocfs2_super*,int ,int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_1,
        struct inode *VAR_2, u64 VAR_3,
        struct ocfs2_info_freefrag *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0, VAR_7 = 0, VAR_8;

 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_chain_list *VAR_10 = ((void*)0);
 struct ocfs2_chain_rec *VAR_11 = ((void*)0);
 struct ocfs2_dinode *VAR_12 = ((void*)0);

 if (VAR_2)
  FUNC_1(VAR_2);

 if (FUNC_8(&VAR_4->iff_req)) {
  VAR_6 = FUNC_10(VAR_2, &VAR_9, 0);
  if (VAR_6 < 0) {
   FUNC_7(VAR_6);
   goto bail;
  }
  VAR_7 = 1;
 } else {
  VAR_6 = FUNC_12(VAR_1, VAR_3, 1, &VAR_9);
  if (VAR_6 < 0) {
   FUNC_7(VAR_6);
   goto bail;
  }
 }

 VAR_12 = (struct ocfs2_dinode *)VAR_9->b_data;
 VAR_10 = &(VAR_12->id2.i_chain);





 if (VAR_4->iff_chunksize > FUNC_4(VAR_10->cl_cpg)) {
  VAR_6 = -VAR_0;
  goto bail;
 }

 FUNC_6(&VAR_4->iff_ffs, 0, sizeof(struct ocfs2_info_freefrag_stats));

 VAR_4->iff_ffs.ffs_min = ~0U;
 VAR_4->iff_ffs.ffs_clusters =
   FUNC_5(VAR_12->id1.bitmap1.i_total);
 VAR_4->iff_ffs.ffs_free_clusters = VAR_4->iff_ffs.ffs_clusters -
   FUNC_5(VAR_12->id1.bitmap1.i_used);

 VAR_5 = FUNC_4(VAR_10->cl_cpg) / VAR_4->iff_chunksize + 1;

 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_10->cl_next_free_rec); VAR_8++) {
  VAR_11 = &(VAR_10->cl_recs[VAR_8]);
  VAR_6 = FUNC_9(VAR_1, VAR_2,
       VAR_12,
       VAR_11, VAR_4,
       VAR_5);
  if (VAR_6)
   goto bail;
 }

 if (VAR_4->iff_ffs.ffs_free_chunks_real)
  VAR_4->iff_ffs.ffs_avg = (VAR_4->iff_ffs.ffs_avg /
     VAR_4->iff_ffs.ffs_free_chunks_real);
bail:
 if (VAR_7)
  FUNC_11(VAR_2, 0);

 if (VAR_2)
  FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 FUNC_0(VAR_9);

 return VAR_6;
}
