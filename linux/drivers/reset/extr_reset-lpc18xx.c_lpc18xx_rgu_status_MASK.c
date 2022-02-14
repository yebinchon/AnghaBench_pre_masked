
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct lpc18xx_rgu_data {int base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 struct lpc18xx_rgu_data* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_2,
         unsigned long VAR_3)
{
 struct lpc18xx_rgu_data *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5, VAR_6 = VAR_0;

 VAR_6 += (VAR_3 / VAR_1) * sizeof(u32);
 VAR_5 = 1 << (VAR_3 % VAR_1);

 return !(FUNC_0(VAR_4->base + VAR_6) & VAR_5);
}
