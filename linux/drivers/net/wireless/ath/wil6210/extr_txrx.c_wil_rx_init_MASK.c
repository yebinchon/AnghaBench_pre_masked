
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct wil_ring {int size; int is_rx; scalar_t__ va; } ;
struct wil6210_priv {struct wil_ring ring_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*,int) ;
 int FUNC_4 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_5 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_6 (struct wil6210_priv*,struct wil_ring*) ;

__attribute__((used)) static int FUNC_7(struct wil6210_priv *VAR_1, uint VAR_2)
{
 struct wil_ring *VAR_3 = &VAR_1->ring_rx;
 int VAR_4;

 FUNC_0(VAR_1, "rx_init\n");

 if (VAR_3->va) {
  FUNC_1(VAR_1, "Rx ring already allocated\n");
  return -VAR_0;
 }

 FUNC_2(VAR_1);

 VAR_3->size = 1 << VAR_2;
 VAR_3->is_rx = 1;
 VAR_4 = FUNC_4(VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4)
  goto err_free;

 VAR_4 = FUNC_3(VAR_1, VAR_3->size);
 if (VAR_4)
  goto err_free;

 return 0;
 err_free:
 FUNC_5(VAR_1, VAR_3);

 return VAR_4;
}
