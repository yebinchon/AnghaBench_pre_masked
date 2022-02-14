
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_ring {int swhead; int swtail; int hwtail; } ;
struct wil6210_priv {struct wil_ring ring_rx; struct net_device* main_ndev; } ;
struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_2 (struct wil_ring*) ;
 int FUNC_3 (struct wil6210_priv*,struct wil_ring*,int,int) ;
 int FUNC_4 (struct wil6210_priv*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct wil6210_priv *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->main_ndev;
 struct wil_ring *VAR_5 = &VAR_2->ring_rx;
 u32 VAR_6;
 int VAR_7 = 0;
 int VAR_8 = VAR_4->type == VAR_0 ?
   VAR_1 : 0;

 for (; VAR_6 = FUNC_2(VAR_5),
      (VAR_6 != VAR_5->swhead) && (VAR_3-- > 0);
      VAR_5->swtail = VAR_6) {
  VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_5->swtail, VAR_8);
  if (FUNC_0(VAR_7)) {
   FUNC_1(VAR_2, "Error %d in rx refill[%d]\n",
         VAR_7, VAR_5->swtail);
   break;
  }
 }




 FUNC_5();

 FUNC_4(VAR_2, VAR_5->hwtail, VAR_5->swtail);

 return VAR_7;
}
