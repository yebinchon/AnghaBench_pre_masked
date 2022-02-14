
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct usbnet {int net; TYPE_1__ mii; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*,int ,int,int ,int ,int *) ;
 int FUNC_6 (struct usbnet*,int ) ;
 int FUNC_7 (struct usbnet*,int ) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_11)
{
 u16 VAR_12;
 int VAR_13;

 FUNC_2(VAR_11->net, VAR_11->mii.phy_id, VAR_4, VAR_2);
 FUNC_2(VAR_11->net, VAR_11->mii.phy_id, VAR_3,
        VAR_0 | VAR_1);
 FUNC_0(&VAR_11->mii);

 VAR_13 = FUNC_6(VAR_11, VAR_8);
 if (VAR_13 < 0)
  goto out;

 VAR_13 = FUNC_5(VAR_11, VAR_9,
    VAR_5 | VAR_6,
    VAR_7, 0, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->net, "Write IPG,IPG1,IPG2 failed: %d\n", VAR_13);
  goto out;
 }


 VAR_13 = FUNC_7(VAR_11, VAR_10);
 if (VAR_13 < 0)
  goto out;

 VAR_12 = FUNC_4(VAR_11);
 FUNC_1(VAR_11->net, "RX_CTL is 0x%04x after all initializations\n",
     VAR_12);

 VAR_12 = FUNC_3(VAR_11);
 FUNC_1(VAR_11->net, "Medium Status:0x%04x after all initializations\n",
     VAR_12);

 return 0;
out:
 return VAR_13;
}
