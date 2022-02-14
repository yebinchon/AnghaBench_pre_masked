
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct velocity_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ifreq*,int) ;
 int FUNC_3 (struct velocity_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct velocity_info *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;




 if (!FUNC_1(VAR_3))
  FUNC_3(VAR_6, VAR_1);

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
  break;

 default:
  VAR_7 = -VAR_0;
 }
 if (!FUNC_1(VAR_3))
  FUNC_3(VAR_6, VAR_2);


 return VAR_7;
}
