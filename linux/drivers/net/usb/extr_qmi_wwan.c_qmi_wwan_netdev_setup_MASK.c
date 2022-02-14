
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int flags; int data; } ;
struct qmi_wwan_state {int flags; } ;
struct net_device {int flags; int mtu; int * header_ops; scalar_t__ addr_len; scalar_t__ hard_header_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct usbnet *VAR_7 = FUNC_3(VAR_6);
 struct qmi_wwan_state *VAR_8 = (void *)&VAR_7->data;

 if (VAR_8->flags & VAR_5) {
  VAR_6->header_ops = ((void*)0);
  VAR_6->type = VAR_0;
  VAR_6->hard_header_len = 0;
  VAR_6->addr_len = 0;
  VAR_6->flags = VAR_4 | VAR_3 | VAR_2;
  FUNC_4(VAR_1, &VAR_7->flags);
  FUNC_2(VAR_6, "mode: raw IP\n");
 } else if (!VAR_6->header_ops) {
  FUNC_1(VAR_6);
  FUNC_0(VAR_1, &VAR_7->flags);
  FUNC_2(VAR_6, "mode: Ethernet\n");
 }


 FUNC_5(VAR_6, VAR_6->mtu);
}
