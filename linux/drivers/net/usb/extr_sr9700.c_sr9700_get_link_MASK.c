
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*,int ,int*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4 = 0;
 int VAR_5 = 0;


 FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_4 & VAR_0)
  VAR_5 = 1;

 return VAR_5;
}
