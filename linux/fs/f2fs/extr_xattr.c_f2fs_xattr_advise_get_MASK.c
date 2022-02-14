
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {char i_advise; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(const struct xattr_handler *VAR_0,
  struct dentry *VAR_1, struct inode *VAR_2,
  const char *VAR_3, void *VAR_4, size_t VAR_5)
{
 if (VAR_4)
  *((char *)VAR_4) = FUNC_0(VAR_2)->i_advise;
 return sizeof(char);
}
