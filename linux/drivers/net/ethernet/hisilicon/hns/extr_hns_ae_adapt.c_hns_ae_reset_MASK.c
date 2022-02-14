
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae_vf_cb {int dsaf_dev; TYPE_1__* mac_cb; } ;
struct hnae_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hnae_handle *VAR_1)
{
 struct hnae_vf_cb *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->mac_cb->mac_type == VAR_0) {
  FUNC_1(VAR_2->mac_cb);
  FUNC_2(VAR_2->dsaf_dev, 0);
 }
}
