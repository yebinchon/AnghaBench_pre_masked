
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; struct aqc111_data* driver_priv; } ;
struct aqc111_data {int link; int rxctl; } ;
struct TYPE_4__ {int features; int mtu; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,struct aqc111_data*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_5 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_24)
{
 struct aqc111_data *VAR_25 = VAR_24->driver_priv;
 u16 VAR_26 = 0;
 u8 VAR_27 = 0;

 if (VAR_25->link == 1) {
  FUNC_1(VAR_24, VAR_25);


  VAR_27 = VAR_22;
  if (VAR_24->net->features & VAR_1)
   VAR_27 |= VAR_21;

  FUNC_5(VAR_24, VAR_0, VAR_23,
     1, 1, &VAR_27);

  VAR_27 = 0x0;
  FUNC_5(VAR_24, VAR_0, VAR_3,
     1, 1, &VAR_27);

  FUNC_5(VAR_24, VAR_0, VAR_4,
     1, 1, &VAR_27);

  FUNC_5(VAR_24, VAR_0, VAR_2, 1, 1, &VAR_27);

  VAR_26 = VAR_18 | VAR_17;
  VAR_25->rxctl = VAR_26;
  FUNC_4(VAR_24, VAR_0, VAR_16, 2, &VAR_26);

  VAR_27 = VAR_20;
  FUNC_5(VAR_24, VAR_0, VAR_8,
     1, 1, &VAR_27);

  VAR_27 = VAR_6;
  FUNC_5(VAR_24, VAR_0, VAR_5,
     1, 1, &VAR_27);

  VAR_26 = 0;
  FUNC_4(VAR_24, VAR_0, VAR_13,
       2, &VAR_26);

  VAR_26 = VAR_15 | VAR_9;
  FUNC_4(VAR_24, VAR_0, VAR_13,
       2, &VAR_26);

  FUNC_0(VAR_24);

  FUNC_3(VAR_24->net);

  FUNC_2(VAR_24, VAR_0, VAR_13,
      2, &VAR_26);

  if (VAR_24->net->mtu > 1500)
   VAR_26 |= VAR_10;

  VAR_26 |= VAR_11 | VAR_12 |
    VAR_14;
  FUNC_4(VAR_24, VAR_0, VAR_13,
       2, &VAR_26);

  VAR_25->rxctl |= VAR_19;
  FUNC_4(VAR_24, VAR_0, VAR_16,
       2, &VAR_25->rxctl);

  FUNC_7(VAR_24->net);
 } else {
  FUNC_2(VAR_24, VAR_0, VAR_13,
      2, &VAR_26);
  VAR_26 &= ~VAR_11;
  FUNC_4(VAR_24, VAR_0, VAR_13,
       2, &VAR_26);

  VAR_25->rxctl &= ~VAR_19;
  FUNC_4(VAR_24, VAR_0, VAR_16,
       2, &VAR_25->rxctl);

  VAR_27 = VAR_7 | VAR_6;
  FUNC_5(VAR_24, VAR_0, VAR_5,
     1, 1, &VAR_27);
  VAR_27 = VAR_6;
  FUNC_5(VAR_24, VAR_0, VAR_5,
     1, 1, &VAR_27);

  FUNC_6(VAR_24->net);
 }
 return 0;
}
