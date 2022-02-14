
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int txmask; int txcarrier; scalar_t__ txstate; int * txbuf; int dev; int rxstate; scalar_t__ sbase; scalar_t__ ebase; scalar_t__ wbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_36 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_37 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct wbcir_data*,int ) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (struct wbcir_data*,int) ;

__attribute__((used)) static void
FUNC_7(struct wbcir_data *VAR_38)
{

 FUNC_6(VAR_38, VAR_8);


 FUNC_5(VAR_38->wbase + VAR_30, VAR_36 ? 8 : 0, 0x09);


 FUNC_5(VAR_38->wbase + VAR_32, 0x17, 0x17);


 FUNC_5(VAR_38->wbase + VAR_31, 0x00, 0x07);


 FUNC_5(VAR_38->wbase + VAR_29, 0x4A, 0x7F);


 if (VAR_36)
  FUNC_2(VAR_10, VAR_38->ebase + VAR_11);
 else
  FUNC_2(0x00, VAR_38->ebase + VAR_11);





 FUNC_2(0x10, VAR_38->ebase + VAR_12);
 VAR_38->txmask = 0x1;


 FUNC_4(VAR_38, VAR_1);
 FUNC_2(VAR_6, VAR_38->sbase + VAR_16);
 FUNC_2(0x30, VAR_38->sbase + VAR_17);


 FUNC_2(0x0f, VAR_38->sbase + VAR_15);
 FUNC_2(0x00, VAR_38->sbase + VAR_14);


 FUNC_4(VAR_38, VAR_0);
 FUNC_2(0xC0, VAR_38->sbase + VAR_26);
 FUNC_0(VAR_38->sbase + VAR_25);
 FUNC_0(VAR_38->sbase + VAR_27);


 FUNC_4(VAR_38, VAR_5);
 FUNC_2(0x90, VAR_38->sbase + VAR_28);


 FUNC_4(VAR_38, VAR_2);
 FUNC_2(0x00, VAR_38->sbase + VAR_20);


 FUNC_4(VAR_38, VAR_3);
 FUNC_2(VAR_37 ? 0x03 : 0x02, VAR_38->sbase + VAR_21);


 FUNC_4(VAR_38, VAR_4);
 FUNC_2(0x20, VAR_38->sbase + VAR_22);


 FUNC_4(VAR_38, VAR_5);
 FUNC_2(0xF2, VAR_38->sbase + VAR_23);


 FUNC_2(0x69, VAR_38->sbase + VAR_24);
 VAR_38->txcarrier = 36000;


 if (VAR_36)
  FUNC_2(0x10, VAR_38->sbase + VAR_19);
 else
  FUNC_2(0x00, VAR_38->sbase + VAR_19);


 FUNC_4(VAR_38, VAR_0);
 FUNC_2(0x97, VAR_38->sbase + VAR_18);


 FUNC_2(0xE0, VAR_38->sbase + VAR_13);


 VAR_38->rxstate = VAR_33;
 FUNC_3(VAR_38->dev, 1);


 if (VAR_38->txstate == VAR_34) {
  FUNC_1(VAR_38->txbuf);
  VAR_38->txbuf = ((void*)0);
  VAR_38->txstate = VAR_35;
 }


 FUNC_6(VAR_38, VAR_9 | VAR_7);
}
