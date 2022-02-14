
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_dir_entry_2 {int rec_len; scalar_t__ name_len; int name; scalar_t__ inode; } ;
struct dx_map_entry {int offs; int size; int hash; } ;
struct dx_hash_info {int hash; } ;


 int FUNC_0 () ;
 struct ext4_dir_entry_2* FUNC_1 (struct ext4_dir_entry_2*,unsigned int) ;
 int FUNC_2 (struct inode*,int ,scalar_t__,struct dx_hash_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct ext4_dir_entry_2 *VAR_1,
         unsigned VAR_2, struct dx_hash_info *VAR_3,
         struct dx_map_entry *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6 = (char *) VAR_1;
 struct dx_hash_info VAR_7 = *VAR_3;

 while ((char *) VAR_1 < VAR_6 + VAR_2) {
  if (VAR_1->name_len && VAR_1->inode) {
   FUNC_2(VAR_0, VAR_1->name, VAR_1->name_len, &VAR_7);
   VAR_4--;
   VAR_4->hash = VAR_7.hash;
   VAR_4->offs = ((char *) VAR_1 - VAR_6)>>2;
   VAR_4->size = FUNC_3(VAR_1->rec_len);
   VAR_5++;
   FUNC_0();
  }

  VAR_1 = FUNC_1(VAR_1, VAR_2);
 }
 return VAR_5;
}
