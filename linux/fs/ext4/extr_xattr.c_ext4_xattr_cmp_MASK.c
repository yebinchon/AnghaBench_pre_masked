
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_header {int dummy; } ;
struct ext4_xattr_entry {scalar_t__ e_hash; scalar_t__ e_name_index; scalar_t__ e_name_len; scalar_t__ e_value_size; scalar_t__ e_value_inum; char* e_name; int e_value_offs; } ;


 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_header*) ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_entry*) ;
 scalar_t__ FUNC_2 (struct ext4_xattr_entry*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ext4_xattr_header *VAR_0,
        struct ext4_xattr_header *VAR_1)
{
 struct ext4_xattr_entry *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_0+1);
 VAR_3 = FUNC_0(VAR_1+1);
 while (!FUNC_2(VAR_2)) {
  if (FUNC_2(VAR_3))
   return 1;
  if (VAR_2->e_hash != VAR_3->e_hash ||
      VAR_2->e_name_index != VAR_3->e_name_index ||
      VAR_2->e_name_len != VAR_3->e_name_len ||
      VAR_2->e_value_size != VAR_3->e_value_size ||
      VAR_2->e_value_inum != VAR_3->e_value_inum ||
      FUNC_5(VAR_2->e_name, VAR_3->e_name, VAR_2->e_name_len))
   return 1;
  if (!VAR_2->e_value_inum &&
      FUNC_5((char *)VAR_0 + FUNC_3(VAR_2->e_value_offs),
      (char *)VAR_1 + FUNC_3(VAR_3->e_value_offs),
      FUNC_4(VAR_2->e_value_size)))
   return 1;

  VAR_2 = FUNC_1(VAR_2);
  VAR_3 = FUNC_1(VAR_3);
 }
 if (!FUNC_2(VAR_3))
  return 1;
 return 0;
}
