
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {int int_cr1; int ssp_type; TYPE_2__* controller; } ;
struct chip_data {int threshold; } ;
struct TYPE_4__ {TYPE_1__* cur_msg; } ;
struct TYPE_3__ {int spi; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ,int) ;
 struct chip_data* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct driver_data *VAR_4)
{
 struct chip_data *VAR_5 =
  FUNC_2(VAR_4->controller->cur_msg->spi);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2) & ~VAR_4->int_cr1;
 switch (VAR_4->ssp_type) {
 case 128:
  VAR_6 &= ~VAR_1;
  break;
 case 129:
  VAR_6 &= ~VAR_0;
  break;
 default:
  VAR_6 &= ~VAR_3;
  break;
 }
 VAR_6 |= VAR_5->threshold;
 FUNC_1(VAR_4, VAR_2, VAR_6);
}
