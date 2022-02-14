
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_attr_geo; } ;
struct xfs_buf {int b_addr; struct xfs_mount* b_mount; } ;
struct xfs_attr3_icleaf_hdr {int dummy; } ;


 int FUNC_0 (int ,struct xfs_attr3_icleaf_hdr*,int ) ;
 int FUNC_1 (struct xfs_buf*,struct xfs_attr3_icleaf_hdr*,struct xfs_buf*,struct xfs_attr3_icleaf_hdr*) ;

int
FUNC_2(
 struct xfs_buf *VAR_0,
 struct xfs_buf *VAR_1)
{
 struct xfs_attr3_icleaf_hdr VAR_2;
 struct xfs_attr3_icleaf_hdr VAR_3;
 struct xfs_mount *VAR_4 = VAR_0->b_mount;

 FUNC_0(VAR_4->m_attr_geo, &VAR_2, VAR_0->b_addr);
 FUNC_0(VAR_4->m_attr_geo, &VAR_3, VAR_1->b_addr);
 return FUNC_1(VAR_0, &VAR_2, VAR_1, &VAR_3);
}
