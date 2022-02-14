
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct erofs_xattr_ibody_header {int dummy; } ;
struct TYPE_2__ {int xattr_shared_count; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct inode *VAR_0)
{
 return sizeof(struct erofs_xattr_ibody_header) +
  sizeof(u32) * FUNC_0(VAR_0)->xattr_shared_count;
}
