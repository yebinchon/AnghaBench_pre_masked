
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct kaweth_device {int packet_filter_bitmap; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct kaweth_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct kaweth_device *VAR_8 = FUNC_2(VAR_7);

 __u16 VAR_9 = VAR_4 |
                                     VAR_3 |
                       VAR_5;

 FUNC_0(VAR_7, "Setting Rx mode to %d\n", VAR_9);

 FUNC_3(VAR_7);

 if (VAR_7->flags & VAR_1) {
  VAR_9 |= VAR_6;
 }
 else if (!FUNC_1(VAR_7) || (VAR_7->flags & VAR_0)) {
  VAR_9 |= VAR_2;
 }

 VAR_8->packet_filter_bitmap = VAR_9;
 FUNC_4(VAR_7);
}
