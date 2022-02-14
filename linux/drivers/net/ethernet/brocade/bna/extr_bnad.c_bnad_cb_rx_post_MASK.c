
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_rx_info {struct bnad_rx_ctrl* rx_ctrl; } ;
struct bnad_rx_ctrl {int napi; struct bna_ccb* ccb; } ;
struct bnad {int dummy; } ;
struct bna_rx {scalar_t__ priv; } ;
struct bna_rcb {int flags; } ;
struct bna_ccb {struct bna_rcb** rcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnad*,struct bna_rcb*) ;
 int FUNC_1 (struct bnad*,struct bna_rcb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct bnad *VAR_4, struct bna_rx *VAR_5)
{
 struct bnad_rx_info *VAR_6 = (struct bnad_rx_info *)VAR_5->priv;
 struct bna_ccb *VAR_7;
 struct bna_rcb *VAR_8;
 struct bnad_rx_ctrl *VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = &VAR_6->rx_ctrl[VAR_10];
  VAR_7 = VAR_9->ccb;
  if (!VAR_7)
   continue;

  FUNC_2(&VAR_9->napi);

  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   VAR_8 = VAR_7->rcb[VAR_11];
   if (!VAR_8)
    continue;

   FUNC_0(VAR_4, VAR_8);
   FUNC_3(VAR_3, &VAR_8->flags);
   FUNC_3(VAR_2, &VAR_8->flags);
   FUNC_1(VAR_4, VAR_8);
  }
 }
}
