
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_layout {int bl_ext_lock; scalar_t__ bl_lwb; scalar_t__ bl_scsi_layout; int bl_ext_rw; } ;
struct pnfs_block_extent {scalar_t__ be_state; scalar_t__ be_tag; } ;
typedef scalar_t__ __u64 ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (struct pnfs_block_extent*,int *) ;
 int * FUNC_1 (struct pnfs_block_extent*,int *) ;
 struct pnfs_block_extent* FUNC_2 (int *) ;
 size_t FUNC_3 (struct pnfs_block_layout*,size_t) ;
 struct pnfs_block_extent* FUNC_4 (struct pnfs_block_extent*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct pnfs_block_layout *VAR_4, __be32 *VAR_5,
  size_t VAR_6, size_t *VAR_7, __u64 *VAR_8)
{
 struct pnfs_block_extent *VAR_9;
 int VAR_10 = 0;

 FUNC_5(&VAR_4->bl_ext_lock);
 for (VAR_9 = FUNC_2(&VAR_4->bl_ext_rw); VAR_9; VAR_9 = FUNC_4(VAR_9)) {
  if (VAR_9->be_state != VAR_3 ||
      VAR_9->be_tag != VAR_2)
   continue;

  (*VAR_7)++;
  if (FUNC_3(VAR_4, *VAR_7) > VAR_6) {

   VAR_10 = -VAR_0;
   continue;
  }

  if (VAR_4->bl_scsi_layout)
   VAR_5 = FUNC_1(VAR_9, VAR_5);
  else
   VAR_5 = FUNC_0(VAR_9, VAR_5);
  VAR_9->be_tag = VAR_1;
 }
 *VAR_8 = VAR_4->bl_lwb - 1;
 VAR_4->bl_lwb = 0;
 FUNC_6(&VAR_4->bl_ext_lock);

 return VAR_10;
}
