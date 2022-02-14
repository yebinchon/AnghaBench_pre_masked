
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct cas {int min_frame_size; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cas*,int,struct sk_buff*) ;
 struct cas* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct cas *VAR_5 = FUNC_1(VAR_4);




 static int VAR_6;

 if (FUNC_2(VAR_3, VAR_5->min_frame_size))
  return VAR_1;




 if (FUNC_0(VAR_5, VAR_6++ & VAR_2, VAR_3))
  return VAR_0;
 return VAR_1;
}
