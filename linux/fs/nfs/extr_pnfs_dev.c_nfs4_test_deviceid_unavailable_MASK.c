
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_deviceid_node {int flags; int timestamp_unavailable; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int *) ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,unsigned long,unsigned long) ;

bool
FUNC_4(struct nfs4_deviceid_node *VAR_3)
{
 if (FUNC_2(VAR_0, &VAR_3->flags)) {
  unsigned long VAR_4, VAR_5;

  VAR_5 = VAR_2;
  VAR_4 = VAR_5 - VAR_1;
  if (FUNC_3(VAR_3->timestamp_unavailable, VAR_4, VAR_5))
   return 1;
  FUNC_0(VAR_0, &VAR_3->flags);
  FUNC_1();
 }
 return 0;
}
