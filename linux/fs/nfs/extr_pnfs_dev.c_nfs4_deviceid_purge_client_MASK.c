
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_exchange_flags; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct nfs_client const*,long) ;

void
FUNC_1(const struct nfs_client *VAR_2)
{
 long VAR_3;

 if (!(VAR_2->cl_exchange_flags & VAR_0))
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_2, VAR_3);
}
