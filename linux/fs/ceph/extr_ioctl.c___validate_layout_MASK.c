
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_client {int mutex; TYPE_1__* mdsmap; } ;
struct ceph_ioctl_layout {int object_size; int stripe_unit; scalar_t__ data_pool; } ;
struct TYPE_2__ {int m_num_data_pg_pools; scalar_t__* m_data_pg_pools; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct ceph_mds_client *VAR_2,
         struct ceph_ioctl_layout *VAR_3)
{
 int VAR_4, VAR_5;


 if ((VAR_3->object_size & ~VAR_1) ||
     (VAR_3->stripe_unit & ~VAR_1) ||
     ((unsigned)VAR_3->stripe_unit != 0 &&
      ((unsigned)VAR_3->object_size % (unsigned)VAR_3->stripe_unit)))
  return -VAR_0;


 FUNC_0(&VAR_2->mutex);
 VAR_5 = -VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2->mdsmap->m_num_data_pg_pools; VAR_4++)
  if (VAR_2->mdsmap->m_data_pg_pools[VAR_4] == VAR_3->data_pool) {
   VAR_5 = 0;
   break;
  }
 FUNC_1(&VAR_2->mutex);
 if (VAR_5)
  return VAR_5;

 return 0;
}
