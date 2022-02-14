
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct enc28j60_net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct enc28j60_net*,scalar_t__) ;
 int FUNC_1 (struct enc28j60_net*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct enc28j60_net *VAR_1, u8 VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2, (u8) VAR_3);
 FUNC_1(VAR_1, VAR_0, VAR_2 + 1,
       (u8) (VAR_3 >> 8));
}
