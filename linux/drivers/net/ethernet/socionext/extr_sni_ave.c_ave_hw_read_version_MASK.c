
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 struct ave_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, char *VAR_2, int VAR_3)
{
 struct ave_private *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_4->base + VAR_0);
 VAR_5 = (VAR_7 & FUNC_0(15, 8)) >> 8;
 VAR_6 = (VAR_7 & FUNC_0(7, 0));
 FUNC_3(VAR_2, VAR_3, "v%u.%u", VAR_5, VAR_6);
}
