
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mdsmap {scalar_t__ m_num_laggy; int m_num_mds; TYPE_1__* m_info; scalar_t__ m_damaged; int m_enabled; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct ceph_mdsmap *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 if (!VAR_1->m_enabled)
  return 0;
 if (VAR_1->m_damaged)
  return 0;
 if (VAR_1->m_num_laggy > 0)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->m_num_mds; VAR_2++) {
  if (VAR_1->m_info[VAR_2].state == VAR_0)
   VAR_3++;
 }
 return VAR_3 > 0;
}
