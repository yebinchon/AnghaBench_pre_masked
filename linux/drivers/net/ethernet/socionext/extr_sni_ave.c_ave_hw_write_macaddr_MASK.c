
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 struct ave_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char const,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     const unsigned char *VAR_1,
     int VAR_2, int VAR_3)
{
 struct ave_private *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_1[0] | VAR_1[1] << 8 |
        VAR_1[2] << 16 | VAR_1[3] << 24, VAR_4->base + VAR_2);
 FUNC_1(VAR_1[4] | VAR_1[5] << 8, VAR_4->base + VAR_3);
}
