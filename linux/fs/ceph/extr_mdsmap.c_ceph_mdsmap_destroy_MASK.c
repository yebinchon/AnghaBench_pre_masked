
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mdsmap {int m_num_mds; struct ceph_mdsmap* m_data_pg_pools; struct ceph_mdsmap* m_info; struct ceph_mdsmap* export_targets; } ;


 int FUNC_0 (struct ceph_mdsmap*) ;

void FUNC_1(struct ceph_mdsmap *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->m_num_mds; VAR_1++)
  FUNC_0(VAR_0->m_info[VAR_1].export_targets);
 FUNC_0(VAR_0->m_info);
 FUNC_0(VAR_0->m_data_pg_pools);
 FUNC_0(VAR_0);
}
