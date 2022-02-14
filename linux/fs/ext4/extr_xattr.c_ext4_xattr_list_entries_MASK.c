
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {char* name; int prefix; scalar_t__ (* list ) (struct dentry*) ;} ;
struct ext4_xattr_entry {size_t e_name_len; char const* e_name; int e_name_index; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (struct ext4_xattr_entry*) ;
 struct xattr_handler* FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;

__attribute__((used)) static int
FUNC_6(struct dentry *VAR_1, struct ext4_xattr_entry *VAR_2,
   char *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_4;

 for (; !FUNC_1(VAR_2); VAR_2 = FUNC_0(VAR_2)) {
  const struct xattr_handler *VAR_6 =
   FUNC_2(VAR_2->e_name_index);

  if (VAR_6 && (!VAR_6->list || VAR_6->list(VAR_1))) {
   const char *VAR_7 = VAR_6->prefix ?: VAR_6->name;
   size_t VAR_8 = FUNC_4(VAR_7);
   size_t VAR_9 = VAR_8 + VAR_2->e_name_len + 1;

   if (VAR_3) {
    if (VAR_9 > VAR_5)
     return -VAR_0;
    FUNC_3(VAR_3, VAR_7, VAR_8);
    VAR_3 += VAR_8;
    FUNC_3(VAR_3, VAR_2->e_name, VAR_2->e_name_len);
    VAR_3 += VAR_2->e_name_len;
    *VAR_3++ = 0;
   }
   VAR_5 -= VAR_9;
  }
 }
 return VAR_4 - VAR_5;
}
