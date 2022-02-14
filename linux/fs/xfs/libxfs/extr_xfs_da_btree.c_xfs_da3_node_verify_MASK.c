
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct xfs_mount {TYPE_2__* m_attr_geo; TYPE_1__* m_dir_geo; } ;
struct xfs_dir_ops {int (* node_hdr_from_disk ) (struct xfs_da3_icnode_hdr*,struct xfs_da_intnode*) ;} ;
struct xfs_da_intnode {int dummy; } ;
struct xfs_da3_icnode_hdr {scalar_t__ level; scalar_t__ count; } ;
struct xfs_buf {struct xfs_da_intnode* b_addr; struct xfs_mount* b_mount; } ;
struct TYPE_4__ {scalar_t__ node_ents; } ;
struct TYPE_3__ {scalar_t__ node_ents; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct xfs_da3_icnode_hdr*,struct xfs_da_intnode*) ;
 int * FUNC_1 (struct xfs_buf*,struct xfs_da_intnode*) ;
 struct xfs_dir_ops* FUNC_2 (struct xfs_mount*,int *) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_3(
 struct xfs_buf *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->b_mount;
 struct xfs_da_intnode *VAR_4 = VAR_2->b_addr;
 struct xfs_da3_icnode_hdr VAR_5;
 const struct xfs_dir_ops *VAR_6;
 xfs_failaddr_t VAR_7;

 VAR_6 = FUNC_2(VAR_3, ((void*)0));

 VAR_6->node_hdr_from_disk(&VAR_5, VAR_4);

 VAR_7 = FUNC_1(VAR_2, VAR_2->b_addr);
 if (VAR_7)
  return VAR_7;

 if (VAR_5.level == 0)
  return VAR_1;
 if (VAR_5.level > VAR_0)
  return VAR_1;
 if (VAR_5.count == 0)
  return VAR_1;





 if (VAR_5.count > VAR_3->m_dir_geo->node_ents &&
     VAR_5.count > VAR_3->m_attr_geo->node_ents)
  return VAR_1;



 return ((void*)0);
}
