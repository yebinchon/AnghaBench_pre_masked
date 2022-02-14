
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hinic_dev {int num_qps; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hinic_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, int VAR_6)
{
 struct hinic_dev *VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_7->num_qps;
  VAR_8 = FUNC_0(VAR_1) +
   (FUNC_0(VAR_4) +
   FUNC_0(VAR_3)) * VAR_9;

  VAR_8 += FUNC_0(VAR_2);

  return VAR_8;
 default:
  return -VAR_0;
 }
}
