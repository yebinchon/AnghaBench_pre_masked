
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rb_root {int dummy; } ;
struct pnfs_block_layout {scalar_t__ bl_lwb; int bl_ext_lock; int bl_ext_ro; struct rb_root bl_ext_rw; } ;
struct pnfs_block_extent {scalar_t__ be_f_offset; scalar_t__ be_state; scalar_t__ be_tag; int be_length; int be_v_offset; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int *) ;
 struct pnfs_block_extent* FUNC_3 (struct rb_root*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pnfs_block_extent*,struct pnfs_block_extent*) ;
 scalar_t__ FUNC_5 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_6 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_7 (struct pnfs_block_extent*) ;
 int FUNC_8 (struct rb_root*,struct pnfs_block_extent*,scalar_t__) ;
 struct pnfs_block_extent* FUNC_9 (struct rb_root*,struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_10 (struct rb_root*,struct pnfs_block_extent*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_2 ;

int
FUNC_13(struct pnfs_block_layout *VAR_3, sector_t VAR_4,
  sector_t VAR_5, u64 VAR_6)
{
 struct rb_root *VAR_7 = &VAR_3->bl_ext_rw;
 sector_t VAR_8 = VAR_4 + VAR_5;
 struct pnfs_block_extent *VAR_9;
 int VAR_10 = 0;
 FUNC_0(VAR_2);

 FUNC_11(&VAR_3->bl_ext_lock);



 VAR_10 = FUNC_2(&VAR_3->bl_ext_ro, VAR_4, VAR_8, &VAR_2);
 if (VAR_10)
  goto out;




 for (VAR_9 = FUNC_3(VAR_7, VAR_4); VAR_9; VAR_9 = FUNC_6(VAR_9)) {
  if (VAR_9->be_f_offset >= VAR_8)
   break;

  if (VAR_9->be_state != VAR_1 || VAR_9->be_tag)
   continue;

  if (VAR_9->be_f_offset < VAR_4) {
   struct pnfs_block_extent *VAR_11 = FUNC_7(VAR_9);

   if (VAR_11 && FUNC_4(VAR_11, VAR_9)) {
    sector_t VAR_12 = VAR_4 - VAR_9->be_f_offset;

    VAR_11->be_length += VAR_12;

    VAR_9->be_f_offset += VAR_12;
    VAR_9->be_v_offset += VAR_12;
    VAR_9->be_length -= VAR_12;
   } else {
    VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_4);
    if (VAR_10)
     goto out;
   }
  }

  if (FUNC_5(VAR_9) > VAR_8) {
   struct pnfs_block_extent *VAR_13 = FUNC_6(VAR_9);

   if (VAR_13 && FUNC_4(VAR_9, VAR_13)) {
    sector_t VAR_14 = VAR_8 - VAR_9->be_f_offset;

    VAR_9->be_length -= VAR_14;

    VAR_13->be_f_offset -= VAR_14;
    VAR_13->be_v_offset -= VAR_14;
    VAR_13->be_length += VAR_14;
   } else {
    VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_8);
    if (VAR_10)
     goto out;
   }
  }

  if (VAR_9->be_f_offset >= VAR_4 && FUNC_5(VAR_9) <= VAR_8) {
   VAR_9->be_tag = VAR_0;
   VAR_9 = FUNC_9(VAR_7, VAR_9);
   VAR_9 = FUNC_10(VAR_7, VAR_9);
  }
 }
out:
 if (VAR_3->bl_lwb < VAR_6)
  VAR_3->bl_lwb = VAR_6;
 FUNC_12(&VAR_3->bl_ext_lock);

 FUNC_1(&VAR_2);
 return VAR_10;
}
