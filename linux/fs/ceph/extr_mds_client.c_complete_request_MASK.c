
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_request {int r_completion; int (* r_callback ) (struct ceph_mds_client*,struct ceph_mds_request*) ;} ;
struct ceph_mds_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*) ;

__attribute__((used)) static void FUNC_2(struct ceph_mds_client *VAR_0,
        struct ceph_mds_request *VAR_1)
{
 if (VAR_1->r_callback)
  VAR_1->r_callback(VAR_0, VAR_1);
 FUNC_0(&VAR_1->r_completion);
}
