
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_logsunit; int sb_blocksize; int sb_logsectsize; int sb_width; int sb_unit; int sb_uuid; int sb_logstart; int sb_rextents; int sb_rblocks; int sb_dblocks; int sb_imax_pct; int sb_inodesize; int sb_sectsize; int sb_logblocks; int sb_agcount; int sb_agblocks; int sb_rextsize; } ;
struct xfs_fsop_geom {int flags; int version; int logsunit; int dirblocksize; int rtsectsize; int logsectsize; int swidth; int sunit; int uuid; int logstart; int rtextents; int rtblocks; int datablocks; int imaxpct; int inodesize; int sectsize; int logblocks; int agcount; int agblocks; int rtextsize; int blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct xfs_fsop_geom*,int ,int) ;
 int FUNC_3 (struct xfs_sb*) ;
 scalar_t__ FUNC_4 (struct xfs_sb*) ;
 scalar_t__ FUNC_5 (struct xfs_sb*) ;
 scalar_t__ FUNC_6 (struct xfs_sb*) ;
 scalar_t__ FUNC_7 (struct xfs_sb*) ;
 scalar_t__ FUNC_8 (struct xfs_sb*) ;
 scalar_t__ FUNC_9 (struct xfs_sb*) ;
 scalar_t__ FUNC_10 (struct xfs_sb*) ;
 scalar_t__ FUNC_11 (struct xfs_sb*) ;
 scalar_t__ FUNC_12 (struct xfs_sb*) ;
 scalar_t__ FUNC_13 (struct xfs_sb*) ;
 scalar_t__ FUNC_14 (struct xfs_sb*) ;
 scalar_t__ FUNC_15 (struct xfs_sb*) ;
 scalar_t__ FUNC_16 (struct xfs_sb*) ;
 scalar_t__ FUNC_17 (struct xfs_sb*) ;
 scalar_t__ FUNC_18 (struct xfs_sb*) ;
 scalar_t__ FUNC_19 (struct xfs_sb*) ;

void
FUNC_20(
 struct xfs_sb *VAR_22,
 struct xfs_fsop_geom *VAR_23,
 int VAR_24)
{
 FUNC_2(VAR_23, 0, sizeof(struct xfs_fsop_geom));

 VAR_23->blocksize = VAR_22->sb_blocksize;
 VAR_23->rtextsize = VAR_22->sb_rextsize;
 VAR_23->agblocks = VAR_22->sb_agblocks;
 VAR_23->agcount = VAR_22->sb_agcount;
 VAR_23->logblocks = VAR_22->sb_logblocks;
 VAR_23->sectsize = VAR_22->sb_sectsize;
 VAR_23->inodesize = VAR_22->sb_inodesize;
 VAR_23->imaxpct = VAR_22->sb_imax_pct;
 VAR_23->datablocks = VAR_22->sb_dblocks;
 VAR_23->rtblocks = VAR_22->sb_rblocks;
 VAR_23->rtextents = VAR_22->sb_rextents;
 VAR_23->logstart = VAR_22->sb_logstart;
 FUNC_0(sizeof(VAR_23->uuid) != sizeof(VAR_22->sb_uuid));
 FUNC_1(VAR_23->uuid, &VAR_22->sb_uuid, sizeof(VAR_22->sb_uuid));

 if (VAR_24 < 2)
  return;

 VAR_23->sunit = VAR_22->sb_unit;
 VAR_23->swidth = VAR_22->sb_width;

 if (VAR_24 < 3)
  return;

 VAR_23->version = VAR_20;
 VAR_23->flags = VAR_12 |
       VAR_4 |
       VAR_6;
 if (FUNC_6(VAR_22))
  VAR_23->flags |= VAR_1;
 if (FUNC_15(VAR_22))
  VAR_23->flags |= VAR_14;
 if (FUNC_4(VAR_22))
  VAR_23->flags |= VAR_9;
 if (FUNC_9(VAR_22))
  VAR_23->flags |= VAR_3;
 if (FUNC_18(VAR_22))
  VAR_23->flags |= VAR_17;
 if (FUNC_5(VAR_22))
  VAR_23->flags |= VAR_5;
 if (FUNC_12(VAR_22))
  VAR_23->flags |= VAR_10;
 if (FUNC_7(VAR_22))
  VAR_23->flags |= VAR_2;
 if (FUNC_14(VAR_22))
  VAR_23->flags |= VAR_13;
 if (FUNC_8(VAR_22))
  VAR_23->flags |= VAR_19;
 if (FUNC_11(VAR_22))
  VAR_23->flags |= VAR_8;
 if (FUNC_10(VAR_22))
  VAR_23->flags |= VAR_7;
 if (FUNC_19(VAR_22))
  VAR_23->flags |= VAR_18;
 if (FUNC_17(VAR_22))
  VAR_23->flags |= VAR_16;
 if (FUNC_16(VAR_22))
  VAR_23->flags |= VAR_15;
 if (FUNC_18(VAR_22))
  VAR_23->logsectsize = VAR_22->sb_logsectsize;
 else
  VAR_23->logsectsize = VAR_0;
 VAR_23->rtsectsize = VAR_22->sb_blocksize;
 VAR_23->dirblocksize = FUNC_3(VAR_22);

 if (VAR_24 < 4)
  return;

 if (FUNC_13(VAR_22))
  VAR_23->flags |= VAR_11;

 VAR_23->logsunit = VAR_22->sb_logsunit;

 if (VAR_24 < 5)
  return;

 VAR_23->version = VAR_21;
}
