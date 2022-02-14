
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wil_status_ring {scalar_t__ desc_rdy_pol; int va; } ;
struct wil_rx_status_extended {int dummy; } ;
struct wil6210_priv {int num_rx_status_rings; struct wil_status_ring* srings; } ;


 int FUNC_0 (struct wil_status_ring*,scalar_t__*,void*) ;

__attribute__((used)) static bool FUNC_1(struct wil6210_priv *VAR_0)
{
 struct wil_status_ring *VAR_1;
 struct wil_rx_status_extended VAR_2;
 void *VAR_3 = &VAR_2;
 u8 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_rx_status_rings; VAR_5++) {
  VAR_1 = &VAR_0->srings[VAR_5];
  if (!VAR_1->va)
   continue;

  FUNC_0(VAR_1, &VAR_4, VAR_3);


  if (VAR_4 == VAR_1->desc_rdy_pol)
   return 0;
 }

 return 1;
}
