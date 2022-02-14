
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_off_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct TYPE_3__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct xfs_inode*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct xfs_inode*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_10 (struct xfs_inode*) ;
 int FUNC_11 (struct xfs_inode*,scalar_t__,scalar_t__,int*) ;

int
FUNC_12(
 struct xfs_inode *VAR_3,
 xfs_off_t VAR_4,
 xfs_off_t VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_3->i_mount;
 xfs_fileoff_t VAR_7;
 xfs_fileoff_t VAR_8;
 int VAR_9 = 0, VAR_10;

 FUNC_8(VAR_3);

 VAR_10 = FUNC_10(VAR_3);
 if (VAR_10)
  return VAR_10;

 if (VAR_5 <= 0)
  return 0;

 VAR_10 = FUNC_9(VAR_3, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_1(VAR_6, VAR_4);
 VAR_8 = FUNC_2(VAR_6, VAR_4 + VAR_5);




 if (VAR_8 > VAR_7) {
  while (!VAR_9) {
   VAR_10 = FUNC_11(VAR_3, VAR_7,
     VAR_8 - VAR_7, &VAR_9);
   if (VAR_10)
    return VAR_10;
  }
 }







 if (VAR_4 >= FUNC_3(VAR_3))
  return 0;
 if (VAR_4 + VAR_5 > FUNC_3(VAR_3))
  VAR_5 = FUNC_3(VAR_3) - VAR_4;
 VAR_10 = FUNC_5(FUNC_0(VAR_3), VAR_4, VAR_5, ((void*)0), &VAR_2);
 if (VAR_10)
  return VAR_10;







 if (VAR_4 + VAR_5 >= FUNC_3(VAR_3) && FUNC_6(VAR_4 + VAR_5) > 0) {
  VAR_10 = FUNC_4(FUNC_0(VAR_3)->i_mapping,
    FUNC_7(VAR_4 + VAR_5, VAR_1), VAR_0);
 }

 return VAR_10;
}
