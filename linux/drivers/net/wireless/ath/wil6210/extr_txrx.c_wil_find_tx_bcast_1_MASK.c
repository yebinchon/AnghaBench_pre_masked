
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {int dot1x_open; int enabled; } ;
struct wil_ring {int va; } ;
struct wil6210_vif {int bcast_ring; } ;
struct wil6210_priv {struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct wil_ring *FUNC_1(struct wil6210_priv *VAR_1,
         struct wil6210_vif *VAR_2,
         struct sk_buff *VAR_3)
{
 struct wil_ring *VAR_4;
 struct wil_ring_tx_data *VAR_5;
 int VAR_6 = VAR_2->bcast_ring;

 if (VAR_6 < 0)
  return ((void*)0);
 VAR_4 = &VAR_1->ring_tx[VAR_6];
 VAR_5 = &VAR_1->ring_tx_data[VAR_6];
 if (!VAR_4->va || !VAR_5->enabled)
  return ((void*)0);
 if (!VAR_1->ring_tx_data[VAR_6].dot1x_open &&
     VAR_3->protocol != FUNC_0(VAR_0))
  return ((void*)0);

 return VAR_4;
}
