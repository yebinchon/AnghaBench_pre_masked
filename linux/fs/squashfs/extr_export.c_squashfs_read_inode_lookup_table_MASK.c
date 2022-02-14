
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (struct super_block*,scalar_t__,unsigned int) ;

__le64 *FUNC_7(struct super_block *VAR_1,
  u64 VAR_2, u64 VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_4);
 __le64 *VAR_6;

 FUNC_3("In read_inode_lookup_table, length %d\n", VAR_5);




 if (VAR_4 == 0)
  return FUNC_0(-VAR_0);





 if (VAR_2 + VAR_5 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_5);





 if (!FUNC_1(VAR_6) && FUNC_5(VAR_6[0]) >= VAR_2) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
