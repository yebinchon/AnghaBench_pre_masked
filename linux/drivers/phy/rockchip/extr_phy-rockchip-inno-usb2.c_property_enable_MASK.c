
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb2phy_reg {unsigned int enable; unsigned int disable; unsigned int bitstart; int offset; int bitend; } ;
struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct regmap *VAR_1,
      const struct usb2phy_reg *VAR_2, bool VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_3 ? VAR_2->enable : VAR_2->disable;
 VAR_5 = FUNC_0(VAR_2->bitend, VAR_2->bitstart);
 VAR_4 = (VAR_6 << VAR_2->bitstart) | (VAR_5 << VAR_0);

 return FUNC_1(VAR_1, VAR_2->offset, VAR_4);
}
