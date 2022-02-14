
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae_vf_cb {TYPE_1__* mac_cb; } ;
struct hnae_handle {int q_num; } ;
struct TYPE_2__ {scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct hnae_handle *VAR_1)
{
 u32 VAR_2;
 struct hnae_vf_cb *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = FUNC_3();
 VAR_2 += FUNC_4();
 VAR_2 += FUNC_5() * VAR_1->q_num;
 VAR_2 += FUNC_2(VAR_3->mac_cb);

 if (VAR_3->mac_cb->mac_type == VAR_0)
  VAR_2 += FUNC_1();

 return VAR_2;
}
