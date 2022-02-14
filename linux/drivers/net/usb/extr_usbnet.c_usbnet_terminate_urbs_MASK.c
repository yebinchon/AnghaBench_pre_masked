
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int wait; int net; int done; int txq; int rxq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct usbnet*,int ,int ,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usbnet*,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usbnet *VAR_5)
{
 FUNC_0(VAR_4, VAR_2);
 int VAR_6;


 FUNC_1(&VAR_5->wait, &VAR_4);
 FUNC_4(VAR_1);
 VAR_6 = FUNC_5(VAR_5, &VAR_5->txq) +
  FUNC_5(VAR_5, &VAR_5->rxq);


 FUNC_6(&VAR_5->rxq);
 FUNC_6(&VAR_5->txq);
 FUNC_6(&VAR_5->done);
 FUNC_2(VAR_5, VAR_3, VAR_5->net,
    "waited for %d urb completions\n", VAR_6);
 FUNC_4(VAR_0);
 FUNC_3(&VAR_5->wait, &VAR_4);
}
