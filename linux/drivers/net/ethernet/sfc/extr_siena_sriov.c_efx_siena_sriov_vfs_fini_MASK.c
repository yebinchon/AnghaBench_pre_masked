
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {scalar_t__ evq0_count; scalar_t__ peer_page_count; int * peer_page_addrs; int buf; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {unsigned int vf_count; struct siena_nic_data* nic_data; } ;


 int FUNC_0 (struct efx_nic*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_0)
{
 struct siena_nic_data *VAR_1 = VAR_0->nic_data;
 struct siena_vf *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->vf_count; ++VAR_3) {
  VAR_2 = VAR_1->vf + VAR_3;

  FUNC_0(VAR_0, &VAR_2->buf);
  FUNC_1(VAR_2->peer_page_addrs);
  VAR_2->peer_page_addrs = ((void*)0);
  VAR_2->peer_page_count = 0;

  VAR_2->evq0_count = 0;
 }
}
