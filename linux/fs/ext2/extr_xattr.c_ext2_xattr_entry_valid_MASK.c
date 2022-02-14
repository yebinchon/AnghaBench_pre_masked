
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_entry {scalar_t__ e_value_block; int e_value_offs; int e_value_size; } ;


 struct ext2_xattr_entry* FUNC_0 (struct ext2_xattr_entry*) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct ext2_xattr_entry *VAR_0,
         char *VAR_1, size_t VAR_2)
{
 struct ext2_xattr_entry *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 if ((char *)VAR_3 >= VAR_1)
  return 0;

 if (VAR_0->e_value_block != 0)
  return 0;

 VAR_4 = FUNC_2(VAR_0->e_value_size);
 if (VAR_4 > VAR_2 ||
     FUNC_1(VAR_0->e_value_offs) + VAR_4 > VAR_2)
  return 0;

 return 1;
}
