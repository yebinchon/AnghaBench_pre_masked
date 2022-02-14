
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rocker_port {struct net_device* dev; } ;
struct rocker_desc_info {scalar_t__ tlv_size; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,size_t) ;
 int FUNC_2 (struct rocker_desc_info*,struct sk_buff*) ;
 int FUNC_3 (struct rocker_port const*,struct rocker_desc_info*,struct sk_buff*,size_t) ;
 size_t FUNC_4 (struct rocker_port const*) ;

__attribute__((used)) static int FUNC_5(const struct rocker_port *VAR_1,
     struct rocker_desc_info *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 struct sk_buff *VAR_4;
 size_t VAR_5 = FUNC_4(VAR_1);
 int VAR_6;




 FUNC_2(VAR_2, ((void*)0));
 VAR_2->tlv_size = 0;

 VAR_4 = FUNC_1(VAR_3, VAR_5);
 if (!VAR_4)
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4);
  return VAR_6;
 }
 FUNC_2(VAR_2, VAR_4);
 return 0;
}
