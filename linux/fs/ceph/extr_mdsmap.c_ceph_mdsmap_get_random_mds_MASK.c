
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mdsmap {int m_num_mds; TYPE_1__* m_info; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 () ;

int FUNC_1(struct ceph_mdsmap *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;


 if (1 == VAR_0->m_num_mds && VAR_0->m_info[0].state > 0)
  return 0;


 for (VAR_2 = 0; VAR_2 < VAR_0->m_num_mds; VAR_2++)
  if (VAR_0->m_info[VAR_2].state > 0)
   VAR_1++;
 if (VAR_1 == 0)
  return -1;


 VAR_1 = FUNC_0() % VAR_1;
 for (VAR_2 = 0; VAR_1 > 0; VAR_2++, VAR_1--)
  while (VAR_0->m_info[VAR_2].state <= 0)
   VAR_2++;

 return VAR_2;
}
