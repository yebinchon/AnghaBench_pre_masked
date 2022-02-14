
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;


 int FUNC_0 (struct ceph_mds_client*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,struct ceph_mds_client*) ;
 int FUNC_3 (struct ceph_mds_client*) ;

void FUNC_4(struct ceph_fs_client *VAR_0)
{
 struct ceph_mds_client *VAR_1 = VAR_0->mdsc;
 FUNC_2("mdsc_destroy %p\n", VAR_1);

 if (!VAR_1)
  return;


 FUNC_1();

 FUNC_0(VAR_1);

 VAR_0->mdsc = ((void*)0);
 FUNC_3(VAR_1);
 FUNC_2("mdsc_destroy %p done\n", VAR_1);
}
