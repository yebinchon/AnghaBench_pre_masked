
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int sessions; scalar_t__ mdsmap; int delayed_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ceph_mds_client*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ceph_mds_client*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ceph_mds_client *VAR_0)
{
 FUNC_4("stop\n");
 FUNC_0(&VAR_0->delayed_work);
 if (VAR_0->mdsmap)
  FUNC_2(VAR_0->mdsmap);
 FUNC_5(VAR_0->sessions);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
