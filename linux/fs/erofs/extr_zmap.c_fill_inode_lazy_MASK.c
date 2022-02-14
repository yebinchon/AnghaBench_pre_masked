
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_map_header {int h_algorithmtype; int h_clusterbits; int h_advise; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct erofs_inode {scalar_t__ datalayout; int* z_algorithmtype; int z_logical_clusterbits; int* z_physical_clusterbits; int flags; int nid; int z_advise; scalar_t__ xattr_isize; scalar_t__ inode_isize; } ;
typedef int erofs_off_t ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct erofs_inode* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct super_block* const) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_5 ;
 int FUNC_5 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block* const,char*,int,int ) ;
 struct page* FUNC_10 (struct super_block* const,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 void* FUNC_12 (struct page*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_8)
{
 struct erofs_inode *const VAR_9 = FUNC_2(VAR_8);
 struct super_block *const VAR_10 = VAR_8->i_sb;
 int VAR_11;
 erofs_off_t VAR_12;
 struct page *VAR_13;
 void *VAR_14;
 struct z_erofs_map_header *VAR_15;

 if (FUNC_17(VAR_4, &VAR_9->flags))
  return 0;

 if (FUNC_19(&VAR_9->flags, VAR_3, VAR_6))
  return -VAR_1;

 VAR_11 = 0;
 if (FUNC_17(VAR_4, &VAR_9->flags))
  goto out_unlock;

 FUNC_1(VAR_9->datalayout == VAR_2);

 VAR_12 = FUNC_0(FUNC_11(FUNC_3(VAR_10), VAR_9->nid) + VAR_9->inode_isize +
      VAR_9->xattr_isize, 8);
 VAR_13 = FUNC_10(VAR_10, FUNC_7(VAR_12));
 if (FUNC_4(VAR_13)) {
  VAR_11 = FUNC_5(VAR_13);
  goto out_unlock;
 }

 VAR_14 = FUNC_12(VAR_13);

 VAR_15 = VAR_14 + FUNC_8(VAR_12);
 VAR_9->z_advise = FUNC_14(VAR_15->h_advise);
 VAR_9->z_algorithmtype[0] = VAR_15->h_algorithmtype & 15;
 VAR_9->z_algorithmtype[1] = VAR_15->h_algorithmtype >> 4;

 if (VAR_9->z_algorithmtype[0] >= VAR_7) {
  FUNC_9(VAR_10, "unknown compression format %u for nid %llu, please upgrade kernel",
     VAR_9->z_algorithmtype[0], VAR_9->nid);
  VAR_11 = -VAR_0;
  goto unmap_done;
 }

 VAR_9->z_logical_clusterbits = VAR_5 + (VAR_15->h_clusterbits & 7);
 VAR_9->z_physical_clusterbits[0] = VAR_9->z_logical_clusterbits +
     ((VAR_15->h_clusterbits >> 3) & 3);

 if (VAR_9->z_physical_clusterbits[0] != VAR_5) {
  FUNC_9(VAR_10, "unsupported physical clusterbits %u for nid %llu, please upgrade kernel",
     VAR_9->z_physical_clusterbits[0], VAR_9->nid);
  VAR_11 = -VAR_0;
  goto unmap_done;
 }

 VAR_9->z_physical_clusterbits[1] = VAR_9->z_logical_clusterbits +
     ((VAR_15->h_clusterbits >> 5) & 7);
 FUNC_16(VAR_4, &VAR_9->flags);
unmap_done:
 FUNC_13(VAR_14);
 FUNC_18(VAR_13);
 FUNC_15(VAR_13);
out_unlock:
 FUNC_6(VAR_3, &VAR_9->flags);
 return VAR_11;
}
