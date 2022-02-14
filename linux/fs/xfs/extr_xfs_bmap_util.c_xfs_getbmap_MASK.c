
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct xfs_mount {TYPE_2__* m_super; } ;
struct TYPE_4__ {long long di_size; int di_flags; } ;
struct xfs_inode {TYPE_1__ i_d; int i_delayed_blks; struct xfs_mount* i_mount; } ;
struct xfs_ifork {int if_flags; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
struct kgetbmap {int bmv_oflags; } ;
struct getbmapx {int bmv_iflags; int bmv_length; int bmv_entries; long long bmv_offset; } ;
typedef long long int64_t ;
struct TYPE_6__ {int i_mapping; } ;
struct TYPE_5__ {long long s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (struct xfs_inode*) ;

 scalar_t__ FUNC_1 (struct xfs_mount*,long long) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,long long) ;
 scalar_t__ FUNC_3 (struct xfs_mount*,long long) ;


 int VAR_6 ;
 int VAR_7 ;



 long long FUNC_4 (struct xfs_mount*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 (struct xfs_inode*,int) ;
 struct xfs_ifork* FUNC_6 (struct xfs_inode*,int) ;
 int FUNC_7 (struct xfs_inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 long long FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (long long,long long) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_inode*) ;
 scalar_t__ FUNC_13 (struct getbmapx*) ;
 scalar_t__ FUNC_14 (struct xfs_bmbt_irec*,scalar_t__) ;
 int FUNC_15 (struct xfs_inode*,struct getbmapx*,struct kgetbmap*,long long,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct xfs_inode*,struct getbmapx*,struct kgetbmap*,long long,struct xfs_bmbt_irec*) ;
 int FUNC_17 (struct xfs_inode*,struct xfs_ifork*,scalar_t__,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_18 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_19 (struct xfs_inode*,int) ;
 int FUNC_20 (struct xfs_inode*) ;
 int FUNC_21 (struct xfs_inode*) ;
 int FUNC_22 (int *,struct xfs_inode*,int) ;
 int FUNC_23 (struct xfs_inode*,int) ;
 int FUNC_24 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

int
FUNC_25(
 struct xfs_inode *VAR_11,
 struct getbmapx *VAR_12,
 struct kgetbmap *VAR_13)
{
 struct xfs_mount *VAR_14 = VAR_11->i_mount;
 int VAR_15 = VAR_12->bmv_iflags;
 int VAR_16, VAR_17, VAR_18 = 0;
 int64_t VAR_19, VAR_20;
 xfs_fileoff_t VAR_21, VAR_22;
 struct xfs_ifork *VAR_23;
 struct xfs_bmbt_irec VAR_24, VAR_25;
 xfs_filblks_t VAR_26;
 struct xfs_iext_cursor VAR_27;

 if (VAR_12->bmv_iflags & ~VAR_3)
  return -VAR_5;


 if (VAR_15 & VAR_1)
  return -VAR_5;

 if ((VAR_15 & VAR_0) && (VAR_15 & VAR_1))
  return -VAR_5;

 if (VAR_12->bmv_length < -1)
  return -VAR_5;
 VAR_12->bmv_entries = 0;
 if (VAR_12->bmv_length == 0)
  return 0;

 if (VAR_15 & VAR_0)
  VAR_16 = 133;
 else if (VAR_15 & VAR_1)
  VAR_16 = 132;
 else
  VAR_16 = 131;
 VAR_23 = FUNC_6(VAR_11, VAR_16);

 FUNC_19(VAR_11, VAR_10);
 switch (VAR_16) {
 case 133:
  if (!FUNC_7(VAR_11))
   goto out_unlock_iolock;

  VAR_20 = 1LL << 32;
  VAR_17 = FUNC_20(VAR_11);
  break;
 case 132:

  if (!VAR_23)
   goto out_unlock_iolock;

  if (FUNC_11(VAR_11))
   VAR_20 = VAR_14->m_super->s_maxbytes;
  else
   VAR_20 = FUNC_8(VAR_11);

  VAR_17 = VAR_9;
  FUNC_19(VAR_11, VAR_17);
  break;
 case 131:
  if (!(VAR_15 & VAR_2) &&
      (VAR_11->i_delayed_blks || FUNC_8(VAR_11) > VAR_11->i_d.di_size)) {
   VAR_18 = FUNC_9(FUNC_0(VAR_11)->i_mapping);
   if (VAR_18)
    goto out_unlock_iolock;
  }

  if (FUNC_12(VAR_11) ||
      (VAR_11->i_d.di_flags &
       (VAR_7 | VAR_6)))
   VAR_20 = VAR_14->m_super->s_maxbytes;
  else
   VAR_20 = FUNC_8(VAR_11);

  VAR_17 = FUNC_21(VAR_11);
  break;
 }

 switch (FUNC_5(VAR_11, VAR_16)) {
 case 129:
 case 130:
  break;
 case 128:

  goto out_unlock_ilock;
 default:
  VAR_18 = -VAR_5;
  goto out_unlock_ilock;
 }

 if (VAR_12->bmv_length == -1) {
  VAR_20 = FUNC_4(VAR_14, FUNC_3(VAR_14, VAR_20));
  VAR_12->bmv_length = FUNC_10(0LL, VAR_20 - VAR_12->bmv_offset);
 }

 VAR_19 = VAR_12->bmv_offset + VAR_12->bmv_length;

 VAR_22 = VAR_21 = FUNC_2(VAR_14, VAR_12->bmv_offset);
 VAR_26 = FUNC_1(VAR_14, VAR_12->bmv_length);

 if (!(VAR_23->if_flags & VAR_8)) {
  VAR_18 = FUNC_22(((void*)0), VAR_11, VAR_16);
  if (VAR_18)
   goto out_unlock_ilock;
 }

 if (!FUNC_17(VAR_11, VAR_23, VAR_21, &VAR_27, &VAR_24)) {




  if (VAR_15 & VAR_2)
   FUNC_15(VAR_11, VAR_12, VAR_13, VAR_19, VAR_21,
     FUNC_3(VAR_14, FUNC_8(VAR_11)));
  goto out_unlock_ilock;
 }

 while (!FUNC_13(VAR_12)) {
  FUNC_24(&VAR_24, VAR_22, VAR_26);





  if (VAR_24.br_startoff > VAR_21) {
   FUNC_15(VAR_11, VAR_12, VAR_13, VAR_19, VAR_21,
     VAR_24.br_startoff);
   if (FUNC_13(VAR_12))
    break;
  }






  VAR_21 = VAR_24.br_startoff + VAR_24.br_blockcount;
  VAR_25 = VAR_24;
  do {
   VAR_18 = FUNC_16(VAR_11, VAR_12, VAR_13, VAR_19,
     &VAR_25);
   if (VAR_18 || FUNC_13(VAR_12))
    goto out_unlock_ilock;
  } while (FUNC_14(&VAR_25, VAR_21));

  if (!FUNC_18(VAR_23, &VAR_27, &VAR_24)) {
   xfs_fileoff_t VAR_28 = FUNC_3(VAR_14, FUNC_8(VAR_11));

   VAR_13[VAR_12->bmv_entries - 1].bmv_oflags |= VAR_4;

   if (VAR_16 != 133 && VAR_21 < VAR_28 &&
       !FUNC_13(VAR_12)) {
    FUNC_15(VAR_11, VAR_12, VAR_13, VAR_19,
      VAR_21, VAR_28);
   }
   break;
  }

  if (VAR_21 >= VAR_22 + VAR_26)
   break;
 }

out_unlock_ilock:
 FUNC_23(VAR_11, VAR_17);
out_unlock_iolock:
 FUNC_23(VAR_11, VAR_10);
 return VAR_18;
}
