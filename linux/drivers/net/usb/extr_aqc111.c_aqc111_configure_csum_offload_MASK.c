
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int features; } ;


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
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;

__attribute__((used)) static void FUNC_1(struct usbnet *VAR_16)
{
 u8 VAR_17 = 0;

 if (VAR_16->net->features & VAR_3) {
  VAR_17 |= VAR_5 | VAR_6 | VAR_8 |
   VAR_7 | VAR_9;
 }
 FUNC_0(VAR_16, VAR_0, VAR_4, 1, 1, &VAR_17);

 VAR_17 = 0;
 if (VAR_16->net->features & VAR_2)
  VAR_17 |= VAR_11 | VAR_12 | VAR_14;

 if (VAR_16->net->features & VAR_1)
  VAR_17 |= VAR_13 | VAR_15;

 FUNC_0(VAR_16, VAR_0, VAR_10, 1, 1, &VAR_17);
}
