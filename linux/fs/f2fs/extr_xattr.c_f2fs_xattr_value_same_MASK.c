
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_xattr_entry {int e_name_len; int e_value_size; void* e_name; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (void*,void const*,size_t) ;

__attribute__((used)) static bool FUNC_2(struct f2fs_xattr_entry *VAR_0,
     const void *VAR_1, size_t VAR_2)
{
 void *VAR_3 = VAR_0->e_name + VAR_0->e_name_len;

 return (FUNC_0(VAR_0->e_value_size) == VAR_2) &&
     !FUNC_1(VAR_3, VAR_1, VAR_2);
}
