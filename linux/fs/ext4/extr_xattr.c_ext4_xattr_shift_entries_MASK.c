
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_entry {int e_value_offs; scalar_t__ e_value_size; int e_value_inum; } ;


 int FUNC_0 (int) ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_entry*) ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,void*,size_t) ;

__attribute__((used)) static void FUNC_6(struct ext4_xattr_entry *VAR_0,
         int VAR_1, void *VAR_2,
         void *VAR_3, size_t VAR_4)
{
 struct ext4_xattr_entry *VAR_5 = VAR_0;
 int VAR_6;


 FUNC_0(VAR_1 > 0);


 for (; !FUNC_2(VAR_5); VAR_5 = FUNC_1(VAR_5)) {
  if (!VAR_5->e_value_inum && VAR_5->e_value_size) {
   VAR_6 = FUNC_4(VAR_5->e_value_offs) +
       VAR_1;
   VAR_5->e_value_offs = FUNC_3(VAR_6);
  }
 }

 FUNC_5(VAR_2, VAR_3, VAR_4);
}
