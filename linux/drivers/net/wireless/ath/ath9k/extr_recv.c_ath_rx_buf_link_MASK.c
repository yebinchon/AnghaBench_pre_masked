
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {scalar_t__* rxlink; } ;
struct ath_softc {TYPE_1__ rx; struct ath_hw* sc_ah; } ;
struct ath_rxbuf {scalar_t__ bf_daddr; struct sk_buff* bf_mpdu; int bf_buf_addr; struct ath_desc* bf_desc; } ;
struct ath_hw {int dummy; } ;
struct ath_desc {scalar_t__ ds_link; int ds_vdata; int ds_data; } ;
struct ath_common {int rx_bufsize; } ;


 int FUNC_0 (int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,scalar_t__) ;
 int FUNC_3 (struct ath_hw*,struct ath_desc*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_0, struct ath_rxbuf *VAR_1,
       bool VAR_2)
{
 struct ath_hw *VAR_3 = VAR_0->sc_ah;
 struct ath_common *VAR_4 = FUNC_1(VAR_3);
 struct ath_desc *VAR_5;
 struct sk_buff *VAR_6;

 VAR_5 = VAR_1->bf_desc;
 VAR_5->ds_link = 0;
 VAR_5->ds_data = VAR_1->bf_buf_addr;


 VAR_6 = VAR_1->bf_mpdu;
 FUNC_0(VAR_6 == ((void*)0));
 VAR_5->ds_vdata = VAR_6->data;






 FUNC_3(VAR_3, VAR_5,
        VAR_4->rx_bufsize,
        0);

 if (VAR_0->rx.rxlink)
  *VAR_0->rx.rxlink = VAR_1->bf_daddr;
 else if (!VAR_2)
  FUNC_2(VAR_3, VAR_1->bf_daddr);

 VAR_0->rx.rxlink = &VAR_5->ds_link;
}
