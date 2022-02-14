
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct spider_net_card*,int ) ;
 int FUNC_2 (struct spider_net_card*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3, int VAR_4, int VAR_5)
{
 struct spider_net_card *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7;

 VAR_7 = ((u32)VAR_4 << 21) | ((u32)VAR_5 << 16);
 FUNC_2(VAR_6, VAR_0, VAR_7);




 do {
  VAR_7 = FUNC_1(VAR_6, VAR_0);
 } while (VAR_7 & VAR_2);

 VAR_7 &= VAR_1;

 return VAR_7;
}
