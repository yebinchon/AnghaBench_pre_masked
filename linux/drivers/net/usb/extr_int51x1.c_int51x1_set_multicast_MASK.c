
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; } ;
struct net_device {int flags; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct usbnet*,int ,int,int,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_10)
{
 struct usbnet *VAR_11 = FUNC_3(VAR_10);
 u16 VAR_12 = VAR_4 | VAR_3;

 if (VAR_10->flags & VAR_1) {

  VAR_12 |= VAR_5;
  FUNC_1(VAR_11->net, "promiscuous mode enabled\n");
 } else if (!FUNC_2(VAR_10) ||
    (VAR_10->flags & VAR_0)) {
  VAR_12 |= VAR_2;
  FUNC_0(VAR_11->net, "receive all multicast enabled\n");
 } else {

  FUNC_0(VAR_11->net, "receive own packets only\n");
 }

 FUNC_4(VAR_11, VAR_6,
          VAR_7 | VAR_9 | VAR_8,
          VAR_12, 0, ((void*)0), 0);
}
