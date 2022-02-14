
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae_vf_cb {int dummy; } ;
struct hnae_handle {int q_num; int * qs; } ;
struct TYPE_2__ {scalar_t__ used_by_vf; } ;


 TYPE_1__* FUNC_0 (int ) ;
 struct hnae_vf_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hnae_vf_cb*) ;

__attribute__((used)) static void FUNC_3(struct hnae_handle *VAR_0)
{
 struct hnae_vf_cb *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->q_num; VAR_2++)
  FUNC_0(VAR_0->qs[VAR_2])->used_by_vf = 0;

 FUNC_2(VAR_1);
}
