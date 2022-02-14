
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; scalar_t__ sb_pquotino; int sb_qflags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct xfs_sb*) ;

void
FUNC_1(struct xfs_sb *VAR_8)
{
 if (VAR_8->sb_uquotino == 0)
  VAR_8->sb_uquotino = VAR_0;
 if (VAR_8->sb_gquotino == 0)
  VAR_8->sb_gquotino = VAR_0;
 if (VAR_8->sb_pquotino == 0)
  VAR_8->sb_pquotino = VAR_0;





 if (FUNC_0(VAR_8))
  return;

 if (VAR_8->sb_qflags & VAR_4)
  VAR_8->sb_qflags |= (VAR_8->sb_qflags & VAR_5) ?
     VAR_7 : VAR_2;
 if (VAR_8->sb_qflags & VAR_3)
  VAR_8->sb_qflags |= (VAR_8->sb_qflags & VAR_5) ?
     VAR_6 : VAR_1;
 VAR_8->sb_qflags &= ~(VAR_4 | VAR_3);

 if (VAR_8->sb_qflags & VAR_5 &&
     VAR_8->sb_gquotino != VAR_0) {
  VAR_8->sb_pquotino = VAR_8->sb_gquotino;
  VAR_8->sb_gquotino = VAR_0;
 }
}
