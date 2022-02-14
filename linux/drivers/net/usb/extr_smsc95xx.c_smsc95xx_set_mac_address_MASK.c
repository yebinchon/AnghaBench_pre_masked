
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_2)
{
 u32 VAR_3 = VAR_2->net->dev_addr[0] | VAR_2->net->dev_addr[1] << 8 |
  VAR_2->net->dev_addr[2] << 16 | VAR_2->net->dev_addr[3] << 24;
 u32 VAR_4 = VAR_2->net->dev_addr[4] | VAR_2->net->dev_addr[5] << 8;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_2, VAR_0, VAR_4);
}
