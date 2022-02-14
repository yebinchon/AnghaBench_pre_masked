
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adv748x_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adv748x_state*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adv748x_state *VAR_4, int VAR_5)
{
 u8 VAR_6, VAR_7;


 VAR_6 = VAR_2;
 VAR_6 |= (VAR_5 & 0x300) >> 8;
 VAR_7 = VAR_5 & 0xff;


 FUNC_0(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_0, VAR_7);

 VAR_6 |= (VAR_5 & 0x300) >> 6;

 FUNC_0(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_3, VAR_7);
}
