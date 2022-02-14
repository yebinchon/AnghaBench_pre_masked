
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct lpc18xx_rgu_data {int delay_us; } ;




 int FUNC_0 (struct reset_controller_dev*,unsigned long) ;
 int FUNC_1 (struct reset_controller_dev*,unsigned long,int) ;
 struct lpc18xx_rgu_data* FUNC_2 (struct reset_controller_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct reset_controller_dev *VAR_0,
        unsigned long VAR_1)
{
 struct lpc18xx_rgu_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_2->delay_us);

 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_1(VAR_0, VAR_1, 0);
 }

 return 0;
}
