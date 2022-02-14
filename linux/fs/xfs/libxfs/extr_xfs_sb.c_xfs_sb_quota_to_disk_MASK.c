
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xfs_sb {int sb_qflags; scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; scalar_t__ sb_pquotino; } ;
struct xfs_dsb {void* sb_pquotino; void* sb_gquotino; void* sb_qflags; void* sb_uquotino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_sb*) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_dsb *VAR_9,
 struct xfs_sb *VAR_10)
{
 uint16_t VAR_11 = VAR_10->sb_qflags;

 VAR_9->sb_uquotino = FUNC_1(VAR_10->sb_uquotino);
 if (FUNC_2(VAR_10)) {
  VAR_9->sb_qflags = FUNC_0(VAR_10->sb_qflags);
  VAR_9->sb_gquotino = FUNC_1(VAR_10->sb_gquotino);
  VAR_9->sb_pquotino = FUNC_1(VAR_10->sb_pquotino);
  return;
 }






 VAR_11 &= ~(VAR_8 | VAR_7 |
   VAR_3 | VAR_2);

 if (VAR_10->sb_qflags &
   (VAR_8 | VAR_3))
  VAR_11 |= VAR_5;
 if (VAR_10->sb_qflags &
   (VAR_7 | VAR_2))
  VAR_11 |= VAR_4;
 VAR_9->sb_qflags = FUNC_0(VAR_11);
 if (VAR_10->sb_qflags & VAR_1)
  VAR_9->sb_gquotino = FUNC_1(VAR_10->sb_gquotino);
 else if (VAR_10->sb_qflags & VAR_6)
  VAR_9->sb_gquotino = FUNC_1(VAR_10->sb_pquotino);
 else {






  if (VAR_10->sb_gquotino == VAR_0 &&
      VAR_10->sb_pquotino == VAR_0)
   VAR_9->sb_gquotino = FUNC_1(VAR_0);
 }

 VAR_9->sb_pquotino = 0;
}
