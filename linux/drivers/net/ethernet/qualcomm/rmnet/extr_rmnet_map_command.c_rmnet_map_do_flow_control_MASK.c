
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct rmnet_port {int dummy; } ;
struct rmnet_endpoint {struct net_device* egress_dev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 struct rmnet_endpoint* FUNC_2 (struct rmnet_port*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static u8 FUNC_4(struct sk_buff *VAR_4,
        struct rmnet_port *VAR_5,
        int VAR_6)
{
 struct rmnet_endpoint *VAR_7;
 struct net_device *VAR_8;
 u8 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_4);

 if (VAR_9 >= VAR_2) {
  FUNC_1(VAR_4);
  return VAR_3;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_9);
 if (!VAR_7) {
  FUNC_1(VAR_4);
  return VAR_3;
 }

 VAR_8 = VAR_7->egress_dev;





 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_4);
  return VAR_1;
 } else {
  return VAR_0;
 }
}
