
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int stopping; } ;


 int FUNC_0 (struct ceph_mds_client*) ;
 int FUNC_1 (struct ceph_mds_client*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ceph_mds_client*) ;
 int FUNC_5 (struct ceph_mds_client*) ;

void FUNC_6(struct ceph_mds_client *VAR_0)
{
 FUNC_3("pre_umount\n");
 VAR_0->stopping = 1;

 FUNC_4(VAR_0);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0);





 FUNC_2();

 FUNC_0(VAR_0);
}
