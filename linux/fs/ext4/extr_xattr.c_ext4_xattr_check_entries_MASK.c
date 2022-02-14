
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ext4_xattr_entry {scalar_t__ e_name_len; scalar_t__ e_value_inum; int e_value_offs; int e_value_size; int e_name; } ;


 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ext4_xattr_entry *VAR_2, void *VAR_3,
    void *VAR_4)
{
 struct ext4_xattr_entry *VAR_5 = VAR_2;


 while (!FUNC_2(VAR_5)) {
  struct ext4_xattr_entry *VAR_6 = FUNC_0(VAR_5);
  if ((void *)VAR_6 >= VAR_3)
   return -VAR_0;
  if (FUNC_5(VAR_5->e_name, VAR_5->e_name_len) != VAR_5->e_name_len)
   return -VAR_0;
  VAR_5 = VAR_6;
 }


 while (!FUNC_2(VAR_2)) {
  u32 VAR_7 = FUNC_4(VAR_2->e_value_size);

  if (VAR_7 > VAR_1)
   return -VAR_0;

  if (VAR_7 != 0 && VAR_2->e_value_inum == 0) {
   u16 VAR_8 = FUNC_3(VAR_2->e_value_offs);
   void *VAR_9;







   if (VAR_8 > VAR_3 - VAR_4)
    return -VAR_0;
   VAR_9 = VAR_4 + VAR_8;
   if (VAR_9 < (void *)VAR_5 + sizeof(u32) ||
       VAR_7 > VAR_3 - VAR_9 ||
       FUNC_1(VAR_7) > VAR_3 - VAR_9)
    return -VAR_0;
  }
  VAR_2 = FUNC_0(VAR_2);
 }

 return 0;
}
