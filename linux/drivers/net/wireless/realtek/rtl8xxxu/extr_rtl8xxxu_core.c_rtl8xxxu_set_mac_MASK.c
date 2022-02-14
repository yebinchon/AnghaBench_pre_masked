
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rtl8xxxu_priv {int * mac_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtl8xxxu_priv*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct rtl8xxxu_priv *VAR_2)
{
 int VAR_3;
 u16 VAR_4;

 VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_4 + VAR_3, VAR_2->mac_addr[VAR_3]);

 return 0;
}
