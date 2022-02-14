
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_ring {int is_rx; int size; } ;
struct wil6210_priv {struct wil_ring ring_rx; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_2 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_3 (struct wil6210_priv*,int) ;

__attribute__((used)) static int FUNC_4(struct wil6210_priv *VAR_0, u16 VAR_1,
     int VAR_2)
{
 struct wil_ring *VAR_3 = &VAR_0->ring_rx;
 int VAR_4;

 FUNC_0(VAR_0, "init RX desc ring\n");

 VAR_3->size = VAR_1;
 VAR_3->is_rx = 1;
 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2);
 if (VAR_4)
  goto out_free;

 return 0;
out_free:
 FUNC_2(VAR_0, VAR_3);
 return VAR_4;
}
