
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; struct net_device* dev; int pkt_type; } ;
struct net_device {int flags; } ;
struct ipvl_dev {struct net_device* dev; } ;
struct ipvl_addr {struct ipvl_dev* master; } ;
typedef int rx_handler_result_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct ipvl_dev*,unsigned int,int,int) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ipvl_addr *VAR_7, struct sk_buff **VAR_8,
       bool VAR_9)
{
 struct ipvl_dev *VAR_10 = VAR_7->master;
 struct net_device *VAR_11 = VAR_10->dev;
 unsigned int VAR_12;
 rx_handler_result_t VAR_13 = VAR_6;
 bool VAR_14 = 0;
 struct sk_buff *VAR_15 = *VAR_8;

 VAR_12 = VAR_15->len + VAR_0;



 if (VAR_9) {
  if (FUNC_4(!(VAR_11->flags & VAR_2))) {
   FUNC_2(VAR_15);
   goto out;
  }

  VAR_15 = FUNC_3(VAR_15, VAR_1);
  if (!VAR_15)
   goto out;

  *VAR_8 = VAR_15;
 }

 if (VAR_9) {
  VAR_15->pkt_type = VAR_4;
  if (FUNC_0(VAR_10->dev, VAR_15) == VAR_3)
   VAR_14 = 1;
 } else {
  VAR_15->dev = VAR_11;
  VAR_13 = VAR_5;
  VAR_14 = 1;
 }

out:
 FUNC_1(VAR_10, VAR_12, VAR_14, 0);
 return VAR_13;
}
