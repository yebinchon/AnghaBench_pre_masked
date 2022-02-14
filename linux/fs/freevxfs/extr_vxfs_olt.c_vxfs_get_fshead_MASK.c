
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_sb_info {int vsi_fshino; } ;
struct vxfs_oltfshead {int * olt_fsino; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vxfs_sb_info*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct vxfs_oltfshead *VAR_0, struct vxfs_sb_info *VAR_1)
{
 FUNC_0(VAR_1->vsi_fshino);
 VAR_1->vsi_fshino = FUNC_1(VAR_1, VAR_0->olt_fsino[0]);
}
