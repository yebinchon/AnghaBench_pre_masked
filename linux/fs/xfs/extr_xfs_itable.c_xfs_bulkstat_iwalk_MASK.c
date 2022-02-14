
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_trans*,int ,void*) ;

__attribute__((used)) static int
FUNC_1(
 struct xfs_mount *VAR_2,
 struct xfs_trans *VAR_3,
 xfs_ino_t VAR_4,
 void *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_6 == -VAR_1 || VAR_6 == -VAR_0)
  return 0;
 return VAR_6;
}
