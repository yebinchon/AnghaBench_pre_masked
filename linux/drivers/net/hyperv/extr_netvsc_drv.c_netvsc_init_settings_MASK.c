
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int duplex; int speed; int l4_hash; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4)
{
 struct net_device_context *VAR_5 = FUNC_0(VAR_4);

 VAR_5->l4_hash = VAR_1;

 VAR_5->speed = VAR_3;
 VAR_5->duplex = VAR_0;

 VAR_4->features = VAR_2;
}
