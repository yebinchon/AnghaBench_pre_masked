
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erofs_xattr_ibody_header {int dummy; } ;
typedef int __u32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(__le16 VAR_0)
{
 if (!VAR_0)
  return 0;

 return sizeof(struct erofs_xattr_ibody_header) +
  sizeof(__u32) * (FUNC_0(VAR_0) - 1);
}
