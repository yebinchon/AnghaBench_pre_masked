
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ sb_blocksize; int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int * VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

xfs_failaddr_t
FUNC_4(
 struct xfs_mount *VAR_4,
 uint32_t VAR_5,
 uint16_t VAR_6,
 uint16_t VAR_7,
 uint64_t VAR_8)
{
 bool VAR_9;
 bool VAR_10;
 uint32_t VAR_11;

 VAR_9 = (VAR_7 & VAR_2);
 VAR_10 = (VAR_8 & VAR_1);
 VAR_11 = FUNC_2(VAR_4, VAR_5);

 if (VAR_10 && !FUNC_3(&VAR_4->m_sb))
  return VAR_3;

 if (VAR_10 && !(FUNC_0(VAR_6) || FUNC_1(VAR_6)))
  return VAR_3;

 if (VAR_10 && VAR_5 == 0)
  return VAR_3;


 if (VAR_6 && !VAR_10 && VAR_5 != 0)
  return VAR_3;

 if (VAR_10 && VAR_9)
  return VAR_3;

 if (VAR_11 % VAR_4->m_sb.sb_blocksize)
  return VAR_3;

 if (VAR_5 > VAR_0)
  return VAR_3;

 if (VAR_5 > VAR_4->m_sb.sb_agblocks / 2)
  return VAR_3;

 return ((void*)0);
}
