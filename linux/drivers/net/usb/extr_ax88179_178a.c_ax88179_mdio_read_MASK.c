
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int,int*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_1(VAR_1);
 u16 VAR_5;

 FUNC_0(VAR_4, VAR_0, VAR_2, (__u16)VAR_3, 2, &VAR_5);
 return VAR_5;
}
