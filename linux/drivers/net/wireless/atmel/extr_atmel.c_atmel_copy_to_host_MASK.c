
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 unsigned char FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, unsigned char *VAR_2,
          u16 VAR_3, u16 VAR_4)
{
 int VAR_5;
 FUNC_2(VAR_1, VAR_3);
 if (VAR_3 % 2) {
  *VAR_2 = FUNC_1(VAR_1, VAR_0);
  VAR_2++; VAR_4--;
 }
 for (VAR_5 = VAR_4; VAR_5 > 1 ; VAR_5 -= 2) {
  u16 VAR_6 = FUNC_0(VAR_1, VAR_0);
  *VAR_2++ = VAR_6;
  *VAR_2++ = VAR_6 >> 8;
 }
 if (VAR_5)
  *VAR_2 = FUNC_1(VAR_1, VAR_0);
}
