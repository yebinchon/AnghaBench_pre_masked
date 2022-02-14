
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_mds_client {int quotarealms_count; } ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_0, bool VAR_1)
{
 struct ceph_mds_client *VAR_2 = FUNC_2(VAR_0)->mdsc;
 if (VAR_1)
  FUNC_1(&VAR_2->quotarealms_count);
 else
  FUNC_0(&VAR_2->quotarealms_count);
}
