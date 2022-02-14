
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct afs_net {int cells_timer; int cells_outstanding; scalar_t__ live; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_net*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct afs_net *VAR_2, time64_t VAR_3)
{
 if (VAR_2->live) {
  FUNC_1(&VAR_2->cells_outstanding);
  if (FUNC_2(&VAR_2->cells_timer, VAR_1 + VAR_3 * VAR_0))
   FUNC_0(VAR_2);
 }
}
