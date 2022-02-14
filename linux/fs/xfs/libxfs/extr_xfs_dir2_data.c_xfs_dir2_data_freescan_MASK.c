
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {int d_ops; TYPE_1__* i_mount; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct TYPE_2__ {int m_dir_geo; } ;


 void FUNC_0 (int ,int ,struct xfs_dir2_data_hdr*,int*) ;

void
FUNC_1(
 struct xfs_inode *VAR_0,
 struct xfs_dir2_data_hdr *VAR_1,
 int *VAR_2)
{
 return FUNC_0(VAR_0->i_mount->m_dir_geo, VAR_0->d_ops,
   VAR_1, VAR_2);
}
