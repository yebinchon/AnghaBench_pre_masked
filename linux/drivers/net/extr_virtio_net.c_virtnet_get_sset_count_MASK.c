
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int curr_queue_pairs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, int VAR_4)
{
 struct virtnet_info *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  return VAR_5->curr_queue_pairs * (VAR_1 +
            VAR_2);
 default:
  return -VAR_0;
 }
}
