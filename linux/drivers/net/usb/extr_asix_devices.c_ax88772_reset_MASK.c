
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; int data; } ;
struct asix_data {int mac_addr; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct usbnet*,int ,int ) ;
 int FUNC_2 (struct usbnet*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_4)
{
 struct asix_data *VAR_5 = (struct asix_data *)&VAR_4->data;
 int VAR_6;


 FUNC_3(VAR_5->mac_addr, VAR_4->net->dev_addr);
 VAR_6 = FUNC_0(VAR_4, VAR_1, 0, 0,
        VAR_3, VAR_5->mac_addr, 0);
 if (VAR_6 < 0)
  goto out;


 VAR_6 = FUNC_2(VAR_4, VAR_2, 0);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_1(VAR_4, VAR_0, 0);
 if (VAR_6 < 0)
  goto out;

 return 0;

out:
 return VAR_6;
}
