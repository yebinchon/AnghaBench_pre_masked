
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_mds_request {int dummy; } ;
struct ceph_mds_client {int dummy; } ;


 int FUNC_0 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_2 (char*,struct ceph_mds_request*,...) ;

int FUNC_3(struct ceph_mds_client *VAR_0,
    struct inode *VAR_1,
    struct ceph_mds_request *VAR_2)
{
 int VAR_3;

 FUNC_2("do_request on %p\n", VAR_2);


 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_2("do_request %p done, result %d\n", VAR_2, VAR_3);
 return VAR_3;
}
