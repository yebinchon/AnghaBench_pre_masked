
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {int m_flags; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct xfs_mount* i_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xfs_mount*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int
FUNC_4(
 struct dentry *VAR_3,
 struct iattr *VAR_4)
{
 struct xfs_mount *VAR_5 = FUNC_1(FUNC_2(VAR_3))->i_mount;

 if (VAR_5->m_flags & VAR_2)
  return -VAR_1;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 return FUNC_3(VAR_3, VAR_4);
}
