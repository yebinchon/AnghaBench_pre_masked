
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct pnfs_block_extent {scalar_t__ be_f_offset; scalar_t__ be_v_offset; scalar_t__ be_length; scalar_t__ be_state; int be_list; int be_node; int be_device; int be_tag; } ;
struct list_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rb_root*,struct pnfs_block_extent*,int) ;
 struct pnfs_block_extent* FUNC_1 (struct rb_root*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_3 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct rb_root*) ;

__attribute__((used)) static int
FUNC_8(struct rb_root *VAR_3,
  sector_t VAR_4, sector_t VAR_5, struct list_head *VAR_6)
{
 struct pnfs_block_extent *VAR_7;
 sector_t VAR_8 = 0, VAR_9 = 0;
 sector_t VAR_10;
 sector_t VAR_11;

 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_7)
  return 0;
 if (VAR_7->be_f_offset >= VAR_5)
  return 0;

 VAR_10 = VAR_7->be_v_offset;
 VAR_11 = VAR_7->be_length;

 if (VAR_4 > VAR_7->be_f_offset)
  VAR_8 = VAR_4 - VAR_7->be_f_offset;
 if (FUNC_2(VAR_7) > VAR_5)
  VAR_9 = FUNC_2(VAR_7) - VAR_5;

 if (VAR_9 > 0) {
  if (VAR_8 > 0) {
   struct pnfs_block_extent *VAR_12;

   VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_1);
   if (!VAR_12)
    return -VAR_0;

   VAR_7->be_length = VAR_8;

   VAR_12->be_f_offset = VAR_5;
   if (VAR_7->be_state != VAR_2) {
    VAR_12->be_v_offset =
     VAR_10 + VAR_11 - VAR_9;
   }
   VAR_12->be_length = VAR_9;
   VAR_12->be_state = VAR_7->be_state;
   VAR_12->be_tag = VAR_7->be_tag;
   VAR_12->be_device = FUNC_6(VAR_7->be_device);

   FUNC_0(VAR_3, VAR_12, 1);
  } else {
   VAR_7->be_f_offset = VAR_5;
   if (VAR_7->be_state != VAR_2) {
    VAR_7->be_v_offset =
     VAR_10 + VAR_11 - VAR_9;
   }
   VAR_7->be_length = VAR_9;
  }
 } else {
  if (VAR_8 > 0) {
   VAR_7->be_length = VAR_8;
   VAR_7 = FUNC_3(VAR_7);
  }

  while (VAR_7 && FUNC_2(VAR_7) <= VAR_5) {
   struct pnfs_block_extent *VAR_13 = FUNC_3(VAR_7);

   FUNC_7(&VAR_7->be_node, VAR_3);
   FUNC_5(&VAR_7->be_list, VAR_6);
   VAR_7 = VAR_13;
  }

  if (VAR_7 && VAR_7->be_f_offset < VAR_5) {
   VAR_8 = FUNC_2(VAR_7) - VAR_5;
   VAR_7->be_f_offset = VAR_5;
   if (VAR_7->be_state != VAR_2)
    VAR_7->be_v_offset += VAR_7->be_length - VAR_8;
   VAR_7->be_length = VAR_8;
  }
 }

 return 0;
}
