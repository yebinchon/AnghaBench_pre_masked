
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nrpages; } ;
struct TYPE_3__ {TYPE_2__ i_data; int i_mode; } ;
struct ceph_inode_info {scalar_t__ i_wrbuffer_ref; scalar_t__ i_wb_ref; scalar_t__ i_wr_ref; TYPE_1__ vfs_inode; scalar_t__ i_rdcache_ref; scalar_t__ i_rd_ref; scalar_t__ i_pin_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct ceph_inode_info *VAR_5)
{
 int VAR_6 = 0;
 if (VAR_5->i_pin_ref)
  VAR_6 |= VAR_4;
 if (VAR_5->i_rd_ref)
  VAR_6 |= VAR_2;
 if (VAR_5->i_rdcache_ref ||
     (!FUNC_0(VAR_5->vfs_inode.i_mode) &&
      VAR_5->vfs_inode.i_data.nrpages))
  VAR_6 |= VAR_1;
 if (VAR_5->i_wr_ref)
  VAR_6 |= VAR_3;
 if (VAR_5->i_wb_ref || VAR_5->i_wrbuffer_ref)
  VAR_6 |= VAR_0;
 return VAR_6;
}
