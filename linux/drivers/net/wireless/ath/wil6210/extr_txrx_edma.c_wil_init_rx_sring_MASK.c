
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wil_status_ring {int is_rx; size_t size; size_t elem_size; int desc_rdy_pol; int rx_data; } ;
struct wil6210_priv {struct wil_status_ring* srings; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct wil6210_priv*,char*,size_t,size_t) ;
 int FUNC_2 (struct wil6210_priv*,struct wil_status_ring*) ;
 int FUNC_3 (struct wil6210_priv*,struct wil_status_ring*) ;
 int FUNC_4 (struct wil6210_priv*,size_t) ;

__attribute__((used)) static int FUNC_5(struct wil6210_priv *VAR_0,
        u16 VAR_1,
        size_t VAR_2,
        u16 VAR_3)
{
 struct wil_status_ring *VAR_4 = &VAR_0->srings[VAR_3];
 int VAR_5;

 FUNC_1(VAR_0, "init RX sring: size=%u, ring_id=%u\n",
       VAR_1, VAR_3);

 FUNC_0(&VAR_4->rx_data, 0, sizeof(VAR_4->rx_data));

 VAR_4->is_rx = 1;
 VAR_4->size = VAR_1;
 VAR_4->elem_size = VAR_2;
 VAR_5 = FUNC_2(VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_0, VAR_3);
 if (VAR_5)
  goto out_free;

 VAR_4->desc_rdy_pol = 1;

 return 0;
out_free:
 FUNC_3(VAR_0, VAR_4);
 return VAR_5;
}
