
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {unsigned long cl_lease_time; unsigned long cl_last_renewal; int cl_rpcclient; int cl_lock; } ;


 int FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nfs_client *VAR_0,
  unsigned long VAR_1,
  unsigned long VAR_2)
{
 FUNC_1(&VAR_0->cl_lock);
 VAR_0->cl_lease_time = VAR_1;
 VAR_0->cl_last_renewal = VAR_2;
 FUNC_2(&VAR_0->cl_lock);


 FUNC_0(VAR_0->cl_rpcclient, VAR_1, VAR_1 >> 1);
}
