
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pvcalls_data_intf* ring; } ;
struct sock_mapping {TYPE_1__ active; } ;
struct pvcalls_data_intf {scalar_t__ in_error; int in_prod; int in_cons; } ;
typedef scalar_t__ int32_t ;
typedef int RING_IDX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct sock_mapping *VAR_1)
{
 struct pvcalls_data_intf *VAR_2 = VAR_1->active.ring;
 RING_IDX VAR_3, VAR_4;
 int32_t VAR_5;

 VAR_3 = VAR_2->in_cons;
 VAR_4 = VAR_2->in_prod;
 VAR_5 = VAR_2->in_error;
 return (VAR_5 != 0 ||
  FUNC_1(VAR_4, VAR_3,
          FUNC_0(VAR_0)) != 0);
}
