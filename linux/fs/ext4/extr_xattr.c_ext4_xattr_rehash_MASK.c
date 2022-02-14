
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_header {int h_hash; } ;
struct ext4_xattr_entry {int e_hash; } ;
typedef int hash ;
typedef int __u32 ;


 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_header*) ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_entry*) ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ext4_xattr_header *VAR_1)
{
 struct ext4_xattr_entry *VAR_2;
 __u32 VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_1+1);
 while (!FUNC_2(VAR_2)) {
  if (!VAR_2->e_hash) {

   VAR_3 = 0;
   break;
  }
  VAR_3 = (VAR_3 << VAR_0) ^
         (VAR_3 >> (8*sizeof(VAR_3) - VAR_0)) ^
         FUNC_4(VAR_2->e_hash);
  VAR_2 = FUNC_1(VAR_2);
 }
 VAR_1->h_hash = FUNC_3(VAR_3);
}
