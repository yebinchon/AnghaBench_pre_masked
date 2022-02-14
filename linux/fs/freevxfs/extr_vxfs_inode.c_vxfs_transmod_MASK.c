
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct vxfs_inode_info {int vii_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_1 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_2 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_3 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_4 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_5 (struct vxfs_inode_info*) ;
 scalar_t__ FUNC_6 (struct vxfs_inode_info*) ;
 int VAR_7 ;

__attribute__((used)) static __inline__ umode_t
FUNC_7(struct vxfs_inode_info *VAR_8)
{
 umode_t VAR_9 = VAR_8->vii_mode & ~VAR_7;

 if (FUNC_3(VAR_8))
  VAR_9 |= VAR_3;
 if (FUNC_1(VAR_8))
  VAR_9 |= VAR_1;
 if (FUNC_2(VAR_8))
  VAR_9 |= VAR_2;
 if (FUNC_0(VAR_8))
  VAR_9 |= VAR_0;
 if (FUNC_4(VAR_8))
  VAR_9 |= VAR_4;
 if (FUNC_5(VAR_8))
  VAR_9 |= VAR_5;
 if (FUNC_6(VAR_8))
  VAR_9 |= VAR_6;

 return (VAR_9);
}
