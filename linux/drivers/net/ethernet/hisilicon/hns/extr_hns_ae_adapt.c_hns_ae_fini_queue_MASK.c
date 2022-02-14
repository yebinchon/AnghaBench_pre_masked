
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae_vf_cb {TYPE_1__* mac_cb; } ;
struct hnae_queue {int handle; } ;
struct TYPE_2__ {scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 struct hnae_vf_cb* FUNC_0 (int ) ;
 int FUNC_1 (struct hnae_queue*) ;

__attribute__((used)) static void FUNC_2(struct hnae_queue *VAR_1)
{
 struct hnae_vf_cb *VAR_2 = FUNC_0(VAR_1->handle);

 if (VAR_2->mac_cb->mac_type == VAR_0)
  FUNC_1(VAR_1);
}
