
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int i_sb; } ;
struct ext4_xattr_entry {scalar_t__ e_hash; int e_name_len; int e_name; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_1,
          struct ext4_xattr_entry *VAR_2, void *VAR_3,
          size_t VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_4(FUNC_0(VAR_1->i_sb), VAR_3, VAR_4);
 if (VAR_5 != FUNC_3(VAR_1))
  return -VAR_0;

 if (VAR_2) {
  __le32 VAR_6, VAR_7;


  VAR_7 = FUNC_1(VAR_5);
  VAR_6 = FUNC_2(VAR_2->e_name, VAR_2->e_name_len,
            &VAR_7, 1);
  if (VAR_6 != VAR_2->e_hash)
   return -VAR_0;
 }
 return 0;
}
