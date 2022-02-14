
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usbnet {int rx_urb_size; TYPE_1__* net; scalar_t__ data; } ;
struct ax88179_data {int rxctl; int eee_enabled; } ;
struct TYPE_2__ {int mtu; } ;


 int * VAR_0 ;
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
 int VAR_24 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,int,int,int,int,int*) ;
 int FUNC_2 (struct usbnet*,int,int ,int,int,int*) ;
 int VAR_25 ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_26)
{
 struct ax88179_data *VAR_27 = (struct ax88179_data *)VAR_26->data;
 u8 VAR_28[5], VAR_29;
 u16 VAR_30, VAR_31, VAR_32 = VAR_23 / 10;
 u32 VAR_33 = 0x40000000;
 unsigned long VAR_34;

 VAR_34 = VAR_25 + VAR_32;
 while (VAR_33 & 0x40000000) {
  VAR_30 = 0;
  FUNC_2(VAR_26, VAR_2, VAR_14, 2, 2, &VAR_30);
  FUNC_2(VAR_26, VAR_2, VAR_14, 2, 2,
      &VAR_27->rxctl);


  FUNC_1(VAR_26, 0x81, 0x8c, 0, 4, &VAR_33);

  if (FUNC_5(VAR_25, VAR_34))
   return 0;
 }

 VAR_30 = VAR_9 | VAR_12 |
        VAR_10;

 FUNC_1(VAR_26, VAR_2, VAR_24,
    1, 1, &VAR_29);

 FUNC_1(VAR_26, VAR_3, VAR_1,
    VAR_17, 2, &VAR_31);

 if (!(VAR_31 & VAR_21)) {
  return 0;
 } else if (VAR_20 == (VAR_31 & VAR_22)) {
  VAR_30 |= VAR_6 | VAR_4;
  if (VAR_26->net->mtu > 1500)
   VAR_30 |= VAR_7;

  if (VAR_29 & VAR_16)
   FUNC_3(VAR_28, &VAR_0[0], 5);
  else if (VAR_29 & VAR_15)
   FUNC_3(VAR_28, &VAR_0[1], 5);
  else
   FUNC_3(VAR_28, &VAR_0[3], 5);
 } else if (VAR_18 == (VAR_31 & VAR_22)) {
  VAR_30 |= VAR_8;

  if (VAR_29 & (VAR_16 | VAR_15))
   FUNC_3(VAR_28, &VAR_0[2], 5);
  else
   FUNC_3(VAR_28, &VAR_0[3], 5);
 } else {
  FUNC_3(VAR_28, &VAR_0[3], 5);
 }


 FUNC_2(VAR_26, VAR_2, VAR_13, 5, 5, VAR_28);

 VAR_26->rx_urb_size = (1024 * (VAR_28[3] + 2));

 if (VAR_31 & VAR_19)
  VAR_30 |= VAR_5;
 FUNC_2(VAR_26, VAR_2, VAR_11,
     2, 2, &VAR_30);

 VAR_27->eee_enabled = FUNC_0(VAR_26);

 FUNC_4(VAR_26->net);

 return 0;
}
