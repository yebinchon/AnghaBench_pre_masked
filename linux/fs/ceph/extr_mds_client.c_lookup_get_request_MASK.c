
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_mds_request {int dummy; } ;
struct ceph_mds_client {int request_tree; } ;


 int FUNC_0 (struct ceph_mds_request*) ;
 struct ceph_mds_request* FUNC_1 (int *,int ) ;

__attribute__((used)) static struct ceph_mds_request *
FUNC_2(struct ceph_mds_client *VAR_0, u64 VAR_1)
{
 struct ceph_mds_request *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->request_tree, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);

 return VAR_2;
}
