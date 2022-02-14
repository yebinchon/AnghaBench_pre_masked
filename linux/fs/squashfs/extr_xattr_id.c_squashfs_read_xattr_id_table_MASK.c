
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct squashfs_xattr_id_table {int xattr_ids; int xattr_table_start; } ;
typedef struct squashfs_xattr_id_table __le64 ;


 int VAR_0 ;
 struct squashfs_xattr_id_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct squashfs_xattr_id_table*) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct squashfs_xattr_id_table*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct squashfs_xattr_id_table* FUNC_7 (struct super_block*,scalar_t__,unsigned int) ;

__le64 *FUNC_8(struct super_block *VAR_1, u64 VAR_2,
  u64 *VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 struct squashfs_xattr_id_table *VAR_6;

 VAR_6 = FUNC_7(VAR_1, VAR_2, sizeof(*VAR_6));
 if (FUNC_1(VAR_6))
  return (__le64 *) VAR_6;

 *VAR_3 = FUNC_6(VAR_6->xattr_table_start);
 *VAR_4 = FUNC_5(VAR_6->xattr_ids);
 FUNC_4(VAR_6);




 if (*VAR_4 == 0)
  return FUNC_0(-VAR_0);


 if (*VAR_3 >= VAR_2)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(*VAR_4);

 FUNC_3("In read_xattr_index_table, length %d\n", VAR_5);

 return FUNC_7(VAR_1, VAR_2 + sizeof(*VAR_6), VAR_5);
}
