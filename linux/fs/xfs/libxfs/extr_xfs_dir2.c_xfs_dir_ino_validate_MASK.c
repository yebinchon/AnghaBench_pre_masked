
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_mount_t ;
typedef scalar_t__ xfs_ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*,unsigned long long) ;

int
FUNC_5(
 xfs_mount_t *VAR_3,
 xfs_ino_t VAR_4)
{
 bool VAR_5 = FUNC_3(VAR_3, VAR_4);

 if (FUNC_2(FUNC_1(!VAR_5, VAR_3, VAR_2))) {
  FUNC_4(VAR_3, "Invalid inode number 0x%Lx",
    (unsigned long long) VAR_4);
  FUNC_0("xfs_dir_ino_validate", VAR_1, VAR_3);
  return -VAR_0;
 }
 return 0;
}
