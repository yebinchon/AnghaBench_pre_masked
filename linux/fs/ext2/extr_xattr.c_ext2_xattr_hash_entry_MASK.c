
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_header {int dummy; } ;
struct ext2_xattr_entry {char* e_name; int e_name_len; scalar_t__ e_value_block; scalar_t__ e_value_size; int e_hash; int e_value_offs; } ;
typedef int hash ;
typedef int __u32 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct ext2_xattr_header *VAR_4,
      struct ext2_xattr_entry *VAR_5)
{
 __u32 VAR_6 = 0;
 char *VAR_7 = VAR_5->e_name;
 int VAR_8;

 for (VAR_8=0; VAR_8 < VAR_5->e_name_len; VAR_8++) {
  VAR_6 = (VAR_6 << VAR_2) ^
         (VAR_6 >> (8*sizeof(VAR_6) - VAR_2)) ^
         *VAR_7++;
 }

 if (VAR_5->e_value_block == 0 && VAR_5->e_value_size != 0) {
  __le32 *VAR_9 = (__le32 *)((char *)VAR_4 +
   FUNC_1(VAR_5->e_value_offs));
  for (VAR_8 = (FUNC_2(VAR_5->e_value_size) +
       VAR_1) >> VAR_0; VAR_8; VAR_8--) {
   VAR_6 = (VAR_6 << VAR_3) ^
          (VAR_6 >> (8*sizeof(VAR_6) - VAR_3)) ^
          FUNC_2(*VAR_9++);
  }
 }
 VAR_5->e_hash = FUNC_0(VAR_6);
}
