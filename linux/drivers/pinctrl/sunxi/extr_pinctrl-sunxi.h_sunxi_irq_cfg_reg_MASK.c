
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sunxi_pinctrl_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sunxi_pinctrl_desc const*,int) ;

__attribute__((used)) static inline u32 FUNC_1(const struct sunxi_pinctrl_desc *VAR_4,
        u16 VAR_5)
{
 u8 VAR_6 = VAR_5 / VAR_3;
 u8 VAR_7 = (VAR_5 % VAR_3) / VAR_0 * 0x04;

 return VAR_1 +
        FUNC_0(VAR_4, VAR_6) * VAR_2 + VAR_7;
}
