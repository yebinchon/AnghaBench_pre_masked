
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qede_dev*,struct ifreq*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct qede_dev *VAR_6 = FUNC_1(VAR_3);

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 switch (VAR_5) {
 case 128:
  return FUNC_3(VAR_6, VAR_4);
 default:
  FUNC_0(VAR_6, VAR_2,
      "default IOCTL cmd 0x%x\n", VAR_5);
  return -VAR_1;
 }

 return 0;
}
