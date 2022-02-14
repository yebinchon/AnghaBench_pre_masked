
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* va; } ;
struct wil_ring {int swtail; int swhead; int hwtail; TYPE_1__ edma_rx_swtail; } ;
struct wil6210_priv {struct wil_ring ring_rx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_3 (struct wil6210_priv*,struct wil_ring*,int) ;
 int FUNC_4 (struct wil_ring*) ;
 int FUNC_5 (struct wil6210_priv*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct wil6210_priv *VAR_1)
{
 struct wil_ring *VAR_2 = &VAR_1->ring_rx;
 u32 VAR_3;
 int VAR_4 = 0;
 VAR_2->swtail = *VAR_2->edma_rx_swtail.va;

 for (; VAR_3 = FUNC_4(VAR_2),
      (VAR_3 != VAR_2->swtail);
      VAR_2->swhead = VAR_3) {
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_2->swhead);
  if (FUNC_0(VAR_4)) {
   if (VAR_4 == -VAR_0)
    FUNC_1(VAR_1, "No free buffer ID found\n");
   else
    FUNC_2(VAR_1,
          "Error %d in refill desc[%d]\n",
          VAR_4, VAR_2->swhead);
   break;
  }
 }




 FUNC_6();

 FUNC_5(VAR_1, VAR_2->hwtail, VAR_2->swhead);

 return VAR_4;
}
