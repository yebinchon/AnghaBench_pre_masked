
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int flags; int name; int dev; } ;
typedef int rx_creg ;
typedef int rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int * FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 rtl8150_t *VAR_4 = FUNC_4(VAR_3);
 u16 VAR_5 = 0x9e;

 FUNC_5(VAR_3);
 if (VAR_3->flags & VAR_1) {
  VAR_5 |= 0x0001;
  FUNC_2(&VAR_3->dev, "%s: promiscuous mode\n", VAR_3->name);
 } else if (!FUNC_3(VAR_3) ||
     (VAR_3->flags & VAR_0)) {
  VAR_5 &= 0xfffe;
  VAR_5 |= 0x0002;
  FUNC_1(&VAR_3->dev, "%s: allmulti set\n", VAR_3->name);
 } else {

  VAR_5 &= 0x00fc;
 }
 FUNC_0(VAR_4, VAR_2, sizeof(VAR_5), VAR_5);
 FUNC_6(VAR_3);
}
