
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
typedef int * xfs_failaddr_t ;
typedef unsigned long long uint64_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ sb_inodesize; int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_rtdev_targp; } ;
struct xfs_dinode {scalar_t__ di_magic; int di_version; int di_aformat; int di_cowextsize; int di_flags2; int di_extsize; scalar_t__ di_anextents; int di_format; scalar_t__ di_flags; int di_nblocks; int di_nextents; scalar_t__ di_mode; int di_size; int di_uuid; int di_ino; } ;







 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xfs_dinode*) ;
 scalar_t__ FUNC_3 (struct xfs_dinode*) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (struct xfs_dinode*,struct xfs_mount*,int ) ;
 int * FUNC_10 (struct xfs_dinode*,struct xfs_mount*) ;
 int * FUNC_11 (struct xfs_mount*,scalar_t__,int,int,unsigned long long) ;
 int * FUNC_12 (struct xfs_mount*,scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (char*,scalar_t__,int ) ;

xfs_failaddr_t
FUNC_17(
 struct xfs_mount *VAR_12,
 xfs_ino_t VAR_13,
 struct xfs_dinode *VAR_14)
{
 xfs_failaddr_t VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint64_t VAR_18;
 uint64_t VAR_19;

 if (VAR_14->di_magic != FUNC_7(VAR_9))
  return VAR_11;


 if (VAR_14->di_version >= 3) {
  if (!FUNC_14(&VAR_12->m_sb))
   return VAR_11;
  if (!FUNC_16((char *)VAR_14, VAR_12->m_sb.sb_inodesize,
          VAR_7))
   return VAR_11;
  if (FUNC_6(VAR_14->di_ino) != VAR_13)
   return VAR_11;
  if (!FUNC_8(&VAR_14->di_uuid, &VAR_12->m_sb.sb_meta_uuid))
   return VAR_11;
 }


 VAR_19 = FUNC_6(VAR_14->di_size);
 if (VAR_19 & (1ULL << 63))
  return VAR_11;

 VAR_16 = FUNC_4(VAR_14->di_mode);
 if (VAR_16 && FUNC_13(VAR_16) == VAR_10)
  return VAR_11;


 if ((FUNC_1(VAR_16) || FUNC_0(VAR_16)) && VAR_19 == 0)
  return VAR_11;


 if (VAR_16 &&
     FUNC_5(VAR_14->di_nextents) + FUNC_4(VAR_14->di_anextents) >
   FUNC_6(VAR_14->di_nblocks))
  return VAR_11;

 if (VAR_16 && FUNC_2(VAR_14) > VAR_12->m_sb.sb_inodesize)
  return VAR_11;

 VAR_17 = FUNC_4(VAR_14->di_flags);

 if (VAR_16 && (VAR_17 & VAR_6) && !VAR_12->m_rtdev_targp)
  return VAR_11;


 VAR_15 = FUNC_10(VAR_14, VAR_12);
 if (VAR_15)
  return VAR_15;


 switch (VAR_16 & VAR_0) {
 case 132:
 case 134:
 case 135:
 case 129:
  if (VAR_14->di_format != VAR_8)
   return VAR_11;
  break;
 case 130:
 case 131:
 case 133:
  VAR_15 = FUNC_9(VAR_14, VAR_12, VAR_2);
  if (VAR_15)
   return VAR_15;
  break;
 case 0:

  break;
 default:
  return VAR_11;
 }

 if (FUNC_3(VAR_14)) {
  VAR_15 = FUNC_9(VAR_14, VAR_12, VAR_1);
  if (VAR_15)
   return VAR_15;
 } else {






  switch (VAR_14->di_aformat) {
  case 0:
  case 128:
   break;
  default:
   return VAR_11;
  }
  if (VAR_14->di_anextents)
   return VAR_11;
 }


 VAR_15 = FUNC_12(VAR_12, FUNC_5(VAR_14->di_extsize),
   VAR_16, VAR_17);
 if (VAR_15)
  return VAR_15;


 if (VAR_14->di_version < 3)
  return ((void*)0);

 VAR_18 = FUNC_6(VAR_14->di_flags2);


 if ((VAR_18 & (VAR_5 | VAR_3)) &&
      !FUNC_15(&VAR_12->m_sb))
  return VAR_11;


 if ((VAR_18 & VAR_5) && (VAR_16 & VAR_0) != 130)
  return VAR_11;


 if ((VAR_18 & VAR_5) && (VAR_17 & VAR_6))
  return VAR_11;


 if ((VAR_18 & VAR_5) && (VAR_18 & VAR_4))
  return VAR_11;


 VAR_15 = FUNC_11(VAR_12, FUNC_5(VAR_14->di_cowextsize),
   VAR_16, VAR_17, VAR_18);
 if (VAR_15)
  return VAR_15;

 return ((void*)0);
}
