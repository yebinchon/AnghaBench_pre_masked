
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_maprecorder {unsigned long lcn; struct inode* inode; } ;
struct z_erofs_map_header {int dummy; } ;
struct inode {int i_size; } ;
struct erofs_inode {unsigned int z_logical_clusterbits; int z_advise; scalar_t__ xattr_isize; scalar_t__ inode_isize; int nid; } ;
typedef int erofs_off_t ;


 int FUNC_0 (scalar_t__,int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct erofs_inode* FUNC_2 (struct inode* const) ;
 int FUNC_3 (struct inode* const) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (unsigned int const,int) ;
 int FUNC_8 (struct z_erofs_maprecorder*,unsigned int,int ) ;
 int FUNC_9 (struct z_erofs_maprecorder*,int ) ;

__attribute__((used)) static int FUNC_10(struct z_erofs_maprecorder *VAR_4,
         unsigned long VAR_5)
{
 struct inode *const VAR_6 = VAR_4->inode;
 struct erofs_inode *const VAR_7 = FUNC_2(VAR_6);
 const unsigned int VAR_8 = VAR_7->z_logical_clusterbits;
 const erofs_off_t VAR_9 = FUNC_0(FUNC_6(FUNC_3(VAR_6), VAR_7->nid) +
     VAR_7->inode_isize + VAR_7->xattr_isize, 8) +
  sizeof(struct z_erofs_map_header);
 const unsigned int VAR_10 = FUNC_1(VAR_6->i_size, VAR_2);
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13;
 erofs_off_t VAR_14;
 int VAR_15;

 if (VAR_8 != 12)
  return -VAR_1;

 if (VAR_5 >= VAR_10)
  return -VAR_0;

 VAR_4->lcn = VAR_5;

 VAR_11 = (32 - VAR_9 % 32) / 4;
 if (VAR_11 == 32 / 4)
  VAR_11 = 0;

 if (VAR_7->z_advise & VAR_3)
  VAR_12 = FUNC_7(VAR_10 - VAR_11, 16);
 else
  VAR_12 = 0;

 VAR_14 = VAR_9;
 if (VAR_5 < VAR_11) {
  VAR_13 = 2;
  goto out;
 }
 VAR_14 += VAR_11 * 4;
 VAR_5 -= VAR_11;

 if (VAR_5 < VAR_12) {
  VAR_13 = 1;
  goto out;
 }
 VAR_14 += VAR_12 * 2;
 VAR_5 -= VAR_12;
 VAR_13 = 2;
out:
 VAR_14 += VAR_5 * (1 << VAR_13);
 VAR_15 = FUNC_9(VAR_4, FUNC_4(VAR_14));
 if (VAR_15)
  return VAR_15;
 return FUNC_8(VAR_4, VAR_13, FUNC_5(VAR_14));
}
