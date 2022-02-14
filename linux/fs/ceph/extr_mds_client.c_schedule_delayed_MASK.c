
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int delayed_work; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ceph_mds_client *VAR_1)
{
 int VAR_2 = 5;
 unsigned VAR_3 = FUNC_0(VAR_0 * VAR_2);
 FUNC_1(&VAR_1->delayed_work, VAR_3);
}
