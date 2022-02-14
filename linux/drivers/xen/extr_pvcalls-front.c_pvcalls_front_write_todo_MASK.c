
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pvcalls_data_intf* ring; } ;
struct sock_mapping {TYPE_1__ active; } ;
struct pvcalls_data_intf {scalar_t__ out_prod; scalar_t__ out_cons; int out_error; } ;
typedef int int32_t ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct sock_mapping *VAR_2)
{
 struct pvcalls_data_intf *VAR_3 = VAR_2->active.ring;
 RING_IDX VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_1);
 int32_t VAR_7;

 VAR_7 = VAR_3->out_error;
 if (VAR_7 == -VAR_0)
  return 0;
 if (VAR_7 != 0)
  return 1;

 VAR_4 = VAR_3->out_cons;
 VAR_5 = VAR_3->out_prod;
 return !!(VAR_6 - FUNC_1(VAR_5, VAR_4, VAR_6));
}
