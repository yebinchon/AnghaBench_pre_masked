
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_frextents; } ;
struct xfs_mount {int m_sb_lock; TYPE_1__ m_sb; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(
 struct xfs_mount *VAR_1,
 int64_t VAR_2)
{
 int64_t VAR_3;
 int VAR_4 = 0;

 FUNC_0(&VAR_1->m_sb_lock);
 VAR_3 = VAR_1->m_sb.sb_frextents + VAR_2;
 if (VAR_3 < 0)
  VAR_4 = -VAR_0;
 else
  VAR_1->m_sb.sb_frextents = VAR_3;
 FUNC_1(&VAR_1->m_sb_lock);
 return VAR_4;
}
