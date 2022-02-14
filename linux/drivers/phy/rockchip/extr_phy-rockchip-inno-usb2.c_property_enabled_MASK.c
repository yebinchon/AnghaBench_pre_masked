
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb2phy_reg {unsigned int bitstart; unsigned int enable; int offset; int bitend; } ;
struct regmap {int dummy; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static inline bool FUNC_2(struct regmap *VAR_0,
        const struct usb2phy_reg *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5 = FUNC_0(VAR_1->bitend, VAR_1->bitstart);

 VAR_2 = FUNC_1(VAR_0, VAR_1->offset, &VAR_4);
 if (VAR_2)
  return 0;

 VAR_3 = (VAR_4 & VAR_5) >> VAR_1->bitstart;
 return VAR_3 == VAR_1->enable;
}
