
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_3 (struct usbnet*,int ,int ,int,int,int*) ;
 struct usbnet* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, __be16 VAR_7, u16 VAR_8)
{
 struct usbnet *VAR_9 = FUNC_4(VAR_6);
 u8 VAR_10 = 0;
 u16 VAR_11 = 0;
 u8 VAR_12 = 0;

 FUNC_1(VAR_9, VAR_0, VAR_4, 1, 1, &VAR_12);
 VAR_10 = VAR_12;


 VAR_12 = (VAR_8 / 16);
 FUNC_3(VAR_9, VAR_0, VAR_3, 1, 1, &VAR_12);

 VAR_12 = VAR_10 | VAR_1;
 FUNC_3(VAR_9, VAR_0, VAR_4, 1, 1, &VAR_12);
 FUNC_0(VAR_9, VAR_0, VAR_5, 2, &VAR_11);
 VAR_11 |= (1 << (VAR_8 % 16));
 FUNC_2(VAR_9, VAR_0, VAR_5, 2, &VAR_11);
 VAR_12 = VAR_10 | VAR_2;
 FUNC_3(VAR_9, VAR_0, VAR_4, 1, 1, &VAR_12);

 return 0;
}
