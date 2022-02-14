
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long sb_blocklog; } ;
struct TYPE_5__ {int m_flags; int m_swidth; int m_writeio_log; int m_readio_log; TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline unsigned long
FUNC_1(xfs_mount_t *VAR_3)
{
 if (VAR_3->m_flags & VAR_1)
  return VAR_0;
 return (VAR_3->m_swidth ?
  (VAR_3->m_swidth << VAR_3->m_sb.sb_blocklog) :
  ((VAR_3->m_flags & VAR_2) ?
   (1 << (int)FUNC_0(VAR_3->m_readio_log, VAR_3->m_writeio_log)) :
   VAR_0));
}
