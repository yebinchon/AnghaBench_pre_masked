
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_perag {int pagf_agflreset; int pagf_flcount; int pag_agno; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agf {scalar_t__ agf_flcount; int agf_fllast; scalar_t__ agf_flfirst; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct xfs_mount*,struct xfs_agf*,int ,int ) ;
 scalar_t__ FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_buf*,int) ;
 int FUNC_6 (struct xfs_mount*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(
 struct xfs_trans *VAR_4,
 struct xfs_buf *VAR_5,
 struct xfs_perag *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_4->t_mountp;
 struct xfs_agf *VAR_8 = FUNC_1(VAR_5);

 FUNC_0(VAR_6->pagf_agflreset);
 FUNC_3(VAR_7, VAR_8, 0, VAR_3);

 FUNC_6(VAR_7,
        "WARNING: Reset corrupted AGFL on AG %u. %d blocks leaked. "
        "Please unmount and run xfs_repair.",
          VAR_6->pag_agno, VAR_6->pagf_flcount);

 VAR_8->agf_flfirst = 0;
 VAR_8->agf_fllast = FUNC_2(FUNC_4(VAR_7) - 1);
 VAR_8->agf_flcount = 0;
 FUNC_5(VAR_4, VAR_5, VAR_1 | VAR_2 |
        VAR_0);

 VAR_6->pagf_flcount = 0;
 VAR_6->pagf_agflreset = 0;
}
