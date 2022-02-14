
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {unsigned char i_advise; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned char VAR_2 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(const struct xattr_handler *VAR_3,
  struct dentry *VAR_4, struct inode *VAR_5,
  const char *VAR_6, const void *VAR_7,
  size_t VAR_8, int VAR_9)
{
 unsigned char VAR_10 = FUNC_0(VAR_5)->i_advise;
 unsigned char VAR_11;

 if (!FUNC_2(VAR_5))
  return -VAR_1;
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_11 = *(char *)VAR_7;
 if (VAR_11 & ~VAR_2)
  return -VAR_0;

 VAR_11 = VAR_11 & VAR_2;
 VAR_11 |= VAR_10 & ~VAR_2;

 FUNC_0(VAR_5)->i_advise = VAR_11;
 FUNC_1(VAR_5, 1);
 return 0;
}
