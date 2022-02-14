
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static u16 FUNC_3(struct net_device *VAR_3, u16 VAR_4, int VAR_5)
{
 u16 VAR_6 = 0;
 int VAR_7 = 16;

 FUNC_2(VAR_3, VAR_0, 1);
 FUNC_0(VAR_3);

 while (VAR_5--) {
  FUNC_2(VAR_3, VAR_2,
           (VAR_4 >> VAR_5) & 0x1);
  FUNC_0(VAR_3);
 }

 FUNC_2(VAR_3, VAR_2, 0);

 while (VAR_7--) {
  FUNC_0(VAR_3);
  VAR_6 |= FUNC_1(VAR_3, VAR_1) << VAR_7;
 }

 FUNC_2(VAR_3, VAR_0, 0);
 FUNC_0(VAR_3);

 return VAR_6;
}
