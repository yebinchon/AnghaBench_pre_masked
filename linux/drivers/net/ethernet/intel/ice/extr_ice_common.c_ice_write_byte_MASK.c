
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ice_ctx_ele {int offset; int lsb; int width; } ;
typedef int dest_byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_2(u8 *VAR_0, u8 *VAR_1, const struct ice_ctx_ele *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 u8 *VAR_6, *VAR_7;
 u16 VAR_8;


 VAR_6 = VAR_0 + VAR_2->offset;


 VAR_8 = VAR_2->lsb % 8;
 VAR_5 = (u8)(FUNC_0(VAR_2->width) - 1);

 VAR_3 = *VAR_6;
 VAR_3 &= VAR_5;


 VAR_5 <<= VAR_8;
 VAR_3 <<= VAR_8;


 VAR_7 = VAR_1 + (VAR_2->lsb / 8);

 FUNC_1(&VAR_4, VAR_7, sizeof(VAR_4));

 VAR_4 &= ~VAR_5;
 VAR_4 |= VAR_3;


 FUNC_1(VAR_7, &VAR_4, sizeof(VAR_4));
}
