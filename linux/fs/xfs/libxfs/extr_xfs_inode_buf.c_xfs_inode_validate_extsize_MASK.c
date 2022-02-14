
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int sb_rextsize; int sb_blocklog; int sb_blocksize; int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_mount*,int) ;
 int * VAR_4 ;

xfs_failaddr_t
FUNC_3(
 struct xfs_mount *VAR_5,
 uint32_t VAR_6,
 uint16_t VAR_7,
 uint16_t VAR_8)
{
 bool VAR_9;
 bool VAR_10;
 bool VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;

 VAR_9 = (VAR_8 & VAR_3);
 VAR_10 = (VAR_8 & VAR_1);
 VAR_11 = (VAR_8 & VAR_2);
 VAR_12 = FUNC_2(VAR_5, VAR_6);

 if (VAR_9)
  VAR_13 = VAR_5->m_sb.sb_rextsize << VAR_5->m_sb.sb_blocklog;
 else
  VAR_13 = VAR_5->m_sb.sb_blocksize;

 if ((VAR_10 || VAR_11) && !(FUNC_0(VAR_7) || FUNC_1(VAR_7)))
  return VAR_4;

 if (VAR_10 && !FUNC_1(VAR_7))
  return VAR_4;

 if (VAR_11 && !FUNC_0(VAR_7))
  return VAR_4;

 if ((VAR_10 || VAR_11) && VAR_6 == 0)
  return VAR_4;


 if (VAR_7 && !(VAR_10 || VAR_11) && VAR_6 != 0)
  return VAR_4;

 if (VAR_12 % VAR_13)
  return VAR_4;

 if (VAR_6 > VAR_0)
  return VAR_4;

 if (!VAR_9 && VAR_6 > VAR_5->m_sb.sb_agblocks / 2)
  return VAR_4;

 return ((void*)0);
}
