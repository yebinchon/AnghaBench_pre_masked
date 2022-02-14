
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erofs_xattr_entry {int e_value_size; scalar_t__ e_name_len; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct erofs_xattr_entry *VAR_0)
{
 return FUNC_0(sizeof(struct erofs_xattr_entry) +
     VAR_0->e_name_len + FUNC_1(VAR_0->e_value_size));
}
