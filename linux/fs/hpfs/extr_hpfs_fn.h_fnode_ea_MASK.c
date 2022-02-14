
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnode {int acl_size_s; int ea_offs; } ;
struct extended_attribute {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct extended_attribute *FUNC_1(struct fnode *VAR_0)
{
 return (struct extended_attribute *)((char *)VAR_0 + FUNC_0(VAR_0->ea_offs) + FUNC_0(VAR_0->acl_size_s));
}
