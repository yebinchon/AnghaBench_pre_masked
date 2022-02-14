
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;
struct TYPE_2__ {int if_data; } ;
struct xfs_ifork {int if_bytes; TYPE_1__ if_u1; } ;
struct xfs_dsymlink_hdr {int dummy; } ;
struct xfs_buf {char* b_addr; int * b_ops; int b_length; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct xfs_mount*,int ,int ,int ,struct xfs_buf*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_buf*,int ,scalar_t__) ;

void
FUNC_7(
 struct xfs_trans *VAR_2,
 struct xfs_buf *VAR_3,
 struct xfs_inode *VAR_4,
 struct xfs_ifork *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_4->i_mount;
 char *VAR_7;

 FUNC_5(VAR_2, VAR_3, VAR_0);

 if (!FUNC_3(&VAR_6->m_sb)) {
  VAR_3->b_ops = ((void*)0);
  FUNC_2(VAR_3->b_addr, VAR_5->if_u1.if_data, VAR_5->if_bytes);
  FUNC_6(VAR_2, VAR_3, 0, VAR_5->if_bytes - 1);
  return;
 }





 FUNC_0(FUNC_1(VAR_3->b_length) >=
   VAR_5->if_bytes + sizeof(struct xfs_dsymlink_hdr));

 VAR_3->b_ops = &VAR_1;

 VAR_7 = VAR_3->b_addr;
 VAR_7 += FUNC_4(VAR_6, VAR_4->i_ino, 0, VAR_5->if_bytes, VAR_3);
 FUNC_2(VAR_7, VAR_5->if_u1.if_data, VAR_5->if_bytes);
 FUNC_6(VAR_2, VAR_3, 0, sizeof(struct xfs_dsymlink_hdr) +
     VAR_5->if_bytes - 1);
}
