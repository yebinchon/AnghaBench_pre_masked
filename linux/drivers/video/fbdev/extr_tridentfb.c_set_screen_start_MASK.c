
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tridentfb_par*,int ) ;
 int FUNC_1 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_4, int VAR_5)
{
 u8 VAR_6;
 FUNC_1(VAR_4, VAR_3, VAR_5 & 0xFF);
 FUNC_1(VAR_4, VAR_2, (VAR_5 & 0xFF00) >> 8);
 VAR_6 = FUNC_0(VAR_4, VAR_0) & 0xDF;
 FUNC_1(VAR_4, VAR_0, VAR_6 | ((VAR_5 & 0x10000) >> 11));
 VAR_6 = FUNC_0(VAR_4, VAR_1) & 0xF8;
 FUNC_1(VAR_4, VAR_1, VAR_6 | ((VAR_5 & 0xE0000) >> 17));
}
