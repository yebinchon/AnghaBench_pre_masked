
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ks_net {scalar_t__ enabled; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_net*) ;
 int FUNC_1 (struct ks_net*) ;
 int FUNC_2 (struct ks_net*,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ks_net *VAR_4, u8 *VAR_5)
{
 u16 *VAR_6 = (u16 *)VAR_5;
 u16 VAR_7, VAR_8;

 FUNC_1(VAR_4);

 VAR_8 = *VAR_6++;
 VAR_7 = ((VAR_8 & 0xFF) << 8) | ((VAR_8 >> 8) & 0xFF);
 FUNC_2(VAR_4, VAR_1, VAR_7);

 VAR_8 = *VAR_6++;
 VAR_7 = ((VAR_8 & 0xFF) << 8) | ((VAR_8 >> 8) & 0xFF);
 FUNC_2(VAR_4, VAR_3, VAR_7);

 VAR_8 = *VAR_6;
 VAR_7 = ((VAR_8 & 0xFF) << 8) | ((VAR_8 >> 8) & 0xFF);
 FUNC_2(VAR_4, VAR_2, VAR_7);

 FUNC_3(VAR_4->mac_addr, VAR_5, VAR_0);

 if (VAR_4->enabled)
  FUNC_0(VAR_4);
}
