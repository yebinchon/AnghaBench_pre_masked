
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int dummy; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_dsb {scalar_t__ sb_magicnum; scalar_t__ sb_crc; int sb_versionnum; } ;
struct xfs_buf {scalar_t__ b_bn; struct xfs_mount* b_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_dsb* FUNC_0 (struct xfs_buf*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct xfs_sb*,struct xfs_dsb*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_buf*,int) ;
 int FUNC_5 (struct xfs_buf*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_buf*,struct xfs_sb*) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_sb*) ;
 int FUNC_9 (struct xfs_buf*,int,int ) ;

__attribute__((used)) static void
FUNC_10(
 struct xfs_buf *VAR_8)
{
 struct xfs_sb VAR_9;
 struct xfs_mount *VAR_10 = VAR_8->b_mount;
 struct xfs_dsb *VAR_11 = FUNC_0(VAR_8);
 int VAR_12;





 if (VAR_11->sb_magicnum == FUNC_3(VAR_4) &&
     (((FUNC_2(VAR_11->sb_versionnum) & VAR_6) ==
      VAR_5) ||
      VAR_11->sb_crc != 0)) {

  if (!FUNC_5(VAR_8, VAR_2)) {

   if (VAR_8->b_bn == VAR_3 ||
       FUNC_6(&VAR_10->m_sb)) {
    VAR_12 = -VAR_0;
    goto out_error;
   }
  }
 }





 FUNC_1(&VAR_9, FUNC_0(VAR_8), 0);
 VAR_12 = FUNC_7(VAR_10, VAR_8, &VAR_9);
 if (VAR_12)
  goto out_error;
 VAR_12 = FUNC_8(VAR_10, &VAR_9);

out_error:
 if (VAR_12 == -VAR_1 || VAR_12 == -VAR_0)
  FUNC_9(VAR_8, VAR_12, VAR_7);
 else if (VAR_12)
  FUNC_4(VAR_8, VAR_12);
}
