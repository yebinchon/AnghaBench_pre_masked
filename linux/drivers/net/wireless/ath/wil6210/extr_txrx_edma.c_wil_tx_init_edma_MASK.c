
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_status_ring {int is_rx; int size; int elem_size; int desc_rdy_pol; } ;
struct wil_ring_tx_status {int dummy; } ;
struct wil6210_priv {int tx_status_ring_order; int tx_sring_idx; struct wil_status_ring* srings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_1 (struct wil6210_priv*) ;
 int FUNC_2 (struct wil6210_priv*,struct wil_status_ring*) ;
 int FUNC_3 (struct wil6210_priv*,struct wil_status_ring*) ;
 int FUNC_4 (struct wil6210_priv*,int) ;

__attribute__((used)) static int FUNC_5(struct wil6210_priv *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);
 struct wil_status_ring *VAR_5;
 int VAR_6;
 u16 VAR_7;

 if (VAR_3->tx_status_ring_order < VAR_1 ||
     VAR_3->tx_status_ring_order > VAR_0)
  VAR_3->tx_status_ring_order = VAR_2;

 VAR_7 = 1 << VAR_3->tx_status_ring_order;

 FUNC_0(VAR_3, "init TX sring: size=%u, ring_id=%u\n",
       VAR_7, VAR_4);

 if (VAR_4 < 0)
  return VAR_4;




 VAR_5 = &VAR_3->srings[VAR_4];

 VAR_5->is_rx = 0;
 VAR_5->size = VAR_7;
 VAR_5->elem_size = sizeof(struct wil_ring_tx_status);
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6)
  goto out_free;

 VAR_5->desc_rdy_pol = 1;
 VAR_3->tx_sring_idx = VAR_4;

 return 0;
out_free:
 FUNC_3(VAR_3, VAR_5);
 return VAR_6;
}
